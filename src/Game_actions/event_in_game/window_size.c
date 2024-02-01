/*
** EPITECH PROJECT, 2022
** window_size
** File description:
** window_size
*/

#include "my_rpg.h"

void switch__window_size(rpg_t *rpg)
{
    my_put_nbr(rpg->base->window_size);
    sfRenderWindow_destroy(BASE->window);
    if (rpg->base->window_size == 0) {
        rpg->base->window_size = 1;
        sfVideoMode video = *sfVideoMode_getFullscreenModes(NULL);
        BASE->window = sfRenderWindow_create(video,
        "Bako's Adventure", sfFullscreen, NULL);
    }
    else if (rpg->base->window_size == 1) {
        rpg->base->window_size = 0;
        sfVideoMode video = {1920, 1080, 60};
        BASE->window = sfRenderWindow_create(video,
        "Bako's Adventure", sfDefaultStyle, NULL);
    }
    sfRenderWindow_setFramerateLimit(BASE->window, 60);
}

void check_window(rpg_t *rpg)
{
    if (GAME_VAR->events.type == sfEvtKeyPressed &&
    GAME_VAR->events.key.code == sfKeyL)
            switch__window_size(rpg);
}