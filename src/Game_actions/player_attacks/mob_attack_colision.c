/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** is_a_mob_here
*/

#include "my_rpg.h"

static void damage_mob(rpg_t *rpg, mob_t *mob)
{
    mob->HP -= BASIC_ATTK->damage;
    sfClock_restart(mob->attacked_clock);
}

int damage_hitted_mobs(rpg_t *rpg, mob_t *mob)
{
    for (int i = 0; i < BASIC_ATTK->nb_hit_points; i++) {
        if (BASIC_ATTK->hit_points[i].x >= mob->pos.x - 24 &&
            BASIC_ATTK->hit_points[i].x <= mob->pos.x + 24 &&
            BASIC_ATTK->hit_points[i].y >= mob->pos.y - 24 &&
            BASIC_ATTK->hit_points[i].y <= mob->pos.y + 24) {
                damage_mob(rpg, mob);
                mob->is_attacked = sfTrue;
                return (1);
            }
    }
    return (0);
}

void damage_boss(rpg_t *rpg)
{
    for (int i = 0; i < BASIC_ATTK->nb_hit_points; i++) {
        if (BASIC_ATTK->hit_points[i].x >= BOSS_GEST->akaza->pos.x &&
            BASIC_ATTK->hit_points[i].x <= BOSS_GEST->akaza->pos.x + 174 &&
            BASIC_ATTK->hit_points[i].y >= BOSS_GEST->akaza->pos.y &&
            BASIC_ATTK->hit_points[i].y <= BOSS_GEST->akaza->pos.y + 220) {
                BOSS_GEST->akaza->life -= BASIC_ATTK->damage;
                BASIC_ATTK->atk_rect.left++;
                return;
            }
    }
}
