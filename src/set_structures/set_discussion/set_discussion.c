/*
** EPITECH PROJECT, 2022
** stock
** File description:
** set_discussion
*/

#include "my_rpg.h"
#include <stdlib.h>

static discussion_t set_discussion_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    discussion_t d;

    d.clock_discuss = sfClock_create();
    d.sprite = sfSprite_create();
    d.texture = sfTexture_createFromFile(path, NULL);
    d.rect = rect;
    d.pos = pos;
    d.scale = scale;
    d.sec = 0;
    d.opacity = 0;
    sfSprite_setTexture(d.sprite, d.texture, sfTrue);
    sfSprite_setTextureRect(d.sprite, d.rect);
    sfSprite_setPosition(d.sprite, d.pos);
    return (d);
}

void set_discuss(rpg_t *rpg)
{
    DISCUSS = 0;
    GAME->d[box_1] = set_discussion_struct(BAR_DISCUSS, (sfVector2f){1899, 250},
    (sfIntRect){0, 0, 316, 77}, (sfVector2f){2, 2.3});
    GAME->d[box_2] = set_discussion_struct(BAR_DISCUSS, (sfVector2f){1899, 250},
    (sfIntRect){0, 0, 316, 77}, (sfVector2f){2, 2.3});
}
