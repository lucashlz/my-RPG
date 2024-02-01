/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** die_gestion
*/

#include "my_rpg.h"

void my_respawn(rpg_t *rpg)
{
    GAME_VAR->p_pos = GAME_VAR->original_bako_pos;
    GAME_VAR->bako_life = 100;
    sfView_setCenter(GAME_VAR->view, GAME_VAR->p_pos);
    MENU_BASE.should_respawn = sfFalse;
    return;
}