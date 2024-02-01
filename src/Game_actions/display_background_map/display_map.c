/*
** EPITECH PROJECT, 2022
** My_rpg
** File description:
** display_map
*/

#include "my_rpg.h"

void display_obstacles(rpg_t *rpg)
{
    sfRenderWindow_drawSprite(BASE->window, GAME->b[obstacles].sprite, NULL);
    sfRenderWindow_drawSprite(BASE->window,
    GAME->day_night->rev_night_sprite, sfFalse);
}

void display_map(rpg_t *rpg)
{
    sfRenderWindow_drawSprite(BASE->window, GAME->b[map].sprite, NULL);
}

static void my_clock_map(rpg_t *rpg, int which)
{
    GAME->b[which].time = sfClock_getElapsedTime
    (GAME->b[which].clock);
    GAME->b[which].sec = GAME->b[which].time.microseconds / 1000000.0;
}

static void moove_map(rpg_t *rpg, int which_b)
{
    int val_max = 10176;

    if (GAME->b[which_b].sec > 0.40) {
        if (GAME->b[which_b].rect.top == 0 && GAME->b[which_b].rect.left
        >= val_max - 5088) {
            GAME->b[which_b].rect.left = 0;
            GAME->b[which_b].rect.top += 3458;

        } else if (GAME->b[which_b].rect.top >= 3458 &&
        GAME->b[which_b].rect.left >= val_max - 5088) {
            GAME->b[which_b].rect.left = 0;
            GAME->b[which_b].rect.top -= 3458;
        } else
            GAME->b[which_b].rect.left += 5088;
        sfClock_restart(GAME->b[which_b].clock);
    }
}

void display_map_anime(rpg_t *rpg)
{
    my_clock_map(rpg, animations);
    moove_map(rpg, animations);
    sfSprite_setPosition(GAME->b[animations].sprite, GAME->b[animations].pos);
    sfSprite_setScale(GAME->b[animations].sprite, GAME->b[animations].scale);
    sfSprite_setTextureRect(GAME->b[animations].sprite,
    GAME->b[animations].rect);
    sfRenderWindow_drawSprite(BASE->window, GAME->b[animations].sprite, NULL);
}
