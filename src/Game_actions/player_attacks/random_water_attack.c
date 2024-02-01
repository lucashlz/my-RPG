/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** random_water_basic
*/

#include <stdlib.h>
#include "my_rpg.h"

static void set_attack_1(rpg_t *rpg)
{
    if (GAME_VAR->input_key_p == 1 || GAME_VAR->input_key_m == 1) {
        BASIC_ATTK->atk_pos = (sfVector2f){GAME_VAR->p_pos.x - 20,
        GAME_VAR->p_pos.y};
        BASIC_ATTK->atk_rotate = -90;
    }
    if (GAME_VAR->input_key_p == 2 || GAME_VAR->input_key_m == 2) {
        BASIC_ATTK->atk_pos = (sfVector2f){GAME_VAR->p_pos.x + 15,
        GAME_VAR->p_pos.y};
        BASIC_ATTK->atk_rotate = 90;
    }
    if (GAME_VAR->input_key_p == 3 || GAME_VAR->input_key_m == 3) {
        BASIC_ATTK->atk_pos = (sfVector2f){GAME_VAR->p_pos.x,
        GAME_VAR->p_pos.y - 10};
        BASIC_ATTK->atk_rotate = 0;
    }
    if (GAME_VAR->input_key_p == 4 || GAME_VAR->input_key_m == 4) {
        BASIC_ATTK->atk_pos = (sfVector2f){GAME_VAR->p_pos.x,
        GAME_VAR->p_pos.y + 20};
        BASIC_ATTK->atk_rotate = 180;
    }
}

static void set_attack_2(rpg_t *rpg)
{
    if (GAME_VAR->input_key_p == 1 || GAME_VAR->input_key_m == 1) {
        BASIC_ATTK->atk_pos = (sfVector2f){GAME_VAR->p_pos.x - 48,
        GAME_VAR->p_pos.y - 5};
        BASIC_ATTK->atk_rotate = -90;
    }
    if (GAME_VAR->input_key_p == 2 || GAME_VAR->input_key_m == 2) {
        BASIC_ATTK->atk_pos = (sfVector2f){GAME_VAR->p_pos.x + 48,
        GAME_VAR->p_pos.y + 20};
        BASIC_ATTK->atk_rotate = 90;
    }
    if (GAME_VAR->input_key_p == 3 || GAME_VAR->input_key_m == 3) {
        BASIC_ATTK->atk_pos = (sfVector2f){GAME_VAR->p_pos.x + 10,
        GAME_VAR->p_pos.y - 30};
        BASIC_ATTK->atk_rotate = 0;
    }
    if (GAME_VAR->input_key_p == 4 || GAME_VAR->input_key_m == 4) {
        BASIC_ATTK->atk_pos = (sfVector2f){GAME_VAR->p_pos.x - 10,
        GAME_VAR->p_pos.y + 45};
        BASIC_ATTK->atk_rotate = 180;
    }
}

void water_setup(rpg_t *rpg)
{
    if (BASIC_ATTK->atk_resize.x == 1)
        set_attack_1(rpg);
    if (BASIC_ATTK->atk_resize.y == 1)
        set_attack_2(rpg);
    water_hit_points(rpg);
}