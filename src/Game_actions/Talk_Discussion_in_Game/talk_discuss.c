/*
** EPITECH PROJECT, 2022
** stock
** File description:
** talk_discuss
*/

#include "my_rpg.h"

void color(rpg_t *rpg, int perso)
{
    if (GAME->port[perso].opacity >= 255)
        return;
    sfColor test = sfColor_fromRGBA(255, 255, 255, GAME->port[perso].opacity);
    sfSprite_setColor(GAME->port[perso].sprite, test);
    GAME->port[perso].opacity += 3;
}

void display_portrait(rpg_t *rpg, int perso, sfVector2f pos)
{
    sfSprite_setPosition(GAME->port[perso].sprite, pos);
    sfSprite_setScale(GAME->port[perso].sprite, GAME->port[perso].scale);
    sfSprite_setTextureRect(GAME->port[perso].sprite, GAME->port[perso].rect);
    color(rpg, perso);
    sfRenderWindow_drawSprite(BASE->window, GAME->port[perso].sprite, NULL);
}

void my_clock_discuss(rpg_t *rpg, int discussion)
{
    GAME->d[discussion].time = sfClock_getElapsedTime
    (GAME->d[discussion].clock_discuss);
    GAME->d[discussion].sec = GAME->d[discussion].time.microseconds /
    1000000.0;
}

void talk_welcome(rpg_t *rpg)
{
    welcom_discuss(rpg);
}
