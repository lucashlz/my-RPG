/*
** EPITECH PROJECT, 2022
** My_rpg
** File description:
** display_motion_less
*/

#include "my_rpg.h"

void display_player_motionless_top(rpg_t *rpg)
{
    GAME_VAR->curr_bako_sprite = GAME->p[bako_place_top].sprite;
    my_clock_players(rpg, bako_place_top);
    moove_players(rpg, bako_place_top);
    sfSprite_setScale(GAME->p[bako_place_top].sprite,
    GAME->p[bako_place_top].scale);
    sfSprite_setTextureRect(GAME->p[bako_place_top].sprite,
    GAME->p[bako_place_top].rect);
    sfSprite_setPosition(GAME->p[bako_place_top].sprite, GAME_VAR->p_pos);
}

void display_player_motionless_bottom(rpg_t *rpg)
{
    GAME_VAR->curr_bako_sprite = GAME->p[bako_place_bottom].sprite;
    my_clock_players(rpg, bako_place_bottom);
    moove_players(rpg, bako_place_bottom);
    sfSprite_setScale(GAME->p[bako_place_bottom].sprite,
    GAME->p[bako_place_bottom].scale);
    sfSprite_setTextureRect(GAME->p[bako_place_bottom].sprite,
    GAME->p[bako_place_bottom].rect);
    sfSprite_setPosition(GAME->p[bako_place_bottom].sprite, GAME_VAR->p_pos);
}

void display_player_motionless_right(rpg_t *rpg)
{
    GAME_VAR->curr_bako_sprite = GAME->p[bako_place_right].sprite;
    my_clock_players(rpg, bako_place_right);
    moove_players(rpg, bako_place_right);
    sfSprite_setScale(GAME->p[bako_place_right].sprite,
    GAME->p[bako_place_right].scale);
    sfSprite_setTextureRect(GAME->p[bako_place_right].sprite,
    GAME->p[bako_place_right].rect);
    sfSprite_setPosition(GAME->p[bako_place_right].sprite, GAME_VAR->p_pos);
}

void display_player_motionless_left(rpg_t *rpg)
{
    GAME_VAR->curr_bako_sprite = GAME->p[bako_place_left].sprite;
    my_clock_players(rpg, bako_place_left);
    moove_players(rpg, bako_place_left);
    sfSprite_setScale(GAME->p[bako_place_left].sprite,
    GAME->p[bako_place_left].scale);
    sfSprite_setTextureRect(GAME->p[bako_place_left].sprite,
    GAME->p[bako_place_left].rect);
    sfSprite_setPosition(GAME->p[bako_place_left].sprite, GAME_VAR->p_pos);
}
