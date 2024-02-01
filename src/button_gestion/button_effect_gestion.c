/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** buttons_effect_gestion
*/

#include "my_rpg.h"

void my_play(rpg_t *rpg, menu_t *menu)
{
    BASE->is_in_game = sfTrue;
    menu->is_active = sfFalse;
}

void my_back(rpg_t *rpg, menu_t *menu)
{
    (void)rpg;
    menu->is_active = sfFalse;
}

void my_resume(rpg_t *rpg, menu_t *menu)
{
    (void)rpg;
    menu->is_active = sfFalse;
}

void my_quit(rpg_t *rpg)
{
    sfRenderWindow_close(BASE->window);
}

void my_volume(rpg_t *rpg, menu_t *menu)
{
    if (BASE->music_is_on == sfTrue) {
        menu->buttons[2].text =
        sfTexture_createFromFile(MUSIC_OFF_PATH, NULL);
        menu->buttons[2].tr_text =
        sfTexture_createFromFile(TR_MUSIC_OFF_PATH, NULL);
        BASE->music_is_on = sfFalse;
    } else {
        menu->buttons[2].text =
        sfTexture_createFromFile(MUSIC_BTN_PATH, NULL);
        menu->buttons[2].tr_text =
        sfTexture_createFromFile(TR_MUSIC_BTN_PATH, NULL);
        BASE->music_is_on = sfTrue;
        if (menu->music != NULL && GAME_VAR->curr_music != NULL)
            play_music(rpg, menu->music);
        else
            play_music(rpg, GAME_VAR->curr_music);
    }
}
