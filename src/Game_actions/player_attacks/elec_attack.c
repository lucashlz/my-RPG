/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** fire_basic
*/

#include "my_rpg.h"

static void elec_setup2(rpg_t *rpg)
{
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

void elec_setup(rpg_t *rpg)
{
    BASIC_ATTK->atk_resize = (sfVector2f){0.7, 0.7};
    if (GAME_VAR->input_key_p == 1 || GAME_VAR->input_key_m == 1) {
        BASIC_ATTK->atk_pos = (sfVector2f){GAME_VAR->p_pos.x - 35,
        GAME_VAR->p_pos.y - 5};
        BASIC_ATTK->atk_rotate = -90;
    }
    if (GAME_VAR->input_key_p == 2 || GAME_VAR->input_key_m == 2) {
        BASIC_ATTK->atk_pos = (sfVector2f){GAME_VAR->p_pos.x + 35,
        GAME_VAR->p_pos.y + 20};
        BASIC_ATTK->atk_rotate = 90;
    }
    elec_hit_points(rpg);
    elec_setup2(rpg);
}
