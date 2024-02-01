/*
** EPITECH PROJECT, 2022
** My_rpg
** File description:
** moove_bako
*/

#include "my_rpg.h"

static void bako_direction(rpg_t *rpg)
{
    GAME_VAR->input_key_p == 1 ? GAME_VAR->input_key_p = 0,
    GAME_VAR->input_key_m = 1 : 0;
    GAME_VAR->input_key_p == 2 ? GAME_VAR->input_key_p = 0,
    GAME_VAR->input_key_m = 2 : 0;
    GAME_VAR->input_key_p == 3 ? GAME_VAR->input_key_p = 0,
    GAME_VAR->input_key_m = 3 : 0;
    GAME_VAR->input_key_p == 4 ? GAME_VAR->input_key_p = 0,
    GAME_VAR->input_key_m = 4 : 0;
}

void moove_bako(rpg_t *rpg)
{
    int exit = 0;

    sfKeyboard_isKeyPressed(sfKeyUp) || sfKeyboard_isKeyPressed(sfKeyZ) ?
    GAME_VAR->input_key_p = 1, GAME_VAR->input_key_m = 0, exit = 1 : 0;
    sfKeyboard_isKeyPressed(sfKeyDown) || sfKeyboard_isKeyPressed(sfKeyS) ?
    GAME_VAR->input_key_p = 2, GAME_VAR->input_key_m = 0, exit = 1 : 0;
    sfKeyboard_isKeyPressed(sfKeyRight) || sfKeyboard_isKeyPressed(sfKeyD) ?
    GAME_VAR->input_key_p = 3, GAME_VAR->input_key_m = 0, exit = 1 : 0;
    sfKeyboard_isKeyPressed(sfKeyLeft) || sfKeyboard_isKeyPressed(sfKeyQ) ?
    GAME_VAR->input_key_p = 4, GAME_VAR->input_key_m = 0, exit = 1 : 0;
    if (exit == 1)
        return;
    bako_direction(rpg);
    return;
}
