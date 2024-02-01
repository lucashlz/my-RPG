/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** check_colisions
*/

#include "my_rpg.h"

sfBool is_an_obstacle_here(rpg_t *rpg, sfVector2f coo)
{
    for (int i = 0; i < GAME_VAR->nb_obs; i++) {
        if (coo.x >= GAME->obst[i].pos.x &&
            coo.x <= GAME->obst[i].pos.x + GAME->obst[i].col_rect.x &&
            coo.y >= GAME->obst[i].pos.y &&
            coo.y <= GAME->obst[i].pos.y + GAME->obst[i].col_rect.y) {
            return (sfTrue);
            }
    }
    return (sfFalse);
}

int north_entity_colision_gestion(sfVector2f pos, obstacles_t *obs, int nb_obs)
{
    for (int i = 0; i < nb_obs; i++)
        if ((pos.x - 12 > obs[i].pos.x &&
            pos.x - 12 < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y > obs[i].pos.y &&
            pos.y < obs[i].pos.y +
            obs[i].col_rect.y) ||
            (pos.x + 12 > obs[i].pos.x &&
            pos.x + 12 < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y > obs[i].pos.y &&
            pos.y < obs[i].pos.y +
            obs[i].col_rect.y))
                return (0);
    return (1);
}

int east_entity_colision_gestion(sfVector2f pos, obstacles_t *obs, int nb_obs)
{
    for (int i = 0; i < nb_obs; i++)
        if ((pos.x + 24 > obs[i].pos.x &&
            pos.x + 24 < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y + 28 > obs[i].pos.y &&
            pos.y + 28 < obs[i].pos.y +
            obs[i].col_rect.y) ||
            (pos.x + 24 > obs[i].pos.x &&
            pos.x + 24 < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y + 12 > obs[i].pos.y &&
            pos.y + 12 < obs[i].pos.y +
            obs[i].col_rect.y) || pos.x >= 4477)
                return (0);
    return (1);
}

int west_entity_colision_gestion(sfVector2f pos, obstacles_t *obs, int nb_obs)
{
    for (int i = 0; i < nb_obs; i++)
        if ((pos.x - 24 > obs[i].pos.x &&
            pos.x - 24 < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y + 12 > obs[i].pos.y &&
            pos.y + 12 < obs[i].pos.y +
            obs[i].col_rect.y) ||
            (pos.x - 24 > obs[i].pos.x &&
            pos.x - 24 < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y + 28 > obs[i].pos.y &&
            pos.y + 28 < obs[i].pos.y +
            obs[i].col_rect.y) || pos.x <= 613)
                return (0);
    return (1);
}

int south_entity_colision_gestion(sfVector2f pos, obstacles_t *obs, int nb_obs)
{
    for (int i = 0; i < nb_obs; i++)
        if ((pos.x - 12 > obs[i].pos.x &&
            pos.x - 12 < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y + 30 >= obs[i].pos.y &&
            pos.y + 30 <= obs[i].pos.y +
            obs[i].col_rect.y) ||
            (pos.x + 12 > obs[i].pos.x &&
            pos.x + 12 < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y + 30 >= obs[i].pos.y &&
            pos.y + 30 <= obs[i].pos.y +
            obs[i].col_rect.y) || pos.y >= 2841)
                return (0);
    return (1);
}
