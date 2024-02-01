/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_music
*/

#include <stdlib.h>
#include "my_rpg.h"

void set_sound(rpg_t *rpg)
{
    rpg->game->sound = malloc(sizeof(sound_t));

    SOUND->kenett_wings_buff = sfSoundBuffer_createFromFile
    (KENETT_WINGS_SOUND);
    SOUND->kenett_wings = sfSound_create();
    sfSound_setBuffer(SOUND->kenett_wings, SOUND->kenett_wings_buff);
}

void set_music(rpg_t *rpg)
{
    GAME->music = malloc(sizeof(music_t));
    GAME->music->clock_step = sfClock_create();
    GAME->music->coll_item = sfMusic_createFromFile(COLLECT_ITEM_SOUND);
    GAME->music->die = sfMusic_createFromFile(DIE_SOUND);
    GAME->music->discussion = sfMusic_createFromFile(DISCUSSION_SOUND);
    GAME->music->step = sfMusic_createFromFile(STEP_SOUND);
    GAME->music->switch_item = sfMusic_createFromFile(SWITCH_ITEM_SOUND);
    GAME->music->voice_win = sfMusic_createFromFile(WIN_VOICE_SOUND);
    GAME->music->speech_start = sfMusic_createFromFile(SPEECH_START_SOUND);
    GAME->music->music_in_game = sfMusic_createFromFile(MUSIC_IN_GAME);
    GAME->music->thunder = sfMusic_createFromFile(THUNDER_SOUND);
    GAME->music->ail = sfMusic_createFromFile(KENETT_WINGS_SOUND);
    GAME->music->kenett_1 = sfMusic_createFromFile(KENETT_START_1);
    GAME->music->kenett_2 = sfMusic_createFromFile(KENETT_START_2);
    GAME->music->kenett_3 = sfMusic_createFromFile(KENETT_START_3_FT);
    GAME->music->kenett_4 = sfMusic_createFromFile(KENETT_START_RESPI);
    GAME->music->kenett_5 = sfMusic_createFromFile(KENETT_START_FIRE);
}
