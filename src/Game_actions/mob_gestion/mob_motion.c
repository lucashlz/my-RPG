/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** mob_motion
*/

#include "my_rpg.h"

static int distance_beetween(sfVector2f pos1, sfVector2f pos2)
{
    int x = my_compute_power_rec((pos1.x - pos2.x), 2);
    int y = my_compute_power_rec((pos1.y - pos2.y), 2);

    return (x + y);
}

sfBool bako_is_detectable(rpg_t *rpg, mob_t *mob)
{
    if (GAME->capacity->invi->is_invisible)
        return (sfFalse);
    if (distance_beetween(mob->pos, GAME_VAR->p_pos) >= 150000)
        return (sfFalse);
    return (sfTrue);
}

void move_mob(mob_t *mob, int direction, int nb_pixel)
{
    switch (direction) {
        case (north):
            mob->pos.y -= nb_pixel;
            break;
        case (south):
            mob->pos.y += nb_pixel;
            break;
        case (east):
            mob->pos.x += nb_pixel;
            break;
        case (west):
            mob->pos.x -= nb_pixel;
            break;
    }
}

void move_mob_rect(mob_t *mob)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(mob->clock)) >= 100) {
        if (mob->rect.left < 144)
            mob->rect.left += 48;
        else
            mob->rect.left = 0;
        sfClock_restart(mob->clock);
    }
}