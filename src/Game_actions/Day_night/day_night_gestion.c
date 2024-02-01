/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** day_night_gestion
*/

#include <stdlib.h>
#include "my_rpg.h"

void my_firefly(rpg_t *rpg)
{
    for (int i = 0; i < 600; i++) {
        GAME->firefly[i].direction == north ?
        GAME->firefly[i].pos.y += GAME->firefly[i].speed : 0;
        GAME->firefly[i].direction == south ?
        GAME->firefly[i].pos.y -= GAME->firefly[i].speed : 0;
        GAME->firefly[i].direction == east ?
        GAME->firefly[i].pos.x += GAME->firefly[i].speed : 0;
        GAME->firefly[i].direction == west ?
        GAME->firefly[i].pos.x -= GAME->firefly[i].speed : 0;
        sfRectangleShape_setPosition(GAME->firefly[i].rect,
        GAME->firefly[i].pos);
        sfRectangleShape_setFillColor(GAME->firefly[i].rect, GAME->firefly[i].color);
        sfRectangleShape_setSize(GAME->firefly[i].rect,
        (sfVector2f){1, 1});
        sfRenderWindow_drawRectangleShape(BASE->window,
        GAME->firefly[i].rect, sfFalse);
    }
}

void night_comming(rpg_t *rpg)
{
    for (int i = 0; i < 27 && GAME->pnj[i].opacity.a > 1; i++) {
        GAME->pnj[i].opacity.a -= 3;
        sfSprite_setColor(GAME->pnj[i].sprite, GAME->pnj[i].opacity);
    }
    for (int i = 0; i < 600; i++) {
        GAME->firefly[i].color.a = 255;
        if (sfTime_asMilliseconds(sfClock_getElapsedTime
            (GAME->firefly[i].orientation_clock)) > 500) {
            GAME->firefly[i].direction = rand() % 4;
            sfClock_restart(GAME->firefly[i].orientation_clock);
        }
    }
}

void day_comming(rpg_t *rpg)
{
    for (int i = 0; i < 27 && GAME->pnj[i].opacity.a < 254; i++) {
        GAME->pnj[i].opacity.a += 3;
        sfSprite_setColor(GAME->pnj[i].sprite, GAME->pnj[i].opacity);
    }
    for (int i = 0; i < 600; i++) {
        GAME->firefly[i].color.a = 0;
        sfRectangleShape_setFillColor(GAME->firefly[i].rect,
        GAME->firefly[i].color);
        sfRenderWindow_drawRectangleShape(BASE->window,
        GAME->firefly[i].rect, sfFalse);
    }
}

void my_day_night(rpg_t *rpg)
{
    if (GAME->day_night->int_time >= 90 &&
        GAME->day_night->int_time < 110 &&
        GAME->day_night->obscurity.a < 160) {
        night_comming(rpg);
        GAME->day_night->obscurity.a += 1;
        GAME->day_night->obscurity.b += 0.07;
    }
    if (GAME->day_night->int_time >= 200 &&
    GAME->day_night->int_time < 220 &&
    GAME->day_night->obscurity.a > 0) {
        day_comming(rpg);
        GAME->day_night->obscurity.a -= 1;
        GAME->day_night->obscurity.b -= 0.07;
    }
    if (GAME->day_night->int_time >= 110 && GAME->day_night->int_time < 200)
        my_firefly(rpg);
}

void my_game_seconds(rpg_t *rpg)
{
    if (GAME->day_night->int_time == 220)
        GAME->day_night->int_time = 0;
    else if (GAME->day_night->int_time < 220)
        GAME->day_night->int_time++;
    sfClock_restart(GAME->day_night->seconds);
}

void day_night_gestion(rpg_t *rpg)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (GAME->day_night->seconds)) >= 1000) {
        GAME->day_night->int_time == 210 ? play_sound(rpg,
        GAME->day_night->morning, GAME->day_night->morning_buff) : 0;
        GAME->day_night->int_time == 95 ? play_sound(rpg,
        GAME->day_night->night, GAME->day_night->night_buff) : 0;
        my_game_seconds(rpg);
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (GAME->day_night->time_clock)) >= 80) {
        my_day_night(rpg);
        sfClock_restart(GAME->day_night->time_clock);
    }
    sfSprite_setColor(GAME->day_night->night_sprite,
    GAME->day_night->obscurity);
    sfSprite_setColor(GAME->day_night->rev_night_sprite,
    GAME->day_night->obscurity);
}
