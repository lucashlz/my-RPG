/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** basic_attacks
*/

#include "my_rpg.h"
#include <stdlib.h>

void move_basic_rect(rpg_t *rpg, mob_gestion_t *mob_gest)
{
    if (GAME_VAR->curr_type == elec && BASIC_ATTK->atk_rect.left == 252) {
        elec_basic_attack(rpg);
        damage_gestion(rpg, mob_gest);
        return;
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (BASIC_ATTK->move_rect)) % BASIC_ATTK->attack_speed == 0) {
        BASIC_ATTK->atk_rect.left == 0 ? damage_gestion(rpg, mob_gest) : 0;
        BASIC_ATTK->atk_rect.left == 420 && GAME_VAR->curr_type == fire ?
        damage_gestion(rpg, mob_gest) : 0;
        if (BASIC_ATTK->atk_rect.left < BASIC_ATTK->attack_max)
            BASIC_ATTK->atk_rect.left += ATTACK_RECT_SIZE;
        if (BASIC_ATTK->atk_rect.left >= BASIC_ATTK->attack_max) {
            GAME_VAR->is_attacking = -1;
            BASIC_ATTK->atk_rect.left = 0;
            sfClock_restart(BASIC_ATTK->cooldown_clock);
        }
    }
}

void my_basic_attack(rpg_t *rpg)
{
    sfSprite_setPosition(BASIC_ATTK->atk_sprite,
    BASIC_ATTK->atk_pos);
    sfSprite_setRotation(BASIC_ATTK->atk_sprite,
    BASIC_ATTK->atk_rotate);
    sfSprite_setTextureRect(BASIC_ATTK->atk_sprite,
    BASIC_ATTK->atk_rect);
    sfRenderWindow_drawSprite(BASE->window,
    BASIC_ATTK->atk_sprite, sfFalse);
    BOSS_GEST->is_in_arena ? move_basic_rect
    (rpg, BOSS_GEST->akaza->minions_gest) : move_basic_rect
    (rpg, GAME->mob_gest);
}