/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_portrait_kenett
*/

#include "my_rpg.h"

static portrait_t set_portrait_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    portrait_t port;

    port.sprite = sfSprite_create();
    port.texture = sfTexture_createFromFile(path, NULL);
    port.rect = rect;
    port.pos = pos;
    port.scale = scale;
    sfSprite_setTexture(port.sprite, port.texture, sfTrue);
    sfSprite_setTextureRect(port.sprite, port.rect);
    sfSprite_setPosition(port.sprite, port.pos);
    return (port);
}

void set_portraits_kenett(rpg_t *rpg)
{
    (void)rpg;
    return;
}
