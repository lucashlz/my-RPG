/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_buttons_struct
*/

#include "my_rpg.h"
#include <stdlib.h>

void button_redirection2(button_t *button)
{
    if (button->type == b_volume) {
        button->text = sfTexture_createFromFile(MUSIC_BTN_PATH, NULL);
        button->tr_text = sfTexture_createFromFile(TR_MUSIC_BTN_PATH, NULL);
    }
    if (button->type == b_restart) {
        button->text = sfTexture_createFromFile(RESTART_PATH, NULL);
        button->tr_text = sfTexture_createFromFile(TR_RESTART_PATH, NULL);
    }
    if (button->type == b_settings) {
        button->text = sfTexture_createFromFile(SETTINGS_PATH, NULL);
        button->tr_text = sfTexture_createFromFile(TR_SETTINGS_PATH, NULL);
    }
    if (button->type == b_sound) {
        button->text = sfTexture_createFromFile(SOUND_BTN_PATH, NULL);
        button->tr_text = sfTexture_createFromFile(TR_SOUND_BTN_PATH, NULL);
    }
}

void button_redirection(button_t *button)
{
    if (button->type == b_play || button->type == b_back ||
    button->type == b_resume) {
        button->text = sfTexture_createFromFile(PLAY_PATH, NULL);
        button->tr_text = sfTexture_createFromFile(TR_PLAY_PATH, NULL);
    }
    if (button->type == b_quit) {
        button->text = sfTexture_createFromFile(CLOSE_PATH, NULL);
        button->tr_text = sfTexture_createFromFile(TR_CLOSE_PATH, NULL);
        }
    if (button->type == b_map) {
        button->text = sfTexture_createFromFile(MAP_BTN, NULL);
        button->tr_text = sfTexture_createFromFile(TR_MAP_BTN, NULL);
        }
    button_redirection2(button);
}

static void general_buttons_setup(button_t *button)
{
    button->sound = sfSound_create();
    button->sound_buffer = sfSoundBuffer_createFromFile(PRESSED_SOUND_PATH);
    sfSound_setBuffer(button->sound, button->sound_buffer);
    button->rect = (sfIntRect){0, 0, 214, 215};
    button_redirection(button);
    button->resize = (sfVector2f){1, 1};
    button->sprite = sfSprite_create();
    button->tr_sprite = sfSprite_create();
    button->actual_sprite = button->sprite;
    button->actual_text = button->text;
    set_button_text_pos(button, sfTrue);
}

button_t set_this_button(int button_type, sfVector2f pos)
{
    button_t button;

    button.pos = pos;
    button.type = button_type;
    general_buttons_setup(&button);
    return (button);
}
