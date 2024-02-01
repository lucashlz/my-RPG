/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_transition_start_kenett
*/

#include "my_rpg.h"

static void loop_animation(rpg_t *rpg)
{
    sfRenderWindow_clear(BASE->window, sfBlack);
    display_map(rpg);
    display_png(rpg);
    display_map_anime(rpg);
    new_view_start_kennet(rpg);
    display_start_kenett(rpg);
}

void check(rpg_t *rpg)
{
    if (GAME_VAR->events.type == sfEvtKeyPressed)
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            GAME->kenett[0].valid = 1;
            return;
        }
    if (GAME_VAR->events.type == sfEvtClosed)
        sfRenderWindow_close(BASE->window);
}

void display_transition_start_kenett(rpg_t *rpg)
{
    sfMusic_stop(MENUS[m_welcome].music);
    play_music(rpg, rpg->game->music->music_in_game);
    while (sfRenderWindow_isOpen(BASE->window)) {
        if (GAME->kenett[0].valid == 1)
            return;
        loop_animation(rpg);
        while (sfRenderWindow_pollEvent(BASE->window, &GAME_VAR->events))
            check(rpg);
        sfRenderWindow_display(BASE->window);
    }
}
