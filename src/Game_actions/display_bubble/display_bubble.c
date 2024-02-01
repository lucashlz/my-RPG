/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_bubble
*/

#include "my_rpg.h"

void display_bubble(rpg_t *rpg, sfVector2f pos, int key_enter)
{
    sfSprite_setPosition(GAME->key[key_enter]->sprite, pos);
    sfSprite_setScale(GAME->key[key_enter]->sprite,
    GAME->key[key_enter]->scale);
    sfRenderWindow_drawSprite(BASE->window,
    GAME->key[key_enter]->sprite, NULL);
}
