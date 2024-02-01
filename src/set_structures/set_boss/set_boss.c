/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_boss
*/

#include "my_rpg.h"
#include <stdlib.h>

static int malloc_boss_struct(rpg_t *rpg, char *file_cave)
{
    int len = my_strlen(file_cave);

    for (int i = 0; i < len; i++)
        if (file_cave[i] == 'o')
            BOSS_GEST->nb_obs++;
    BOSS_GEST->obs = malloc(sizeof(obstacles_t) * (BOSS_GEST->nb_obs));
    return (len);
}

void set_cave_obstacles_struct(rpg_t *rpg)
{
    int coo_x = 0;
    int coo_y = 0;
    int j = 0;
    char *file_cave = extract_str(FILE_CAVE, 3024);
    int len = malloc_boss_struct(rpg, file_cave);

    for (int i = 0; i < len; i++) {
        if (file_cave[i] == 'o') {
            BOSS_GEST->obs[j].col_rect = (sfVector2f){48, 48};
            BOSS_GEST->obs[j].pos = (sfVector2f){coo_x, coo_y};
            coo_x += 48;
            j++;
            continue;
        } else if (file_cave[i] == '\n') {
            coo_x = 0;
            coo_y += 48;
            continue;
        } else
            coo_x += 48;
    }
}

bars_t set_akaza_bar(rpg_t *rpg)
{
    bars_t aka_life;

    aka_life.back_bar_sprite = sfSprite_create();
    aka_life.bar_sprite = sfSprite_create();
    aka_life.back_bar_texture =
    sfTexture_createFromFile(AKA_BACK_BAR, sfFalse);
    aka_life.bar_texture = sfTexture_createFromFile(AKA_LIFE_BAR, sfFalse);
    aka_life.bar_pos = (sfVector2f){1650, 30};
    aka_life.bar_rect = (sfIntRect){0, 0, 169, 19};
    sfSprite_setTexture(aka_life.bar_sprite, aka_life.bar_texture, sfFalse);
    sfSprite_setTexture(aka_life.back_bar_sprite, aka_life.back_bar_texture,
    sfFalse);
    return (aka_life);
}

void set_boss2(rpg_t *rpg)
{
    BOSS_GEST->akaza->minions_gest = malloc(sizeof(mob_gestion_t));
    BOSS_GEST->akaza->minions_gest->mob = NULL;
    BOSS_GEST->akaza->minions_gest->nb_mobs = 0;
    BOSS_GEST->akaza->minions_gest->spawn_clock = sfClock_create();
    BOSS_GEST->akaza->life_bar = set_akaza_bar(rpg);
    set_cave_obstacles_struct(rpg);
    sfSprite_setTexture(BOSS_GEST->akaza->boss_sprite,
    BOSS_GEST->akaza->boss_texture, sfFalse);
    sfSprite_setTexture(BOSS_GEST->cave_sprite,
    BOSS_GEST->arena_texture, sfFalse);
    sfSprite_setScale(BOSS_GEST->akaza->boss_sprite, BOSS_GEST->akaza->scale);
}

void set_boss(rpg_t *rpg)
{
    BOSS_GEST = malloc(sizeof(boss_gest_t));
    BOSS_GEST->arena_texture = sfTexture_createFromFile(ARENA, sfFalse);
    BOSS_GEST->cave_sprite = sfSprite_create();
    BOSS_GEST->cave_entry = (sfIntRect){0, 0, 48, 48};
    BOSS_GEST->cave_entry_pos = (sfVector2f){2640, 1680};
    BOSS_GEST->akaza = malloc(sizeof(boss_t));
    BOSS_GEST->is_in_arena = sfFalse;
    BOSS_GEST->akaza->boss_clock = sfClock_create();
    BOSS_GEST->akaza->boss_sprite = sfSprite_create();
    BOSS_GEST->akaza->boss_texture = sfTexture_createFromFile(AKAZA, sfFalse);
    BOSS_GEST->akaza->life = 800;
    BOSS_GEST->akaza->minions_gest = NULL;
    BOSS_GEST->nb_obs = 0;
    BOSS_GEST->akaza->pos = (sfVector2f){1220, 570};
    BOSS_GEST->akaza->rect = (sfIntRect){0, 0, 174, 220};
    BOSS_GEST->akaza->scale = (sfVector2f){1, 1};
    set_boss2(rpg);
}