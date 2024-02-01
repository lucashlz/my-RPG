/*
** EPITECH PROJECT, 2022
** rpg_2
** File description:
** set_portrait
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

static void set_portraits_bako_second(rpg_t *rpg)
{
    GAME->port[port_5] = set_portrait_struct(HERO_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){0, 144, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[port_6] = set_portrait_struct(HERO_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){144, 144, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[port_7] = set_portrait_struct(HERO_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){288, 144, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[port_8] = set_portrait_struct(HERO_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){432, 144, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[port_5].opacity = 0;
    GAME->port[port_6].opacity = 0;
    GAME->port[port_7].opacity = 0;
    GAME->port[port_8].opacity = 0;
}

void set_portraits_bako(rpg_t *rpg)
{
    GAME->port[port_1] = set_portrait_struct(HERO_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){0, 0, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[port_2] = set_portrait_struct(HERO_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){144, 0, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[port_3] = set_portrait_struct(HERO_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){288, 0, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[port_4] = set_portrait_struct(HERO_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){432, 0, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[port_1].opacity = 0;
    GAME->port[port_2].opacity = 0;
    GAME->port[port_3].opacity = 0;
    GAME->port[port_4].opacity = 0;
    set_portraits_bako_second(rpg);
}
