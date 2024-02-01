/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** check_item_potion
*/

#include "my_rpg.h"

static void is_potion(rpg_t *rpg, int i)
{
    if (INV->items[i].used == 1 &&
    my_strcmp("po_purple", INV->items[i].name) == 0) {
        GAME_VAR->txt++,
        STEPS_TALK += 1;
        GAME_VAR->potion = sfTrue;
    }
}

void check_item_potion(rpg_t *rpg)
{
    if (GAME_VAR->potion == sfFalse)
        for (int i = 0; i < 27; i++)
            is_potion(rpg, i);
}
