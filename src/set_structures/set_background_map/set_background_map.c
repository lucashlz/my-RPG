/*
** EPITECH PROJECT, 2022
** My_rpg
** File description:
** set_background_map
*/

#include "my_rpg.h"
#include <stdlib.h>

static background_t set_background_struct(char *path,
sfVector2f pos)
{
    background_t b;

    b.sprite = sfSprite_create();
    b.texture = sfTexture_createFromFile(path, NULL);
    b.pos = pos;
    sfSprite_setTexture(b.sprite, b.texture, sfTrue);
    return (b);
}

static background_t set_anime_map_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    background_t b;

    b.clock = sfClock_create();
    b.sprite = sfSprite_create();
    b.texture = sfTexture_createFromFile(path, NULL);
    b.rect = rect;
    b.pos = pos;
    b.scale = scale;
    sfSprite_setTexture(b.sprite, b.texture, sfTrue);
    sfSprite_setTextureRect(b.sprite, b.rect);
    sfSprite_setPosition(b.sprite, b.pos);
    return (b);
}

void set_background_map(rpg_t *rpg)
{
    rpg->anim_background = 0;
    GAME->b[map] = set_background_struct(MAP,
    (sfVector2f){0, 0});
    GAME->b[obstacles] = set_background_struct(OBSTACLES, (sfVector2f){0, 0});
    GAME->b[animations] = set_anime_map_struct(ANIME_MAP_3,
    (sfVector2f){-2, -2},
    (sfIntRect){0, 0, 5089, 3458}, (sfVector2f){1, 1});
    GAME->b[before_game] = set_anime_map_struct(ANIME_MAP_2,
    (sfVector2f){0, -60},
    (sfIntRect){0, 0, 1440, 960}, (sfVector2f){1.4, 1.4});
}
