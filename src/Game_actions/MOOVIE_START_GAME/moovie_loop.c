/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** moovie_loop
*/

#include "my_rpg.h"
#include <stdlib.h>
#include <stdio.h>

static int display_moovie(rpg_t *rpg)
{
    GAME_VAR->which_background == 0 ? display_image(rpg, 0) : 0;
    GAME_VAR->which_background == 1 ? display_image(rpg, 1) : 0;
    GAME_VAR->which_background == 2 ? display_image(rpg, 2) : 0;
    GAME_VAR->which_background == 3 ? display_image(rpg, 3) : 0;
    GAME_VAR->which_background == 4 ? display_image(rpg, 4) : 0;
    GAME_VAR->which_background == 5 ? display_image(rpg, 5) : 0;
    GAME_VAR->which_background == 6 ? display_image(rpg, 6) : 0;
    return (GAME_VAR->which_background);
}

static void check_event(rpg_t *rpg)
{
    if (GAME_VAR->events.type == sfEvtKeyPressed)
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            GAME_VAR->which_background++;
            return;
        }
    if (GAME_VAR->events.type == sfEvtClosed)
        sfRenderWindow_close(BASE->window);
}

void loop_moovie(rpg_t *rpg)
{
    GAME_VAR->is_active = sfTrue;
    while (GAME_VAR->is_active == sfTrue &&
    sfRenderWindow_isOpen(BASE->window)) {
        if (display_moovie(rpg) == 7) {
            return;
        }
        while (sfRenderWindow_pollEvent(BASE->window, &GAME_VAR->events))
            check_event(rpg);
        sfRenderWindow_display(BASE->window);
    }
}
