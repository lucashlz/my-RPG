/*
** EPITECH PROJECT, 2022
** rpg_2
** File description:
** set_portrait_hotaru
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

static void set_portraits_hotaru_second(rpg_t *rpg)
{
    GAME->port[12] = set_portrait_struct(GUNSMITH_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){0, 144, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[13] = set_portrait_struct(GUNSMITH_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){144, 144, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[14] = set_portrait_struct(GUNSMITH_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){288, 144, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[15] = set_portrait_struct(GUNSMITH_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){432, 144, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[12].opacity = 0;
    GAME->port[13].opacity = 0;
    GAME->port[14].opacity = 0;
    GAME->port[15].opacity = 0;
}

void set_portraits_hotaru(rpg_t *rpg)
{
    GAME->port[8] = set_portrait_struct(GUNSMITH_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){0, 0, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[9] = set_portrait_struct(GUNSMITH_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){144, 0, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[10] = set_portrait_struct(GUNSMITH_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){288, 0, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[11] = set_portrait_struct(GUNSMITH_PORTRAIT,
    (sfVector2f){1665, 65}, (sfIntRect){432, 0, 144, 144},
    (sfVector2f){0.85, 0.85});
    GAME->port[8].opacity = 0;
    GAME->port[9].opacity = 0;
    GAME->port[10].opacity = 0;
    GAME->port[11].opacity = 0;
    set_portraits_hotaru_second(rpg);
}
