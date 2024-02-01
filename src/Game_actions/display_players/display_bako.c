/*
** EPITECH PROJECT, 2022
** stock
** File description:
** display_bako
*/

#include "my_rpg.h"

void display_bako(rpg_t *rpg)
{
    GAME_VAR->input_key_p == 1 ? sfRenderWindow_drawSprite(BASE->window,
    GAME->p[bako_mv_top].sprite, NULL) : 0;
    GAME_VAR->input_key_p == 2 ? sfRenderWindow_drawSprite(BASE->window,
    GAME->p[bako_mv_bot].sprite, NULL) : 0;
    GAME_VAR->input_key_p == 3 ? sfRenderWindow_drawSprite(BASE->window,
    GAME->p[bako_mv_right].sprite, NULL) : 0;
    GAME_VAR->input_key_p == 4 ? sfRenderWindow_drawSprite(BASE->window,
    GAME->p[bako_mv_left].sprite, NULL): 0;
    GAME_VAR->input_key_m == 1 ? sfRenderWindow_drawSprite(BASE->window,
    GAME->p[bako_place_top].sprite, NULL) : 0;
    GAME_VAR->input_key_m == 2 ? sfRenderWindow_drawSprite(BASE->window,
    GAME->p[bako_place_bottom].sprite, NULL) : 0;
    GAME_VAR->input_key_m == 3 ? sfRenderWindow_drawSprite(BASE->window,
    GAME->p[bako_place_right].sprite, NULL) : 0;
    GAME_VAR->input_key_m == 4 ? sfRenderWindow_drawSprite(BASE->window,
    GAME->p[bako_place_left].sprite, NULL) : 0;
}

void sound_step(rpg_t *rpg)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (GAME->music->clock_step)) >= 30) {
        sfMusic_stop(rpg->game->music->step);
        sfMusic_play(rpg->game->music->step);
        sfClock_restart(GAME->music->clock_step);
    }
}

void conditions_bako(rpg_t *rpg, obstacles_t *obs, int nb_obs)
{
    GAME_VAR->input_key_p == 1 ? display_player_moove_top(rpg, obs,
    nb_obs)/*, sound_step(rpg)*/ : 0;
    GAME_VAR->input_key_p == 2 ? display_player_moove_bottom(rpg, obs,
    nb_obs)/*, sound_step(rpg)*/ : 0;
    GAME_VAR->input_key_p == 3 ? display_player_moove_right(rpg, obs,
    nb_obs)/*, sound_step(rpg)*/ : 0;
    GAME_VAR->input_key_p == 4 ? display_player_moove_left(rpg, obs,
    nb_obs)/*, sound_step(rpg)*/ : 0;
    GAME_VAR->input_key_m == 1 ? display_player_motionless_top(rpg) : 0;
    GAME_VAR->input_key_m == 2 ? display_player_motionless_bottom(rpg) : 0;
    GAME_VAR->input_key_m == 3 ? display_player_motionless_right(rpg) : 0;
    GAME_VAR->input_key_m == 4 ? display_player_motionless_left(rpg) : 0;
}
