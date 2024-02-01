/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_fire_spark
*/

#include "my_rpg.h"
#include <stdlib.h>

void set_fire_spark(rpg_t *rpg)
{
    for (int i = 0; i < 100; i++) {
        GAME->fire_spark[i].color = sfColor_fromRGBA(255, 165, 0, 255);
        GAME->fire_spark[i].direction = north;
        if (i < 50) {
            GAME->fire_spark[i].pos.x = 1995 + rand() % 10;
            GAME->fire_spark[i].pos.y = 1630 - rand() % 20;
        }
        if (i >= 50) {
            GAME->fire_spark[i].pos.x = 4254 + rand() % 10;
            GAME->fire_spark[i].pos.y = 1054 - rand() % 20;
        }
        GAME->fire_spark[i].rect = sfRectangleShape_create();
        GAME->fire_spark[i].speed = 3;
        GAME->fire_spark[i].orientation_clock = sfClock_create();
    }
}