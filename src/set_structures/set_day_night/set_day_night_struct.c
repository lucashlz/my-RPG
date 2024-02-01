/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_day_night_struct
*/

#include "my_rpg.h"
#include <stdlib.h>

void set_day_night(rpg_t *rpg)
{
    GAME->day_night = malloc(sizeof(day_night_t));
    GAME->day_night->night_text = sfTexture_createFromFile(NIGHT, sfFalse);
    GAME->day_night->night_sprite = sfSprite_create();
    GAME->day_night->rev_night_text =
    sfTexture_createFromFile(REV_NIGHT, sfFalse);
    GAME->day_night->rev_night_sprite = sfSprite_create();
    GAME->day_night->obscurity = sfColor_fromRGBA(0, 0, 0, 0);
    GAME->day_night->int_time = 0;
    GAME->day_night->time_clock = sfClock_create();
    GAME->day_night->seconds = sfClock_create();
    GAME->day_night->morning_buff = sfSoundBuffer_createFromFile(MORN_SOUND);
    GAME->day_night->night_buff = sfSoundBuffer_createFromFile(NIGHT_SOUND);
    GAME->day_night->morning = sfSound_create();
    GAME->day_night->night = sfSound_create();
    sfSound_setBuffer(GAME->day_night->morning, GAME->day_night->morning_buff);
    sfSound_setBuffer(GAME->day_night->night, GAME->day_night->night_buff);
    sfSprite_setTexture(GAME->day_night->night_sprite,
    GAME->day_night->night_text, sfFalse);
    sfSprite_setTexture(GAME->day_night->rev_night_sprite,
    GAME->day_night->rev_night_text, sfFalse);
}