/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** attack_setup
*/

#include "my_rpg.h"
#include <stdlib.h>
#include <stdio.h>

static void set_attack_direction(rpg_t *rpg)
{
    GAME_VAR->input_key_m == 1 || GAME_VAR->input_key_p == 1 ?
    BASIC_ATTK->direction = north : 0;
    GAME_VAR->input_key_m == 2 || GAME_VAR->input_key_p == 2 ?
    BASIC_ATTK->direction = south : 0;
    GAME_VAR->input_key_m == 3 || GAME_VAR->input_key_p == 3 ?
    BASIC_ATTK->direction = east : 0;
    GAME_VAR->input_key_m == 4 || GAME_VAR->input_key_p == 4 ?
    BASIC_ATTK->direction = west : 0;
}

void attack_setup(rpg_t *rpg)
{
    GAME_VAR->is_attacking = basic;
    set_style(rpg);
    GAME_VAR->curr_type == water && GAME_VAR->can_attack ?
    water_setup(rpg) : 0;
    GAME_VAR->curr_type == fire && GAME_VAR->can_attack ? fire_setup(rpg) : 0;
    GAME_VAR->curr_type == elec && GAME_VAR->can_attack ? elec_setup(rpg) : 0;
    set_attack_direction(rpg);
    GAME_VAR->curr_type != elec && GAME_VAR->can_attack ?
    play_sound(rpg, BASIC_ATTK->atck_sound, BASIC_ATTK->atk_sound_buff) : 0;
    sfSprite_setScale(BASIC_ATTK->atk_sprite,
    BASIC_ATTK->atk_resize);
    sfSprite_setRotation(BASIC_ATTK->atk_sprite,
    BASIC_ATTK->atk_rotate);
}
