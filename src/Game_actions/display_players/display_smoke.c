/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_smoke
*/

#include "my_rpg.h"
#include <stdlib.h>

static void my_clock_smoke(rpg_t *rpg, int which)
{
    GAME->smoke[which].time = sfClock_getElapsedTime
    (GAME->smoke[which].clock);
    GAME->smoke[which].sec = GAME->smoke[which].time.microseconds / 1000000.0;
}

static void moove_smoke(rpg_t *rpg, int which)
{
    int val_max = 768;

    if (GAME->smoke[which].sec > 0.12) {
        if (GAME->smoke[which].rect.left >= val_max - 96)
            GAME->smoke[which].rect.left = 0;
        else
            GAME->smoke[which].rect.left += 96;
        sfClock_restart(GAME->smoke[which].clock);
    }
}

void display_smoke(rpg_t *rpg)
{
    for (int i = 0; i <= 4; i++) {
        my_clock_smoke(rpg, i);
        moove_smoke(rpg, i);
        sfSprite_setPosition(GAME->smoke[i].sprite, GAME->smoke[i].pos);
        sfSprite_setScale(GAME->smoke[i].sprite, GAME->smoke[i].scale);
        sfSprite_setTextureRect(GAME->smoke[i].sprite, GAME->smoke[i].rect);
        sfRenderWindow_drawSprite(BASE->window, GAME->smoke[i].sprite, NULL);
    }
}

void display_fire_spark(rpg_t *rpg)
{
    for (int i = 0; i < 100; i++) {
        if (GAME->fire_spark[i].color.a < 1) {
            GAME->fire_spark[i].color.a = 255;
            GAME->fire_spark[i].pos.y -= rand() % 20;
        }
        GAME->fire_spark[i].color.a -= 3;
        GAME->fire_spark[i].pos.y -= GAME->fire_spark[i].speed;
        sfRectangleShape_setPosition(GAME->fire_spark[i].rect,
        GAME->fire_spark[i].pos);
        sfRectangleShape_setFillColor(GAME->fire_spark[i].rect,
        GAME->fire_spark[i].color);
        sfRectangleShape_setSize(GAME->fire_spark[i].rect,
        (sfVector2f){1.5, 1.5});
        sfRenderWindow_drawRectangleShape(BASE->window,
        GAME->fire_spark[i].rect, sfFalse);
    }
}
