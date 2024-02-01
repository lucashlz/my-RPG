/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_girl
*/

#include "my_rpg.h"

static void my_clock_girl(rpg_t *rpg, int which)
{
    GAME->girl[which].time = sfClock_getElapsedTime
    (GAME->girl[which].clock);
    GAME->girl[which].sec = GAME->girl[which].time.microseconds / 1000000.0;
}

static void moove_girl(rpg_t *rpg, int which_girl)
{
    int val_max = 1284;

    if (GAME->girl[which_girl].sec > 0.12) {
        if (GAME->girl[which_girl].rect.left >= val_max - 107)
            GAME->girl[which_girl].rect.left = 0;
        else
            GAME->girl[which_girl].rect.left += 107;
        sfClock_restart(GAME->girl[which_girl].clock);
    }
}

static void display_girls_mob(rpg_t *rpg)
{
    for (int i = 0; i < GAME->girl->mobs.nb_mobs; i++) {
        sfSprite_setPosition(GAME->girl[0].mobs.mob[i].sprite,
        GAME->girl[0].mobs.mob[i].pos);
        move_mob_rect(&GAME->girl->mobs.mob[i]);
        sfSprite_setTextureRect(GAME->girl[0].mobs.mob[i].sprite,
        GAME->girl[0].mobs.mob[i].rect);
        sfRenderWindow_drawSprite(BASE->window,
        GAME->girl[0].mobs.mob[i].sprite, NULL);
    }
}

void display_girl(rpg_t *rpg)
{
    my_clock_girl(rpg, 0);
    moove_girl(rpg, 0);
    sfSprite_setPosition(GAME->girl[0].sprite, GAME->girl[0].pos);
    sfSprite_setScale(GAME->girl[0].sprite, GAME->girl[0].scale);
    sfSprite_setTextureRect(GAME->girl[0].sprite, GAME->girl[0].rect);
    sfRenderWindow_drawSprite(BASE->window, GAME->girl[0].sprite, NULL);
    display_girls_mob(rpg);
}
