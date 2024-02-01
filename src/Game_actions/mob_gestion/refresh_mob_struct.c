/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** refresh_mob_struct
*/

#include "my_rpg.h"
#include <stdlib.h>

static mob_t *fill_new_mobs_struct(rpg_t *rpg, mob_t *new_mobs,
mob_gestion_t *mob_gest)
{
    int j = 0;

    for (int i = 0; i < mob_gest->nb_mobs; i++) {
        if (mob_gest->mob[i].HP <= 0) {
            rpg->money++;
            continue;
        }
        new_mobs[j] = mob_gest->mob[i];
        j++;
    }
    return (new_mobs);
}

void refresh_mob_struct(rpg_t *rpg, mob_gestion_t *mob_gest)
{
    int new_nb_mobs = mob_gest->nb_mobs;
    mob_t *new_mobs = NULL;

    for (int i = 0; i < mob_gest->nb_mobs; i++) {
        if (mob_gest->mob[i].HP <= 0)
            new_nb_mobs--;
    }
    new_mobs = malloc(sizeof(mob_t) * new_nb_mobs);
    new_mobs = fill_new_mobs_struct(rpg, new_mobs, mob_gest);
    mob_gest->nb_mobs = new_nb_mobs;
    mob_gest->mob = new_mobs;
}