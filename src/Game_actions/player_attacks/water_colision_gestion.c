/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** water_colision_gestion
*/

#include "my_rpg.h"
#include <stdlib.h>

static void set_hit_points_horizontal2(rpg_t *rpg, int direction)
{
    switch (direction) {
        case (3):
            BASIC_ATTK->hit_points[0] = hit_points(rpg, 65, -13);
            BASIC_ATTK->hit_points[1] = hit_points(rpg, 45, -13);
            BASIC_ATTK->hit_points[2] = hit_points(rpg, 25, -13);
            BASIC_ATTK->hit_points[3] = hit_points(rpg, 65, 13);
            BASIC_ATTK->hit_points[4] = hit_points(rpg, 45, 13);
            BASIC_ATTK->hit_points[5] = hit_points(rpg, 25, 13);
            break;
        case (4):
            BASIC_ATTK->hit_points[0] = hit_points(rpg, -65, 13);
            BASIC_ATTK->hit_points[1] = hit_points(rpg, -45, 13);
            BASIC_ATTK->hit_points[2] = hit_points(rpg, -25, 13);
            BASIC_ATTK->hit_points[3] = hit_points(rpg, -65, -13);
            BASIC_ATTK->hit_points[4] = hit_points(rpg, -45, -13);
            BASIC_ATTK->hit_points[5] = hit_points(rpg, -25, -13);
            break;
    }
}

static void set_hit_points_horizontal(rpg_t *rpg, int direction)
{
    switch (direction) {
        case (1):
            BASIC_ATTK->hit_points[0] = hit_points(rpg, 13, -65);
            BASIC_ATTK->hit_points[1] = hit_points(rpg, 13, -45);
            BASIC_ATTK->hit_points[2] = hit_points(rpg, 13, -25);
            BASIC_ATTK->hit_points[3] = hit_points(rpg, -13, -65);
            BASIC_ATTK->hit_points[4] = hit_points(rpg, -13, -40);
            BASIC_ATTK->hit_points[5] = hit_points(rpg, -13, -25);
            break;
        case (2):
            BASIC_ATTK->hit_points[0] = hit_points(rpg, 13, 65);
            BASIC_ATTK->hit_points[1] = hit_points(rpg, 13, 45);
            BASIC_ATTK->hit_points[2] = hit_points(rpg, 13, 25);
            BASIC_ATTK->hit_points[3] = hit_points(rpg, -13, 65);
            BASIC_ATTK->hit_points[4] = hit_points(rpg, -13, 40);
            BASIC_ATTK->hit_points[5] = hit_points(rpg, -13, 25);
            break;
    }
}

static void set_hit_points_vert2(rpg_t *rpg, int direction)
{
    switch (direction) {
        case (3):
            BASIC_ATTK->hit_points[0] = hit_points(rpg, 40, -30);
            BASIC_ATTK->hit_points[1] = hit_points(rpg, 40, 5);
            BASIC_ATTK->hit_points[2] = hit_points(rpg, 40, 40);
            BASIC_ATTK->hit_points[3] = hit_points(rpg, 20, -30);
            BASIC_ATTK->hit_points[4] = hit_points(rpg, 20, 5);
            BASIC_ATTK->hit_points[5] = hit_points(rpg, 20, 40);
            break;
        case (4):
            BASIC_ATTK->hit_points[0] = hit_points(rpg, -40, 30);
            BASIC_ATTK->hit_points[1] = hit_points(rpg, -40, -5);
            BASIC_ATTK->hit_points[2] = hit_points(rpg, -40, -40);
            BASIC_ATTK->hit_points[3] = hit_points(rpg, -20, -40);
            BASIC_ATTK->hit_points[4] = hit_points(rpg, -20, -5);
            BASIC_ATTK->hit_points[5] = hit_points(rpg, -20, 30);
            break;
    }
}

static void set_hit_points_vert(rpg_t *rpg, int direction)
{
    switch (direction) {
        case (1):
            BASIC_ATTK->hit_points[0] = hit_points(rpg, -27, -36);
            BASIC_ATTK->hit_points[1] = hit_points(rpg, 0, -36);
            BASIC_ATTK->hit_points[2] = hit_points(rpg, 27, -36);
            BASIC_ATTK->hit_points[3] = hit_points(rpg, -27, -16);
            BASIC_ATTK->hit_points[4] = hit_points(rpg, 0, -16);
            BASIC_ATTK->hit_points[5] = hit_points(rpg, 27, -16);
            break;
        case (2):
            BASIC_ATTK->hit_points[0] = hit_points(rpg, 27, 50);
            BASIC_ATTK->hit_points[1] = hit_points(rpg, 0, 50);
            BASIC_ATTK->hit_points[2] = hit_points(rpg, -27, 50);
            BASIC_ATTK->hit_points[3] = hit_points(rpg, -27, 30);
            BASIC_ATTK->hit_points[4] = hit_points(rpg, 0, 30);
            BASIC_ATTK->hit_points[5] = hit_points(rpg, 27, 30);
            break;
    }
}

void water_hit_points(rpg_t *rpg)
{
    int direction = GAME_VAR->input_key_m == 0 ? GAME_VAR->input_key_p :
    GAME_VAR->input_key_m;

    BASIC_ATTK->hit_points = malloc(sizeof(sfVector2f) *
    BASIC_ATTK->nb_hit_points);
    if (BASIC_ATTK->atk_resize.x == 1) {
        set_hit_points_horizontal(rpg, direction);
        set_hit_points_horizontal2(rpg, direction);
    } else {
        set_hit_points_vert(rpg, direction);
        set_hit_points_vert2(rpg, direction);
    }
}