/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** players_attacks
*/

#include "my_rpg.h"

void players_attacks(rpg_t *rpg)
{
    if (GAME_VAR->is_attacking == 0)
        my_basic_attack(rpg);
}