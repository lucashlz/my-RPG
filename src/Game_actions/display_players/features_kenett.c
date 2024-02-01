/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** features_kenett
*/

#include "my_rpg.h"

static void my_clock_kenett(rpg_t *rpg, int which)
{
    GAME->kenett[which].time = sfClock_getElapsedTime
    (GAME->kenett[which].clock);
    GAME->kenett[which].sec = GAME->kenett[which].time.microseconds /
    1000000.0;
}

static void moove_kenett(rpg_t *rpg, int which)
{
    int val_max = 1888;

    if (GAME->kenett[which].sec > 0.11) {
        if (GAME->kenett[which].rect.left >= val_max - 118) {
            GAME->kenett[which].rect.left = 0;
        } else {
            GAME->kenett[which].rect.left += 118;
        }
        sfClock_restart(GAME->kenett[which].clock);
    }
}

void display_kenett_talk(rpg_t *rpg, sfVector2f pos)
{
    sfSprite_setScale(GAME->kenett[0].sprite, (sfVector2f){0.9, 0.9});
    sfSprite_setPosition(GAME->kenett[0].sprite, pos);
    sfSprite_setTextureRect(GAME->kenett[0].sprite, GAME->kenett[0].rect);
    sfRenderWindow_drawSprite(BASE->window, GAME->kenett[0].sprite, NULL);
}

void display_steps(rpg_t *rpg, int i, int pos)
{
    my_clock_kenett(rpg, i);
    moove_kenett(rpg, i);
    sfSprite_setScale(GAME->kenett[i].sprite, GAME->kenett[i].scale);
    sfSprite_setPosition(GAME->kenett[i].sprite, GAME->kenett[pos].pos);
    sfSprite_setTextureRect(GAME->kenett[i].sprite, GAME->kenett[i].rect);
    sfRenderWindow_drawSprite(BASE->window, GAME->kenett[i].sprite, NULL);
}
