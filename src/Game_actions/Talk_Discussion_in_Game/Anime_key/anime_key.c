/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** anim_key
*/

#include "my_rpg.h"

void display_key_enter2(rpg_t *rpg, sfVector2f pos)
{
    if (GAME->key[key_enter]->scale.x >= 0.13 &&
    GAME->key[key_enter]->scale.y >= 0.13)
        GAME->key[key_enter]->zoom = 1;
    if (GAME->key[key_enter]->zoom == 1) {
        pos.x -= 50;
        sfRenderWindow_drawSprite(BASE->window,
        GAME->key[key_enter]->sprite, NULL);
        GAME->key[key_enter]->scale.x >= 0.1 &&
        GAME->key[key_enter]->scale.y >= 0.1 ?
        GAME->key[key_enter]->scale.x -= 0.0005,
        GAME->key[key_enter]->scale.y -= 0.0005 : 0;
    }
    if (GAME->key[key_enter]->scale.x <= 0.1 &&
    GAME->key[key_enter]->scale.y < 0.1)
        GAME->key[key_enter]->zoom = 0;
}

void display_key_enter(rpg_t *rpg, sfVector2f pos)
{
    sfSprite_setScale(GAME->key[key_enter]->sprite,
    GAME->key[key_enter]->scale);
    sfSprite_setPosition(GAME->key[key_enter]->sprite, pos);
    sfSprite_setTextureRect(GAME->key[key_enter]->sprite,
    GAME->key[key_enter]->rect);
    if (GAME->key[key_enter]->zoom == 0) {
        pos.x -= 50;
        sfRenderWindow_drawSprite(BASE->window,
        GAME->key[key_enter]->sprite, NULL);
        GAME->key[key_enter]->scale.x <= 0.13 &&
        GAME->key[key_enter]->scale.y <= 0.13 ?
        GAME->key[key_enter]->scale.x += 0.0005,
        GAME->key[key_enter]->scale.y += 0.0005 : 0;
    }
    display_key_enter2(rpg, pos);
}
