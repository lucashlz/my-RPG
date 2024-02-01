/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** boss_gestion
*/

#include "my_rpg.h"

sfBool bako_is_on_entry(rpg_t *rpg)
{
    if (GAME_VAR->p_pos.x >= BOSS_GEST->cave_entry_pos.x &&
        GAME_VAR->p_pos.x <= BOSS_GEST->cave_entry_pos.x + 48 &&
        GAME_VAR->p_pos.y >= BOSS_GEST->cave_entry_pos.y &&
        GAME_VAR->p_pos.y <= BOSS_GEST->cave_entry_pos.y + 48)
        return (sfTrue);
    return (sfFalse);
}
