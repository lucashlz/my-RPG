/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** fire_colision_gestion
*/

#include "my_rpg.h"
#include <stdlib.h>

static void set_hit_points2(rpg_t *rpg, int direction)
{
    if (direction == 3) {
        BASIC_ATTK->hit_points[0] = hit_points(rpg, 20, -15);
        BASIC_ATTK->hit_points[1] = hit_points(rpg, 45, -25);
        BASIC_ATTK->hit_points[2] = hit_points(rpg, 70, -20);
        BASIC_ATTK->hit_points[3] = hit_points(rpg, 85, 0);
        BASIC_ATTK->hit_points[4] = hit_points(rpg, 75, 30);
        BASIC_ATTK->hit_points[5] = hit_points(rpg, 50, 45);
        BASIC_ATTK->hit_points[6] = hit_points(rpg, 20, 30);
    } else if (direction == 4) {
        BASIC_ATTK->hit_points[0] = hit_points(rpg, -20, 25);
        BASIC_ATTK->hit_points[1] = hit_points(rpg, -50, 35);
        BASIC_ATTK->hit_points[2] = hit_points(rpg, -80, 25);
        BASIC_ATTK->hit_points[3] = hit_points(rpg, -85, 0);
        BASIC_ATTK->hit_points[4] = hit_points(rpg, -75, -25);
        BASIC_ATTK->hit_points[5] = hit_points(rpg, -50, -30);
        BASIC_ATTK->hit_points[6] = hit_points(rpg, -25, -20);
    }
}

static void set_hit_points(rpg_t *rpg, int direction)
{
    if (direction == 1) {
        BASIC_ATTK->hit_points[0] = hit_points(rpg, -40, -20);
        BASIC_ATTK->hit_points[1] = hit_points(rpg, -45, -50);
        BASIC_ATTK->hit_points[2] = hit_points(rpg, -30, -75);
        BASIC_ATTK->hit_points[3] = hit_points(rpg, 0, -80);
        BASIC_ATTK->hit_points[4] = hit_points(rpg, 25, -65);
        BASIC_ATTK->hit_points[5] = hit_points(rpg, 30, -40);
        BASIC_ATTK->hit_points[6] = hit_points(rpg, 15, -15);
    } else if (direction == 2) {
        BASIC_ATTK->hit_points[0] = hit_points(rpg, 30, 25);
        BASIC_ATTK->hit_points[1] = hit_points(rpg, 40, 50);
        BASIC_ATTK->hit_points[2] = hit_points(rpg, 30, 80);
        BASIC_ATTK->hit_points[3] = hit_points(rpg, 0, 90);
        BASIC_ATTK->hit_points[4] = hit_points(rpg, -25, 75);
        BASIC_ATTK->hit_points[5] = hit_points(rpg, -30, 50);
        BASIC_ATTK->hit_points[6] = hit_points(rpg, -15, 25);
    }
}

void fire_hit_points(rpg_t *rpg)
{
    int direction = GAME_VAR->input_key_m == 0 ? GAME_VAR->input_key_p :
    GAME_VAR->input_key_m;

    BASIC_ATTK->hit_points = malloc(sizeof(sfVector2f) * 7);
    set_hit_points(rpg, direction);
    set_hit_points2(rpg, direction);
}