/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_key_img
*/

#include <stdlib.h>
#include "my_rpg.h"

static key_img_t *set_key_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    key_img_t *k = malloc(sizeof(key_img_t));
    if (!k)
        return (NULL);
    k->sprite = sfSprite_create();
    k->texture = sfTexture_createFromFile(path, NULL);
    k->rect = rect;
    k->pos = pos;
    k->scale = scale;
    sfSprite_setTexture(k->sprite, k->texture, sfTrue);
    sfSprite_setTextureRect(k->sprite, k->rect);
    sfSprite_setPosition(k->sprite, k->pos);
    return (k);
}

void set_key_img(rpg_t *rpg)
{
    GAME->key[key_enter] = set_key_struct(KEY_ENTER, (sfVector2f){1, 1},
    (sfIntRect){0, 0, 450, 480}, (sfVector2f){0.2, 0.2});
    GAME->key[bubble] = set_key_struct(BUBBLE, (sfVector2f){1180, 2400},
    (sfIntRect){0, 0, 102, 126}, (sfVector2f){0.5, 0.5});
    GAME->key[key_enter]->zoom = 0;
}
