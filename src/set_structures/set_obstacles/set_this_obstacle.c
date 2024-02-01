/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_this_obstacle
*/

#include "my_rpg.h"

void set_this_obs(rpg_t *rpg, char type, sfVector2f coo, int id)
{
    switch (type) {
        case ('o'):
            GAME->obst[id].pos = coo;
            GAME->obst[id].col_rect = (sfVector2f){48, 48};
            break;
        case ('s'):
            GAME->obst[id].pos = (sfVector2f){coo.x + 5, coo.y - 3};
            GAME->obst[id].col_rect = (sfVector2f){34, 48};
            break;
        case ('w'):
            GAME->obst[id].pos = (sfVector2f){coo.x - 20, coo.y};
            GAME->obst[id].col_rect = (sfVector2f){88, 48};
            break;
        case ('b'):
            GAME->obst[id].pos = (sfVector2f){coo.x, coo.y - 10};
            GAME->obst[id].col_rect = (sfVector2f){48, 56};
            break;
        }
    GAME->obst[id].type = type;
}