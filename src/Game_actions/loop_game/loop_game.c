/*
** EPITECH PROJECT, 2022
** My_rpg
** File description:
** loop_game
*/

#include "my_rpg.h"
#include <stdio.h>

void my_clock_players(rpg_t *rpg, int player)
{
    GAME->p[player].time = sfClock_getElapsedTime
    (GAME->p[player].clock_bako);
    GAME->p[player].sec = GAME->p[player].time.microseconds / 1000000.0;
}

static void game_gestion(rpg_t *rpg)
{
    INV->open == 0 ? moove_bako(rpg),
    conditions_bako(rpg, GAME->obst, GAME_VAR->nb_obs) : 0;
    sfRenderWindow_clear(BASE->window, sfBlack);
    sfView_setCenter(GAME_VAR->view, GAME_VAR->p_pos);
    display_map(rpg);
    disp_caches(INV->item_obj, rpg);
    display_png(rpg);
    display_girl(rpg);
    display_map_anime(rpg);
    display_kenett(rpg);
    display_bako(rpg);
    display_mobs(rpg, GAME->mob_gest, GAME->obst, GAME_VAR->nb_obs);
    invisibility_gestion(rpg);
    check_items(rpg);
    sfRenderWindow_drawSprite(BASE->window,
    GAME->day_night->night_sprite, sfFalse);
    day_night_gestion(rpg);
    tp_gestion(rpg);
    GAME_VAR->is_attacking >= 0 ? players_attacks(rpg) : 0;
    display_obstacles(rpg);
    display_smoke(rpg);
    display_fire_spark(rpg);
    display_inventory(rpg);
    disp_weapon(rpg);
    display_talk(rpg);
    check_items(rpg);
    select_item_from_inv(rpg);
    GAME_VAR->bako_life < 0 ? my_specific_menus(rpg, MENUS[m_died]) : 0;
    GAME->inv->open == 0 ? display_bars(rpg) : 0;
    GAME_VAR->quest == 1 ? display_quest(rpg) : 0;
    check_item_potion(rpg);
    display_money(rpg);
    sfView_setCenter(GAME_VAR->view, GAME_VAR->p_pos);
    sfRenderWindow_setView(BASE->window, GAME_VAR->view);
}

void my_game(rpg_t *rpg)
{
    GAME_VAR->is_active = sfTrue;
    GAME_VAR->curr_music = NULL;
    play_music(rpg, rpg->game->music->music_in_game);
    while (GAME_VAR->is_active == 1 && sfRenderWindow_isOpen(BASE->window)) {
        game_gestion(rpg);
        while (sfRenderWindow_pollEvent(BASE->window, &GAME_VAR->events))
            check_event_game(rpg);
        sfRenderWindow_display(BASE->window);
    }
}
