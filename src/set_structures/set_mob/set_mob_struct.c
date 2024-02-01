/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_mob_struct
*/

#include "my_rpg.h"
#include <stdlib.h>

void set_mob_struct(rpg_t *rpg)
{
    GAME->mob_gest = malloc(sizeof(mob_gestion_t));
    GAME->mob_gest->nb_mobs = 0;
    GAME->mob_gest->spawn_clock = sfClock_create();
}
