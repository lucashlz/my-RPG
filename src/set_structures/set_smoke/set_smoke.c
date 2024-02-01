/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_smoke
*/

#include "my_rpg.h"

static smoke_t set_smoke_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    smoke_t smoke;

    smoke.clock = sfClock_create();
    smoke.sprite = sfSprite_create();
    smoke.texture = sfTexture_createFromFile(path, NULL);
    smoke.rect = rect;
    smoke.pos = pos;
    smoke.scale = scale;
    sfSprite_setTexture(smoke.sprite, smoke.texture, sfTrue);
    sfSprite_setTextureRect(smoke.sprite, smoke.rect);
    sfSprite_setPosition(smoke.sprite, smoke.pos);
    return (smoke);
}

void set_smoke(rpg_t *rpg)
{
    GAME->smoke[0] = set_smoke_struct(SMOKE, (sfVector2f){2675, 665},
    (sfIntRect){0, 0, 96, 103}, (sfVector2f){0.77, 0.77});
    GAME->smoke[1] = set_smoke_struct(SMOKE, (sfVector2f){3155, 665},
    (sfIntRect){0, 0, 96, 103}, (sfVector2f){0.77, 0.77});
    GAME->smoke[2] = set_smoke_struct(SMOKE, (sfVector2f){3923, 662},
    (sfIntRect){0, 0, 96, 103}, (sfVector2f){0.77, 0.77});
    GAME->smoke[3] = set_smoke_struct(SMOKE, (sfVector2f){3490, 1575},
    (sfIntRect){0, 0, 96, 103}, (sfVector2f){0.77, 0.77});
    GAME->smoke[4] = set_smoke_struct(SMOKE, (sfVector2f){2052, 2440},
    (sfIntRect){0, 0, 96, 103}, (sfVector2f){0.77, 0.77});
}
