/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_kenett
*/

#include "my_rpg.h"

int display_first_action(rpg_t *rpg);

int display_second_action(rpg_t *rpg);

int display_third_action(rpg_t *rpg);

int display_fourth_action(rpg_t *rpg);

void moove_smoke_kenett(rpg_t *rpg, int which)
{
    int val_max = 738;

    if (GAME->kenett[which].sec > 0.11) {
        if (GAME->kenett[which].rect.left >= val_max - 123) {
            GAME->kenett[which].rect.left = 0;
            GAME_KENT->kenett_smoke += 1;
        } else {
            GAME->kenett[which].rect.left += 123;
        }
        sfClock_restart(GAME->kenett[which].clock);
    }
}

void new_view_start_kennet(rpg_t *rpg)
{
    sfView_setCenter(GAME_VAR->kenett_start_view,
    (sfVector2f){GAME->kenett[1].pos.x + 50, GAME->kenett[1].pos.y + 50});
    sfRenderWindow_setView(BASE->window, GAME_VAR->kenett_start_view);
}

void display_mob_kenett(rpg_t *rpg)
{
    sfSprite_setTexture(GAME_KENT->kenett_mob_animation.sprite,
    GAME_KENT->kenett_mob_animation.texture, sfFalse);
    move_mob_rect(&GAME_KENT->kenett_mob_animation);
    sfSprite_setTextureRect(GAME_KENT->kenett_mob_animation.sprite,
    GAME_KENT->kenett_mob_animation.rect);
    sfSprite_setPosition(GAME_KENT->kenett_mob_animation.sprite,
    GAME_KENT->kenett_mob_animation.pos);
    sfRenderWindow_drawSprite(BASE->window,
    GAME_KENT->kenett_mob_animation.sprite, sfFalse);
}

void display_start_kenett(rpg_t *rpg)
{
    sfColor test;

    display_key_enter(rpg,
    (sfVector2f){GAME->kenett[1].pos.x + 400, GAME->kenett[1].pos.y + 220});
    display_mob_kenett(rpg);
    if (display_first_action(rpg) == 1)
        return;
    if (display_second_action(rpg) == 1)
        return;
    if (display_third_action(rpg) == 1)
        return;
    if (display_fourth_action(rpg) == 1)
        return;
    test = sfColor_fromRGBA(255, 255, 255, 255);
    sfSprite_setColor(GAME->b[map].sprite, test);
    sfSprite_setColor(GAME->b[obstacles].sprite, test);
    GAME->kenett[0].valid = 1;
}
