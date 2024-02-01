/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** attacked_mob_gestion
*/

#include "my_rpg.h"

static void elec_attacked(rpg_t *rpg, mob_t *mob)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (mob->attacked_clock)) <= 500) {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(mob->attacked_clock))
        % 2 == 1) {
            BASIC_ATTK->direction == north ||
            BASIC_ATTK->direction == south ? mob->pos.x += 1 : 0;
            BASIC_ATTK->direction == east ||
            BASIC_ATTK->direction == west ? mob->pos.y += 1 : 0;
        } else {
            BASIC_ATTK->direction == north ||
            BASIC_ATTK->direction == south ? mob->pos.x -= 1 : 0;
            BASIC_ATTK->direction == east ||
            BASIC_ATTK->direction == west ? mob->pos.y -= 1 : 0;
        }
    } else
        mob->is_attacked = sfFalse;
    sfSprite_setPosition(mob->sprite, mob->pos);
    sfRenderWindow_drawSprite(BASE->window, mob->sprite, sfFalse);
}

static void apply_knockback(rpg_t *rpg, mob_t *mob)
{
    int nb_obs = 0;
    obstacles_t *obs = NULL;

    BOSS_GEST->is_in_arena ? nb_obs = BOSS_GEST->nb_obs : GAME_VAR->nb_obs;
    BOSS_GEST->is_in_arena ? obs = BOSS_GEST->obs : GAME->obst;
    (BASIC_ATTK->direction == north) && north_entity_colision_gestion
    ((sfVector2f){mob->pos.x - 24, mob->pos.y - 24}, obs, nb_obs) == 1 ?
    mob->pos.y -= BASIC_ATTK->knockback : 0;
    (BASIC_ATTK->direction == south) && south_entity_colision_gestion
    ((sfVector2f){mob->pos.x - 24, mob->pos.y - 24}, obs, nb_obs) == 1 ?
    mob->pos.y += BASIC_ATTK->knockback : 0;
    (BASIC_ATTK->direction == east) && east_entity_colision_gestion
    ((sfVector2f){mob->pos.x - 24, mob->pos.y - 24}, obs, nb_obs) == 1 ?
    mob->pos.x += BASIC_ATTK->knockback : 0;
    (BASIC_ATTK->direction == west) && west_entity_colision_gestion
    ((sfVector2f){mob->pos.x - 24, mob->pos.y - 24}, obs, nb_obs) == 1 ?
    mob->pos.x -= BASIC_ATTK->knockback : 0;
}

int mob_is_attacked(rpg_t *rpg, mob_t *mob)
{
    if (GAME_VAR->curr_type == elec && mob->is_attacked) {
        elec_attacked(rpg, mob);
        return (0);
    }
    BASIC_ATTK->atk_resize.x == 1 && GAME_VAR->curr_type == water
    ? BASIC_ATTK->knockback = 0.3, BASIC_ATTK->cooldown = 450 : 0;
    BASIC_ATTK->atk_resize.y == 1 && GAME_VAR->curr_type == water
    ? BASIC_ATTK->knockback = 7, BASIC_ATTK->cooldown = 1100 : 0;
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (mob->attacked_clock)) <= 300 && mob->is_attacked) {
        apply_knockback(rpg, mob);
        sfSprite_setPosition(mob->sprite, mob->pos);
        sfRenderWindow_drawSprite(BASE->window, mob->sprite, sfFalse);
        return (0);
    } else
        mob->is_attacked = sfFalse;
    return (-1);
}