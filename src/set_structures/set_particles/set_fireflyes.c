/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_fireflyes
*/

#include "my_rpg.h"
#include <stdlib.h>

void set_fireflyes(rpg_t *rpg)
{
    for (int i = 0; i < 600; i++) {
        GAME->firefly[i].color = sfColor_fromRGBA(255, 255, 0, 0);
        GAME->firefly[i].direction = north;
        GAME->firefly[i].pos.x = rand() % 5088;
        GAME->firefly[i].pos.y = rand() % 3456;
        GAME->firefly[i].rect = sfRectangleShape_create();
        GAME->firefly[i].speed = 1;
        GAME->firefly[i].orientation_clock = sfClock_create();
    }
}