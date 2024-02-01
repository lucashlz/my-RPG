/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** moovie_img
*/

#include "my_rpg.h"
#include <stdlib.h>

static moovie_img_t set_moovie_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    moovie_img_t moovie;

    moovie.opacity = 0;
    moovie.clock = sfClock_create();
    moovie.sprite = sfSprite_create();
    moovie.texture = sfTexture_createFromFile(path, NULL);
    moovie.rect = rect;
    moovie.pos = pos;
    moovie.scale = scale;
    sfSprite_setTexture(moovie.sprite, moovie.texture, sfTrue);
    sfSprite_setTextureRect(moovie.sprite, moovie.rect);
    sfSprite_setPosition(moovie.sprite, moovie.pos);
    return (moovie);
}

static void set_moovie_img2(rpg_t *rpg)
{
    GAME->moovie[img_5] = set_moovie_struct(IMG_5,
    (sfVector2f){0, -150},
    (sfIntRect){0, 0, 1280, 800}, (sfVector2f){1.7, 1.7});
    GAME->moovie[img_6] = set_moovie_struct(IMG_6,
    (sfVector2f){0, -130},
    (sfIntRect){0, 0, 1045, 586}, (sfVector2f){2, 2});
    GAME->moovie[img_7] = set_moovie_struct(IMG_7,
    (sfVector2f){-90, 0},
    (sfIntRect){0, 0, 1920, 976}, (sfVector2f){3, 3});
    GAME->moovie[7] = set_moovie_struct(WLCM_NAME_PATH,
    (sfVector2f){750, 400},
    (sfIntRect){0, 0, 500, 208}, (sfVector2f){1, 1});
    GAME->moovie[8] = set_moovie_struct(WLCM_NAME_PATH,
    (sfVector2f){0, 0},
    (sfIntRect){0, 0, 1920, 976}, (sfVector2f){1, 1});
}

void set_moovie_img(rpg_t *rpg)
{
    GAME_VAR->transition = 0;
    GAME_VAR->which_background = 0;
    GAME->moovie[img_1] = set_moovie_struct(IMG_1,
    (sfVector2f){0, -100},
    (sfIntRect){0, 0, 1920, 1080}, (sfVector2f){1.2, 1.2});
    GAME->moovie[img_2] = set_moovie_struct(IMG_2,
    (sfVector2f){0, -60},
    (sfIntRect){0, 0, 1920, 1080}, (sfVector2f){1.1, 1.1});
    GAME->moovie[img_3] = set_moovie_struct(IMG_3,
    (sfVector2f){0, -150},
    (sfIntRect){0, 0, 1505, 835}, (sfVector2f){1.5, 1.5});
    GAME->moovie[img_4] = set_moovie_struct(IMG_4,
    (sfVector2f){0, -158},
    (sfIntRect){0, 0, 1920, 1080}, (sfVector2f){1.1, 1.1});
    set_moovie_img2(rpg);
}
