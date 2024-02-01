/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** damage_gestion
*/

#include "my_rpg.h"

void damage_gestion(rpg_t *rpg, mob_gestion_t *mob_gest)
{
    int check = 0;

    GAME_VAR->curr_type == fire ? fire_setup(rpg) : 0;
    BASIC_ATTK->damage_left--;
    for (int i = 0; i < mob_gest->nb_mobs; i++)
        check += damage_hitted_mobs(rpg, &mob_gest->mob[i]);
    BOSS_GEST->is_in_arena ? damage_boss(rpg) : 0;
    GAME_VAR->curr_type == elec && check > 0 ? BASIC_ATTK->atk_rect.left++,
    play_sound(rpg, BASIC_ATTK->atck_sound, BASIC_ATTK->atk_sound_buff): 0;
}

sfVector2f hit_points(rpg_t *rpg, int x_gap, int y_gap)
{
    sfVector2f final = (sfVector2f){0, 0};

    final = (sfVector2f){BASIC_ATTK->atk_pos.x -
    (BASIC_ATTK->atk_pos.x - GAME_VAR->p_pos.x) + x_gap,
    BASIC_ATTK->atk_pos.y - (BASIC_ATTK->atk_pos.y -
    GAME_VAR->p_pos.y) + y_gap};
    return (final);
}
