/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** mob_display
*/

#include "my_rpg.h"
#include <stdio.h>

static void mob_attack_gestion2(rpg_t *rpg, sfInt32 time, mob_t *mob)
{
    GAME_VAR->is_taking_damage == sfFalse ? GAME_VAR->bako_life -= mob->damage,
    GAME_VAR->is_taking_damage = sfTrue : 0;
    time < 100 ? move_mob(mob, mob->direction, 2.5) : 0;
    time >= 100 && time < 200 ? move_mob(mob, mob->direction, -2.5) : 0;
    if (time >= 200) {
        sfClock_restart(mob->attack_cooldown);
        mob->is_attacking = sfFalse;
        mob->can_attack = sfFalse;
        sfClock_restart(mob->attack_clock);
        GAME_VAR->is_taking_damage = sfFalse;
    }
}

static void mob_attack_gestion(rpg_t *rpg, mob_t *mob)
{
    sfInt32 time = sfTime_asMilliseconds
    (sfClock_getElapsedTime(mob->attack_clock));

    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (mob->attack_cooldown)) >= mob->atk_cooldown_time)
        mob->can_attack = sfTrue;
    if (!mob->is_attacking)
        sfClock_restart(mob->attack_clock);
    if (is_stuck_by_p(rpg, mob->pos, mob->direction) && mob->can_attack)
        mob->is_attacking = sfTrue;
    if (!mob->is_attacking)
        return;
    mob_attack_gestion2(rpg, time, mob);
}

void mob_spawn(rpg_t *rpg, mob_gestion_t *mob_gest)
{
    if (!BOSS_GEST->is_in_arena) {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime
        (mob_gest->spawn_clock)) >= 10000 && mob_gest->nb_mobs < 20 &&
        GAME_VAR->can_attack) {
            add_mobs(rpg, 1, mob_gest);
            sfClock_restart(mob_gest->spawn_clock);
        }
    } else {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime
        (mob_gest->spawn_clock)) >= 4000 && mob_gest->nb_mobs < 20 &&
        GAME_VAR->can_attack) {
            add_mobs(rpg, 1, mob_gest);
            sfClock_restart(mob_gest->spawn_clock);
        }
    }
}

void display_mobs(rpg_t *rpg, mob_gestion_t *mob_gest,
obstacles_t *obs, int nb_obs)
{
    refresh_mob_struct(rpg, mob_gest);
    mob_spawn(rpg, mob_gest);
    for (int i = 0; i < mob_gest->nb_mobs; i++) {
        if (mob_gest->mob[i].HP <= 0)
            continue;
        if (mob_gest->mob[i].is_attacked) {
            mob_is_attacked(rpg, &mob_gest->mob[i]);
            continue;
        }
        !mob_gest->mob[i].is_attacked ?
        mob_attack_gestion(rpg, &mob_gest->mob[i]) : 0;
        mob_orientation_gestion(rpg, &mob_gest->mob[i], obs, nb_obs);
        sfSprite_setTexture(mob_gest->mob[i].sprite,
        mob_gest->mob[i].texture, sfFalse);
        move_mob_rect(&mob_gest->mob[i]);
        sfSprite_setTextureRect(mob_gest->mob[i].sprite,
        mob_gest->mob[i].rect);
        sfRenderWindow_drawSprite(BASE->window, mob_gest->mob[i].sprite,
        sfFalse);
    }
}