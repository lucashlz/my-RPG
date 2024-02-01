/*
** EPITECH PROJECT, 2022
** My_rpg
** File description:
** display_top_right_left_bottom
*/

#include "my_rpg.h"
#include <stdio.h>

void display_player_moove_top(rpg_t *rpg, obstacles_t *obs, int nb_obs)
{
    GAME_VAR->curr_bako_sprite = GAME->p[bako_mv_top].sprite;
    my_clock_players(rpg, bako_mv_top);
    moove_players(rpg, bako_mv_top);
    sfSprite_setScale(GAME->p[bako_mv_top].sprite,
    GAME->p[bako_mv_top].scale);
    sfSprite_setTextureRect(GAME->p[bako_mv_top].sprite,
    GAME->p[bako_mv_top].rect);
    sfSprite_setPosition(GAME->p[bako_mv_top].sprite,
    GAME_VAR->p_pos);
    if (north_entity_colision_gestion(GAME_VAR->p_pos, obs, nb_obs) == 1) {
        GAME_VAR->p_pos.y -= 3;
        sfView_move(GAME_VAR->view, (sfVector2f){0, -3});
    }
}

void display_player_moove_bottom(rpg_t *rpg, obstacles_t *obs, int nb_obs)
{
    GAME_VAR->curr_bako_sprite = GAME->p[bako_mv_bot].sprite;
    my_clock_players(rpg, bako_mv_bot);
    moove_players(rpg, bako_mv_bot);
    sfSprite_setScale(GAME->p[bako_mv_bot].sprite,
    GAME->p[bako_mv_bot].scale);
    sfSprite_setTextureRect(GAME->p[bako_mv_bot].sprite,
    GAME->p[bako_mv_bot].rect);
    sfSprite_setPosition(GAME->p[bako_mv_bot].sprite,
    GAME_VAR->p_pos);
    if (south_entity_colision_gestion(GAME_VAR->p_pos, obs, nb_obs) == 1) {
        GAME_VAR->p_pos.y += 3;
        sfView_move(GAME_VAR->view, (sfVector2f){0, 3});
    }
}

void display_player_moove_right(rpg_t *rpg, obstacles_t *obs, int nb_obs)
{
    GAME_VAR->curr_bako_sprite = GAME->p[bako_mv_right].sprite;
    my_clock_players(rpg, bako_mv_right);
    moove_players(rpg, bako_mv_right);
    sfSprite_setScale(GAME->p[bako_mv_right].sprite,
    GAME->p[bako_mv_right].scale);
    sfSprite_setTextureRect(GAME->p[bako_mv_right].sprite,
    GAME->p[bako_mv_right].rect);
    sfSprite_setPosition(GAME->p[bako_mv_right].sprite,
    GAME_VAR->p_pos);
    if (east_entity_colision_gestion(GAME_VAR->p_pos, obs, nb_obs) == 1) {
        GAME_VAR->p_pos.x += 3;
        sfView_move(GAME_VAR->view, (sfVector2f){3, 0});
    }
}

void display_player_moove_left(rpg_t *rpg, obstacles_t *obs, int nb_obs)
{
    GAME_VAR->curr_bako_sprite = GAME->p[bako_mv_left].sprite;
    my_clock_players(rpg, bako_mv_left);
    moove_players(rpg, bako_mv_left);
    sfSprite_setScale(GAME->p[bako_mv_left].sprite,
    GAME->p[bako_mv_left].scale);
    sfSprite_setTextureRect(GAME->p[bako_mv_left].sprite,
    GAME->p[bako_mv_left].rect);
    sfSprite_setPosition(GAME->p[bako_mv_left].sprite,
    GAME_VAR->p_pos);
    if (west_entity_colision_gestion(GAME_VAR->p_pos, obs, nb_obs) == 1) {
        GAME_VAR->p_pos.x -= 3;
        sfView_move(GAME_VAR->view, (sfVector2f){-3, 0});
    }
}
