/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** check_attack_colision
*/

#include "my_rpg.h"

int north_attack_colision_gestion(sfVector2f pos, obstacles_t *obs, int nb_obs)
{
    for (int i = 0; i < nb_obs; i++) {
        if ((pos.x > obs[i].pos.x &&
            pos.x < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y > obs[i].pos.y &&
            pos.y < obs[i].pos.y +
            obs[i].col_rect.y) ||
            (pos.x > obs[i].pos.x &&
            pos.x < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y > obs[i].pos.y &&
            pos.y < obs[i].pos.y +
            obs[i].col_rect.y))
                return (0);
    }
    return (1);
}

int south_attack_colision_gestion(sfVector2f pos, obstacles_t *obs, int nb_obs)
{
    for (int i = 0; i < nb_obs; i++) {
        if ((pos.x > obs[i].pos.x &&
            pos.x < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y > obs[i].pos.y &&
            pos.y < obs[i].pos.y +
            obs[i].col_rect.y) ||
            (pos.x > obs[i].pos.x &&
            pos.x < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y > obs[i].pos.y &&
            pos.y < obs[i].pos.y +
            obs[i].col_rect.y) || pos.x >= 4477)
                return (0);
    }
    return (1);
}

int east_attack_colision_gestion(sfVector2f pos, obstacles_t *obs, int nb_obs)
{
    for (int i = 0; i < nb_obs; i++) {
        if ((pos.x > obs[i].pos.x &&
            pos.x < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y > obs[i].pos.y &&
            pos.y < obs[i].pos.y +
            obs[i].col_rect.y) ||
            (pos.x > obs[i].pos.x &&
            pos.x < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y > obs[i].pos.y &&
            pos.y < obs[i].pos.y +
            obs[i].col_rect.y) || pos.x <= 613)
                return (0);
    }
    return (1);
}

int west_attack_colision_gestion(sfVector2f pos, obstacles_t *obs, int nb_obs)
{
    for (int i = 0; i < nb_obs; i++)
        if ((pos.x > obs[i].pos.x &&
            pos.x < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y >= obs[i].pos.y &&
            pos.y <= obs[i].pos.y +
            obs[i].col_rect.y) ||
            (pos.x > obs[i].pos.x &&
            pos.x < obs[i].pos.x +
            obs[i].col_rect.x &&
            pos.y >= obs[i].pos.y &&
            pos.y <= obs[i].pos.y +
            obs[i].col_rect.y) || pos.y >= 2841)
                return (0);
    return (1);
}
