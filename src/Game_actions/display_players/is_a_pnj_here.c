/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** is_a_pnj_here
*/

#include "my_rpg.h"

int is_a_pnj_here(rpg_t *rpg, sfVector2f coo)
{
    for (int i = 0; i < 30; i++) {
        if (coo.x >= GAME->pnj[i].pos.x &&
            coo.x <= GAME->pnj[i].pos.x + GAME->pnj[i].rect.left &&
            coo.y >= GAME->pnj[i].pos.y &&
            coo.y <= GAME->pnj[i].pos.y + GAME->pnj[i].rect.height) {
            return (0);
            }
    }
    return (1);
}