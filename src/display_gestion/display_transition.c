/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_transition
*/

#include "my_rpg.h"

void display_transition(rpg_t *rpg)
{
    sfMusic_stop(MENUS[m_welcome].music);
    play_music(rpg, GAME->music->speech_start);
    loop_moovie(rpg);
    sfMusic_stop(rpg->game->music->speech_start);
}
