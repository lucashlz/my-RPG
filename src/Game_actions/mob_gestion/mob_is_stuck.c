/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** mob_is_stuck
*/

#include "my_rpg.h"

static sfBool is_stuck_by_p2(rpg_t *rpg, sfVector2f pos, int direction)
{
    if (direction == east && ((pos.x + 24 > GAME_VAR->p_pos.x - 24 &&
    pos.x + 24 < GAME_VAR->p_pos.x + 24 &&
    pos.y + 28 > GAME_VAR->p_pos.y - 24 &&
    pos.y + 28 < GAME_VAR->p_pos.y + 24) ||
    (pos.x + 24 > GAME_VAR->p_pos.x - 24 &&
    pos.x + 24 < GAME_VAR->p_pos.x + 24 &&
    pos.y + 12 > GAME_VAR->p_pos.y - 24 &&
    pos.y + 12 < GAME_VAR->p_pos.y + 24)))
        return (sfTrue);
    if (direction == north && ((pos.x - 12 > GAME_VAR->p_pos.x - 24 &&
    pos.x - 12 < GAME_VAR->p_pos.x + 24 &&
    pos.y > GAME_VAR->p_pos.y - 24 &&
    pos.y < GAME_VAR->p_pos.y + 24) ||
    (pos.x + 12 > GAME_VAR->p_pos.x - 24 &&
    pos.x + 12 < GAME_VAR->p_pos.x + 24 &&
    pos.y > GAME_VAR->p_pos.y - 24 &&
    pos.y < GAME_VAR->p_pos.y + 24)))
        return (sfTrue);
    return (sfFalse);
}

sfBool is_stuck_by_p(rpg_t *rpg, sfVector2f pos, int direction)
{
    if (direction == south && ((pos.x - 22 > GAME_VAR->p_pos.x - 24 &&
    pos.x - 12 < GAME_VAR->p_pos.x + 24 &&
    pos.y + 30 > GAME_VAR->p_pos.y - 24 &&
    pos.y + 30 < GAME_VAR->p_pos.y + 24) ||
    (pos.x + 12 > GAME_VAR->p_pos.x - 24 &&
    pos.x + 12 < GAME_VAR->p_pos.x + 24 &&
    pos.y + 30 > GAME_VAR->p_pos.y - 24 &&
    pos.y + 30 < GAME_VAR->p_pos.y + 24)))
        return (sfTrue);
    if (direction == west && ((pos.x - 22 > GAME_VAR->p_pos.x - 24 &&
    pos.x - 24 < GAME_VAR->p_pos.x + 24 &&
    pos.y + 12 > GAME_VAR->p_pos.y - 24 &&
    pos.y + 12 < GAME_VAR->p_pos.y + 24) ||
    (pos.x - 24 > GAME_VAR->p_pos.x - 24 &&
    pos.x - 24 < GAME_VAR->p_pos.x + 24 &&
    pos.y + 28 > GAME_VAR->p_pos.y - 24 &&
    pos.y + 28 < GAME_VAR->p_pos.y + 24)))
        return (sfTrue);
    return (is_stuck_by_p2(rpg, pos, direction));
}

static void check_stuck(rpg_t *rpg, mob_t *mob, obstacles_t *obs, int nb_obs)
{
    if (((mob->direction == north && north_entity_colision_gestion(mob->pos,
    obs, nb_obs) == 0) || (mob->direction == south &&
    south_entity_colision_gestion(mob->pos, obs, nb_obs) == 0)) &&
    (!is_stuck_by_p(rpg, mob->pos, mob->direction))) {
        mob->pos.x > GAME_VAR->p_pos.x ? mob->direction = west: 0;
        mob->pos.x < GAME_VAR->p_pos.x ? mob->direction = east : 0;
    }
    if (((mob->direction == west && west_entity_colision_gestion
    (mob->pos, obs, nb_obs) == 0) || (mob->direction == east
    && east_entity_colision_gestion(mob->pos, obs, nb_obs) == 0)) &&
    !is_stuck_by_p(rpg, mob->pos, mob->direction)) {
        mob->pos.y > GAME_VAR->p_pos.y ? mob->direction = north : 0;
        mob->pos.y < GAME_VAR->p_pos.y ? mob->direction = south : 0;
    }
}

static void mob_orientation(rpg_t *rpg, mob_t *mob)
{
    int dist_x = mob->pos.x - GAME_VAR->p_pos.x;
    int dist_y = mob->pos.y - GAME_VAR->p_pos.y;

    dist_y > 0 && dist_y > dist_x ? mob->direction = north : 0;
    dist_x > 0 && dist_x > dist_y ? mob->direction = west : 0;
    dist_x < 0 && my_abs(dist_y) < my_abs(dist_x) ? mob->direction = east : 0;
    dist_y < 0 && my_abs(dist_x) < my_abs(dist_y) ? mob->direction = south : 0;
}

void mob_orientation_gestion(rpg_t *rpg, mob_t *mob,
obstacles_t *obs, int nb_obs)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (mob->move_clock)) >= 100) {
        mob_orientation(rpg, mob);
        check_stuck(rpg, mob, obs, nb_obs);
        mob->direction == west ? mob->texture =
        GAME->mob_direct[west].texture : 0;
        mob->direction == east ? mob->texture =
        GAME->mob_direct[east].texture : 0;
        mob->direction == north ? mob->texture =
        GAME->mob_direct[north].texture : 0;
        mob->direction == south ? mob->texture =
        GAME->mob_direct[south].texture : 0;
        sfClock_restart(mob->move_clock);
    }
    !is_stuck_by_p(rpg, mob->pos, mob->direction) &&
    bako_is_detectable(rpg, mob) ?
    move_mob(mob, mob->direction, mob->speed) : 0;
    sfSprite_setPosition(mob->sprite, mob->pos);
}