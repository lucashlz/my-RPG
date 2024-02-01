/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_kenett
*/

#include "my_rpg.h"

static kenett_t set_kenett_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    kenett_t kenett;

    kenett.sprite = sfSprite_create();
    kenett.texture = sfTexture_createFromFile(path, NULL);
    kenett.clock = sfClock_create();
    kenett.rect = rect;
    kenett.pos = pos;
    kenett.scale = scale;
    sfSprite_setTexture(kenett.sprite, kenett.texture, sfTrue);
    sfSprite_setTextureRect(kenett.sprite, kenett.rect);
    sfSprite_setPosition(kenett.sprite, kenett.pos);
    return (kenett);
}

static mob_t set_kenet_mob(void)
{
    mob_t kenett_mob;

    kenett_mob.move_clock = sfClock_create();
    kenett_mob.clock = sfClock_create();
    kenett_mob.pos = (sfVector2f){1666, 2547};
    kenett_mob.rect = (sfIntRect){0, 0, 48, 48};
    kenett_mob.sprite = sfSprite_create();
    kenett_mob.texture = sfTexture_createFromFile(MOB_RIGHT, sfFalse);
    return (kenett_mob);
}

static void set_var_transition_start(rpg_t *rpg)
{
    GAME->kenett->valid = 0;
    GAME_KENT->kenett_display = 0;
    GAME_KENT->kenett_smoke = 0;
    GAME_KENT->kenett_start_anim = 0;
    GAME_KENT->count = 0;
    GAME_KENT->kenett_mob_animation = set_kenet_mob();
}

void set_kenett(rpg_t *rpg)
{
    set_var_transition_start(rpg);
    GAME->kenett[0] = set_kenett_struct(KENETT_FACE, (sfVector2f){1135, 2364},
    (sfIntRect){0, 0, 118, 118}, (sfVector2f){0.8, 0.8});
    GAME->kenett[1] = set_kenett_struct(KENETT_RUN, (sfVector2f){1135, 2364},
    (sfIntRect){0, 0, 118, 118}, (sfVector2f){0.8, 0.8});
    GAME->kenett[2] = set_kenett_struct(KENETT_ALW_FLY,
    (sfVector2f){1135, 2364},
    (sfIntRect){0, 0, 118, 118}, (sfVector2f){0.8, 0.8});
    GAME->kenett[3] = set_kenett_struct(KENETT_TAP, (sfVector2f){1135, 2364},
    (sfIntRect){0, 0, 118, 118}, (sfVector2f){0.8, 0.8});
    GAME->kenett[4] = set_kenett_struct(KENETT_SMOKE, (sfVector2f){1135, 2364},
    (sfIntRect){0, 0, 123, 123}, (sfVector2f){0.8, 0.8});
}
