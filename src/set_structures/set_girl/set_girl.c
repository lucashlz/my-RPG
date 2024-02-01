/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_girl
*/

#include "my_rpg.h"

static void set_girl_mobs(rpg_t *rpg)
{
    GAME->girl->mobs.mob = NULL;
    GAME->girl->mobs.nb_mobs = 0;

    add_mobs(rpg, 4, &GAME->girl[0].mobs);
    GAME->girl[0].mobs.mob[0].pos = (sfVector2f){2220, 883};
    GAME->girl[0].mobs.mob[1].pos = (sfVector2f){2430, 883};
    GAME->girl[0].mobs.mob[2].pos = (sfVector2f){2400, 724};
    GAME->girl[0].mobs.mob[3].pos = (sfVector2f){2277, 724};
    for (int i = 0; i < GAME->girl->mobs.nb_mobs; i++) {
        sfSprite_setTexture(GAME->girl[0].mobs.mob[i].sprite,
        GAME->girl[0].mobs.mob[i].texture, sfTrue);
    }
}

static girl_t set_girl_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    girl_t girl;

    girl.clock = sfClock_create();
    girl.sprite = sfSprite_create();
    girl.texture = sfTexture_createFromFile(path, NULL);
    girl.rect = rect;
    girl.pos = pos;
    girl.scale = scale;
    sfSprite_setTexture(girl.sprite, girl.texture, sfTrue);
    sfSprite_setTextureRect(girl.sprite, girl.rect);
    sfSprite_setPosition(girl.sprite, girl.pos);
    return (girl);
}

void set_girl(rpg_t *rpg)
{
    GAME->girl[0] = set_girl_struct(GIRL_KENETT, (sfVector2f){2295, 685},
    (sfIntRect){0, 0, 107, 107}, (sfVector2f){0.77, 0.77});
    set_girl_mobs(rpg);
}
