/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_png
*/

#include "my_rpg.h"
#include <stdio.h>

static void my_clock_pnj(rpg_t *rpg, int which_pnj)
{
    GAME->pnj[which_pnj].time = sfClock_getElapsedTime
    (GAME->pnj[which_pnj].clock);
    GAME->pnj[which_pnj].sec =
    GAME->pnj[which_pnj].time.microseconds / 1000000.0;
}

static void moove_pnj(rpg_t *rpg, int which_pnj)
{
    int val_max = 144;

    if (GAME->pnj[which_pnj].sec > 0.12) {
        if (GAME->pnj[which_pnj].rect.left >= val_max - 48)
            GAME->pnj[which_pnj].rect.left = 0;
        else
            GAME->pnj[which_pnj].rect.left += 48;
        sfClock_restart(GAME->pnj[which_pnj].clock);
    }
}

void display_png(rpg_t *rpg)
{
    for (int i = 0; i <= 26; i++) {
        my_clock_pnj(rpg, i);
        moove_pnj(rpg, i);
        sfSprite_setPosition(GAME->pnj[i].sprite, GAME->pnj[i].pos);
        sfSprite_setScale(GAME->pnj[i].sprite, GAME->pnj[i].scale);
        sfSprite_setTextureRect(GAME->pnj[i].sprite, GAME->pnj[i].rect);
        sfRenderWindow_drawSprite(BASE->window, GAME->pnj[i].sprite, NULL);
    }
}
