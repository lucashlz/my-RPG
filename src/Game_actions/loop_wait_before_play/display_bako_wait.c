/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_baco
*/

#include "my_rpg.h"

void display_bako_wait(rpg_t *rpg)
{
    my_clock_players(rpg, bako_mv_right);
    moove_players(rpg, bako_mv_right);
    sfSprite_setScale(GAME->p[bako_mv_right].sprite,
    (sfVector2f){2.2, 2.2});
    sfSprite_setTextureRect(GAME->p[bako_mv_right].sprite,
    GAME->p[bako_mv_right].rect);
    sfSprite_setPosition(GAME->p[bako_mv_right].sprite,
    (sfVector2f){1000, 560});
    sfRenderWindow_drawSprite(BASE->window,
    GAME->p[bako_mv_right].sprite, NULL);
}
