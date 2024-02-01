/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_logo_wait
*/

#include "my_rpg.h"

void display_logo_wait(rpg_t *rpg)
{
    sfSprite_setPosition(GAME->moovie[7].sprite,
    (sfVector2f){700, 110});
    sfSprite_setScale(GAME->moovie[7].sprite,
    (sfVector2f){1.3, 1.3});
    sfSprite_setTextureRect(GAME->moovie[7].sprite,
    GAME->moovie[7].rect);
    sfRenderWindow_drawSprite(BASE->window,
    GAME->moovie[7].sprite, NULL);
}
