/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_wait
*/

#include "my_rpg.h"

static void my_clock_background(rpg_t *rpg, int which)
{
    GAME->b[which].time = sfClock_getElapsedTime
    (GAME->b[which].clock);
    GAME->b[which].sec =
    GAME->b[which].time.microseconds / 1000000.0;
}

static void moove_background(rpg_t *rpg, int which)
{
    int val_max = 4320;

    my_clock_background(rpg, which);
    if (GAME->b[which].sec > 0.001) {
        if (GAME->b[which].rect.left >= val_max - 1440)
            GAME->b[which].rect.left = 0;
        else
            GAME->b[which].rect.left += 1;
        sfClock_restart(GAME->b[which].clock);
    }
}

void display_anime_background(rpg_t *rpg)
{
    moove_background(rpg, 3);
    sfSprite_setPosition(GAME->b[before_game].sprite,
    GAME->b[before_game].pos);
    sfSprite_setScale(GAME->b[before_game].sprite,
    GAME->b[before_game].scale);
    sfSprite_setTextureRect(GAME->b[before_game].sprite,
    GAME->b[before_game].rect);
    sfRenderWindow_drawSprite(BASE->window,
    GAME->b[before_game].sprite, NULL);
}
