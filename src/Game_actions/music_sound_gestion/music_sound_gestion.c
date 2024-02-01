/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** music_sounds_gestion
*/

#include "my_rpg.h"

void play_sound(rpg_t *rpg, sfSound *sound, sfSoundBuffer *sound_buff)
{
    if (BASE->sound_is_on == sfTrue && sound != NULL && sound_buff != NULL) {
        sfSound_setBuffer(sound, sound_buff);
        sfSound_play(sound);
    }
}

void stop_music(sfMusic *music)
{
    sfMusic_stop(music);
    return;
}

void play_music(rpg_t *rpg, sfMusic *music)
{
    if (music != NULL && BASE->music_is_on == sfTrue) {
        GAME_VAR->curr_music = music;
        sfMusic_setLoop(music, sfTrue);
        sfMusic_play(music);
        return;
    }
    if (music != NULL)
        sfMusic_stop(music);
}

void music_gestion(rpg_t *rpg)
{
    if (GAME_VAR->curr_music && BASE->music_is_on == sfFalse)
        sfMusic_pause(GAME_VAR->curr_music);
}
