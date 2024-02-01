/*
** EPITECH PROJECT, 2022
** My_rpg
** File description:
** moove_players
*/

#include "my_rpg.h"

void moove_players(rpg_t *rpg, int player)
{
    int val_max = 144;

    if (GAME->p[player].sec > 0.12) {
        if (GAME->p[player].rect.left >= val_max - 48)
            GAME->p[player].rect.left = 0;
        else
            GAME->p[player].rect.left = GAME->p[player].rect.left + 48;
        sfClock_restart(GAME->p[player].clock_bako);
    }
}
