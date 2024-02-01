/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_image
*/

#include "my_rpg.h"
#include <stdio.h>
#include <stdlib.h>

void my_clock_moovie(rpg_t *rpg, int img)
{
    GAME->moovie[img].time = sfClock_getElapsedTime(GAME->moovie[img].clock);
    GAME->moovie[img].sec = GAME->moovie[img].time.microseconds / 1000000.0;
}

void color_background(rpg_t *rpg, int img)
{
    sfColor test = sfColor_fromRGBA(255, 255, 255, GAME->moovie[img].opacity);

    sfSprite_setColor(GAME->moovie[img].sprite, test);
    if (GAME->moovie[img].sec > 0.05) {
        if (GAME->moovie[img].pos.x <= -110) {
            GAME_VAR->which_background += 1;
            return;
        } else {
            GAME->moovie[img].opacity += 0.4;
            GAME->moovie[img].pos.x -= 0.2;
        }
    }
}

void display_image(rpg_t *rpg, int img)
{
    sfRenderWindow_clear(BASE->window, sfTransparent);
    my_clock_moovie(rpg, img);
    sfSprite_setPosition(GAME->moovie[img].sprite, GAME->moovie[img].pos);
    sfSprite_setScale(GAME->moovie[img].sprite, GAME->moovie[img].scale);
    sfSprite_setTextureRect(GAME->moovie[img].sprite, GAME->moovie[img].rect);
    color_background(rpg, img);
    sfRenderWindow_drawSprite(BASE->window, GAME->moovie[img].sprite, NULL);
    display_key_enter(rpg, (sfVector2f){1800, 920});
    clock_speech_zero(rpg);
}
