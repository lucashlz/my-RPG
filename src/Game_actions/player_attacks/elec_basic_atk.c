/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** elec_basic_atk
*/

#include "my_rpg.h"

static void colision_obstacle_elec(rpg_t *rpg, obstacles_t *obs, int nb_obs)
{
    east_attack_colision_gestion(BASIC_ATTK->hit_points[2],
    obs, nb_obs) == 0 ||
    west_attack_colision_gestion(BASIC_ATTK->hit_points[2],
    obs, nb_obs) == 0 ||
    north_attack_colision_gestion(BASIC_ATTK->hit_points[2],
    obs, nb_obs) == 0 ||
    south_attack_colision_gestion(BASIC_ATTK->hit_points[2],
    obs, nb_obs) == 0 ||
    (!BOSS_GEST->is_in_arena && !is_a_pnj_here(rpg, BASIC_ATTK->hit_points[2]))
    ? BASIC_ATTK->atk_rect.left++ : 0;
}

static void move_basic_elec_atk(rpg_t *rpg)
{
    BASIC_ATTK->direction == north ? BASIC_ATTK->atk_pos.y -= 10 : 0;
    BASIC_ATTK->direction == south ? BASIC_ATTK->atk_pos.y += 10 : 0;
    BASIC_ATTK->direction == east ? BASIC_ATTK->atk_pos.x += 10 : 0;
    BASIC_ATTK->direction == west ? BASIC_ATTK->atk_pos.x -= 10 : 0;
    for (int i = 0; i < BASIC_ATTK->nb_hit_points; i++) {
        BASIC_ATTK->direction == north ? BASIC_ATTK->hit_points[i].y -= 10 : 0;
        BASIC_ATTK->direction == south ? BASIC_ATTK->hit_points[i].y += 10 : 0;
        BASIC_ATTK->direction == east ? BASIC_ATTK->hit_points[i].x += 10 : 0;
        BASIC_ATTK->direction == west ? BASIC_ATTK->hit_points[i].x -= 10 : 0;
    }
}

void elec_basic_attack(rpg_t *rpg)
{
    int nb_obs = 0;
    obstacles_t *obs = NULL;

    BOSS_GEST->is_in_arena ? nb_obs = BOSS_GEST->nb_obs : GAME_VAR->nb_obs;
    BOSS_GEST->is_in_arena ? obs = BOSS_GEST->obs : GAME->obst;
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (BASIC_ATTK->move_rect)) % BASIC_ATTK->attack_speed == 0) {
        move_basic_elec_atk(rpg);
        colision_obstacle_elec(rpg, obs, nb_obs);
        play_sound(rpg, BASIC_ATTK->atck_sound, BASIC_ATTK->atk_sound_buff);
        sfSprite_setPosition(BASIC_ATTK->atk_sprite, BASIC_ATTK->atk_pos);
        sfRenderWindow_drawSprite(BASE->window,
        BASIC_ATTK->atk_sprite, sfFalse);
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (BASIC_ATTK->move_rect)) >= 380)
        BASIC_ATTK->atk_rect.left++;
}
