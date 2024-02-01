/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_boss_fight
*/

#include "my_rpg.h"
#include <stdio.h>

void move_boss_rect(rpg_t *rpg)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (BOSS_GEST->akaza->boss_clock)) >= 100) {
        if (BOSS_GEST->akaza->rect.left < 1218)
            BOSS_GEST->akaza->rect.left += 174;
        else
            BOSS_GEST->akaza->rect.left = 0;
        sfClock_restart(BOSS_GEST->akaza->boss_clock);
    }
}

void boss_life(rpg_t *rpg)
{
    BOSS_GEST->akaza->life_bar.bar_rect.width =
    (((BOSS_GEST->akaza->life / 8) * 4.12));
    sfSprite_setTextureRect(BOSS_GEST->akaza->life_bar.bar_sprite,
    BOSS_GEST->akaza->life_bar.bar_rect);
    sfSprite_setPosition(BOSS_GEST->akaza->life_bar.back_bar_sprite,
    AKAZA_BAR_POS);
    sfRenderWindow_drawSprite(BASE->window,
    BOSS_GEST->akaza->life_bar.back_bar_sprite, sfFalse);
    sfSprite_setPosition(BOSS_GEST->akaza->life_bar.bar_sprite,
    AKAZA_BAR_POS);
    sfRenderWindow_drawSprite(BASE->window,
    BOSS_GEST->akaza->life_bar.bar_sprite, sfFalse);
}

void display_boss(rpg_t *rpg)
{
    move_boss_rect(rpg);
    sfSprite_setTexture(BOSS_GEST->akaza->boss_sprite,
    BOSS_GEST->akaza->boss_texture, sfFalse);
    sfSprite_setTextureRect(BOSS_GEST->akaza->boss_sprite,
    BOSS_GEST->akaza->rect);
    sfSprite_setPosition(BOSS_GEST->akaza->boss_sprite, BOSS_GEST->akaza->pos);
    sfRenderWindow_drawSprite(BASE->window, BOSS_GEST->akaza->boss_sprite,
    sfFalse);
    boss_life(rpg);
}

void cave_gestion(rpg_t *rpg)
{
    moove_bako(rpg);
    conditions_bako(rpg, BOSS_GEST->obs, BOSS_GEST->nb_obs);
    sfRenderWindow_clear(BASE->window, sfBlack);
    sfView_setCenter(GAME_VAR->view, GAME_VAR->p_pos);
    sfRenderWindow_drawSprite(BASE->window, BOSS_GEST->cave_sprite, NULL);
    display_bako(rpg);
    GAME_VAR->is_attacking >= 0 ? players_attacks(rpg) : 0;
    BOSS_GEST->akaza->minions_gest ?
    display_mobs(rpg, BOSS_GEST->akaza->minions_gest,
    BOSS_GEST->obs, BOSS_GEST->nb_obs) : 0;
    invisibility_gestion(rpg);
    tp_gestion(rpg);
    BOSS_GEST->akaza->life > 0 ? display_boss(rpg) : 0;
    display_inventory(rpg);
    disp_weapon(rpg);
    GAME_VAR->bako_life < 0 ? my_specific_menus(rpg, MENUS[m_died]) : 0;
    GAME->inv->open == 0 ? display_bars(rpg) : 0;
    sfRenderWindow_setView(BASE->window, GAME_VAR->view);
    sfRenderWindow_display(BASE->window);
}

void boss_fight(rpg_t *rpg)
{
    while (sfRenderWindow_isOpen(BASE->window) && BOSS_GEST->is_in_arena) {
        cave_gestion(rpg);
        while (sfRenderWindow_pollEvent(BASE->window, &GAME_VAR->events)) {
            check_event_game(rpg);
        }
    }
}