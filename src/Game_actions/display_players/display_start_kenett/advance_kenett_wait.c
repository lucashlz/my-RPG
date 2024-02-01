/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** advance_kenett_wait
*/

#include "my_rpg.h"

static void advance_kenett_attack(rpg_t *rpg)
{
    if (GAME_KENT->kenett_display == 3 && GAME->kenett[1].pos.x <= 1500) {
        GAME->kenett[1].pos.x++;
        return;
    }
    GAME_KENT->kenett_display = 4;
    if (GAME_KENT->kenett_display == 4 && GAME->kenett[1].pos.x <= 1520) {
        GAME->kenett[1].pos.x += 0.1;
        return;
    }
    GAME_KENT->kenett_display = 5;
    if (GAME_KENT->kenett_display == 5 && GAME_KENT->count < 500) {
        GAME_KENT->count++;
        return;
    }
    GAME_KENT->kenett_display = 6;
}

void advance_kenett(rpg_t *rpg)
{
    if (GAME_KENT->kenett_display == 1 && GAME->kenett[1].pos.y <= 2550) {
        GAME->kenett[1].pos.y += 1.7;
        return;
    }
    GAME_KENT->kenett_display = 2;
    if (GAME_KENT->kenett_display == 2 && GAME->kenett[1].pos.x <= 1460) {
        GAME->kenett[1].pos.x += 1.5;
        return;
    }
    if (GAME_KENT->kenett_display == 2 && GAME->kenett[1].pos.y >= 2490) {
        GAME->kenett[1].pos.y--;
        return;
    }
    GAME_KENT->kenett_display = 3;
    advance_kenett_attack(rpg);
}
