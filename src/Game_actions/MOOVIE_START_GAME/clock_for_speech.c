/*
** EPITECH PROJECT, 2022
** rpg_2
** File description:
** clock_for_speech
*/

#include "my_rpg.h"

void clock_speech_zero(rpg_t *rpg)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime
    (GAME->write[GAME_VAR->which_speech].clock)) > 1) {
        if (GAME->write[GAME_VAR->which_speech].sec >=
        (GAME->write[GAME_VAR->which_speech].max_sec)) {
            GAME_VAR->valid_write = 1;
            GAME_VAR->which_speech++;
        } else {
            sfText_setColor(GAME->write[GAME_VAR->which_speech].txt, sfYellow);
            sfRenderWindow_drawText(BASE->window,
            GAME->write[GAME_VAR->which_speech].txt, NULL);
            GAME->write[GAME_VAR->which_speech].sec++;
        }
    }
}
