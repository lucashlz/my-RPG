/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_transition
*/

#include "my_rpg.h"

void set_transition(rpg_t *rpg)
{
    GAME->trans->clock = sfClock_create();
    GAME->trans->color = sfColor_fromRGBA(0, 0, 0, 0);
    GAME->trans->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(GAME->trans->rect, (sfVector2f){5088, 3456});
}
