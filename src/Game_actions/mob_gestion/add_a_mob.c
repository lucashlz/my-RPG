/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** add_a_mob
*/

#include "my_rpg.h"
#include <stdlib.h>

static void set_this_mob2(mob_t *mob)
{
    mob->is_attacked = sfFalse;
    mob->can_attack = sfTrue;
    mob->is_attacking = sfFalse;
}

static void set_this_mob(rpg_t *rpg, mob_t *mob)
{
    mob->damage = 10;
    mob->HP = 200;
    if (!BOSS_GEST->is_in_arena)
        mob->pos = (sfVector2f){3840, 2060};
    else
        mob->pos = (sfVector2f){1300, 866};
    mob->rect = (sfIntRect){0, 0, 48, 48};
    mob->speed = 1.75;
    mob->sprite = sfSprite_create();
    mob->texture = GAME->mob_direct[south].texture;
    mob->move_clock = sfClock_create();
    mob->attacked_clock = sfClock_create();
    mob->clock = sfClock_create();
    mob->attack_clock = sfClock_create();
    mob->attack_cooldown = sfClock_create();
    mob->atk_cooldown_time = 1000;
    mob->direction = south;
    set_this_mob2(mob);
    sfSprite_setOrigin(mob->sprite, (sfVector2f){24, 24});
}

static mob_t *realloc_struct(rpg_t *rpg, mob_t *new_mobs, int mobs_to_add,
mob_gestion_t *mob_gest)
{
    new_mobs = malloc(sizeof(mob_t) * (mob_gest->nb_mobs + mobs_to_add));

    return (new_mobs);
}

static mob_t *fill_new_struct(rpg_t *rpg, mob_t *new_mobs, int mobs_to_add,
mob_gestion_t *mob_gest)
{
    if (mob_gest->nb_mobs > 0)
        for (int i = 0; i < mob_gest->nb_mobs; i++)
            new_mobs[i] = mob_gest->mob[i];
    for (int i = mob_gest->nb_mobs; i < mob_gest->nb_mobs + mobs_to_add; i++)
        set_this_mob(rpg, &new_mobs[i]);
    return (new_mobs);
}

void add_mobs(rpg_t *rpg, int mobs_to_add, mob_gestion_t *mob_gest)
{
    mob_t *new_mobs = NULL;

    new_mobs = realloc_struct(rpg, new_mobs, mobs_to_add, mob_gest);
    new_mobs = fill_new_struct(rpg, new_mobs, mobs_to_add, mob_gest);
    mob_gest->mob = new_mobs;
    mob_gest->nb_mobs += mobs_to_add;
}
