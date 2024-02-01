/*
** EPITECH PROJECT, 2022
** My_rpg
** File description:
** set_all players in this .c
*/

#include "my_rpg.h"
#include <stdlib.h>

static players_t set_players_struct(char *path,
sfIntRect rect, sfVector2f scale)
{
    players_t players;

    players.clock_bako = sfClock_create();
    players.sprite = sfSprite_create();
    players.texture = sfTexture_createFromFile(path, NULL);
    players.rect = rect;
    players.scale = scale;
    sfSprite_setOrigin(players.sprite, (sfVector2f){24, 24});
    sfSprite_setTexture(players.sprite, players.texture, sfTrue);
    sfSprite_setTextureRect(players.sprite, players.rect);
    return (players);
}

void set_players(rpg_t *rpg)
{
    GAME->p[bako_mv_top] = set_players_struct(BAKO_MV_TOP_PATH,
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->p[bako_mv_bot] = set_players_struct(BAKO_MV_BOT_PATH,
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->p[bako_mv_right] = set_players_struct(BAKO_MV_RIGHT_PATH,
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->p[bako_mv_left] = set_players_struct(BAKO_MV_LEFT_PATH,
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->p[bako_place_top] = set_players_struct(BAKO_TOP_PATH,
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->p[bako_place_bottom] = set_players_struct(BAKO_BOT_PATH,
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->p[bako_place_right] = set_players_struct(BAKO_RIGHT_PATH,
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->p[bako_place_left] = set_players_struct(BAKO_LEFT_PATH,
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
}
