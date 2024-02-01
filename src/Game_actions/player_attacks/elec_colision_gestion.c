/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** elec_colision_gestion
*/

#include "my_rpg.h"
#include <stdlib.h>

static void set_hit_points2(rpg_t *rpg, int direction)
{
    if (direction == 3) {
        BASIC_ATTK->hit_points[0] = hit_points(rpg, 20, -15);
        BASIC_ATTK->hit_points[1] = hit_points(rpg, 48, -15);
        BASIC_ATTK->hit_points[2] = hit_points(rpg, 34, 0);
        BASIC_ATTK->hit_points[3] = hit_points(rpg, 48, 15);
        BASIC_ATTK->hit_points[4] = hit_points(rpg, 20, 15);
    } else if (direction == 4) {
        BASIC_ATTK->hit_points[0] = hit_points(rpg, -20, 25);
        BASIC_ATTK->hit_points[1] = hit_points(rpg, -48, 25);
        BASIC_ATTK->hit_points[2] = hit_points(rpg, -34, 10);
        BASIC_ATTK->hit_points[3] = hit_points(rpg, -48, -5);
        BASIC_ATTK->hit_points[4] = hit_points(rpg, -20, -5);
    }
}

static void set_hit_points(rpg_t *rpg, int direction)
{
    if (direction == 1) {
        BASIC_ATTK->hit_points[0] = hit_points(rpg, -18, -35);
        BASIC_ATTK->hit_points[1] = hit_points(rpg, 10, -35);
        BASIC_ATTK->hit_points[2] = hit_points(rpg, -3, -17);
        BASIC_ATTK->hit_points[3] = hit_points(rpg, -18, 0);
        BASIC_ATTK->hit_points[4] = hit_points(rpg, 10, 0);
    } else if (direction == 2) {
        BASIC_ATTK->hit_points[0] = hit_points(rpg, 13, 55);
        BASIC_ATTK->hit_points[1] = hit_points(rpg, -13, 55);
        BASIC_ATTK->hit_points[2] = hit_points(rpg, 1, 36);
        BASIC_ATTK->hit_points[3] = hit_points(rpg, 13, 19);
        BASIC_ATTK->hit_points[4] = hit_points(rpg, -13, 19);
    }
}

void elec_hit_points(rpg_t *rpg)
{
    int direction = GAME_VAR->input_key_m == 0 ? GAME_VAR->input_key_p :
    GAME_VAR->input_key_m;

    BASIC_ATTK->hit_points = malloc(sizeof(sfVector2f) * 7);
    set_hit_points(rpg, direction);
    set_hit_points2(rpg, direction);
}
