/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_menus_struct
*/

#include "my_rpg.h"
#include <stdlib.h>

menu_t set_wlcm_menu_struct(void)
{
    menu_t wlcm;

    wlcm.nb_buttons = 3;
    wlcm.buttons = set_welcome_btns(wlcm.nb_buttons);
    wlcm.name = "welcome";
    wlcm.is_active = sfTrue;
    wlcm.name_pos = (sfVector2f){1270, 5};
    wlcm.name_resize = (sfVector2f){1, 1};
    wlcm.name_rect = (sfIntRect){0, 0, 640, 330};
    wlcm.name_sprite = sfSprite_create();
    wlcm.menu_sprite = sfSprite_create();
    wlcm.menu_text_path = WLCM_MENU_PATH;
    wlcm.menu_text = sfTexture_createFromFile(WLCM_MENU_PATH, NULL);
    wlcm.name_text = sfTexture_createFromFile(WLCM_NAME_PATH, NULL);
    wlcm.music = sfMusic_createFromFile(MENU_MUSIC);
    wlcm.have_a_back_text = sfFalse;
    return (wlcm);
}

menu_t set_settings_menu_struct(void)
{
    menu_t setts;

    setts.nb_buttons = 4;
    setts.buttons = set_settings_btns(setts.nb_buttons);
    setts.name = "settings";
    setts.is_active = sfFalse;
    setts.name_pos = (sfVector2f){730, 150};
    setts.menu_pos = (sfVector2f){330, 5};
    setts.name_resize = (sfVector2f){1, 1};
    setts.name_rect = (sfIntRect){0, 0, 0, 0};
    setts.name_sprite = sfSprite_create();
    setts.menu_sprite = sfSprite_create();
    setts.menu_text = sfTexture_createFromFile(BIG_SIGN_MENU_PATH, NULL);
    setts.name_text = sfTexture_createFromFile(SETTINGS_NAME_PATH, NULL);
    setts.music = NULL;
    setts.have_a_back_text = sfTrue;
    sfSprite_setPosition(setts.menu_sprite, setts.menu_pos);
    return (setts);
}

menu_t set_pause_menu_struct(void)
{
    menu_t pause;

    pause.nb_buttons = 4;
    pause.buttons = set_pause_btns(pause.nb_buttons);
    pause.name = "pause";
    pause.is_active = sfFalse;
    pause.name_pos = (sfVector2f){820, 150};
    pause.menu_pos = (sfVector2f){330, 5};
    pause.name_resize = (sfVector2f){0.5, 0.5};
    pause.name_rect = (sfIntRect){0, 0, 0, 0};
    pause.name_sprite = sfSprite_create();
    pause.menu_sprite = sfSprite_create();
    pause.menu_text = sfTexture_createFromFile(BIG_SIGN_MENU_PATH, NULL);
    pause.name_text = sfTexture_createFromFile(PAUSE_NAME_PATH, NULL);
    pause.music = NULL;
    pause.have_a_back_text = sfTrue;
    return (pause);
}

menu_t set_died_menu_struct(void)
{
    menu_t died;

    died.nb_buttons = 3;
    died.buttons = set_died_btns(died.nb_buttons);
    died.name = "died";
    died.is_active = sfFalse;
    died.name_pos = (sfVector2f){780, 150};
    died.menu_pos = (sfVector2f){820, 150};
    died.name_resize = (sfVector2f){1, 1};
    died.name_rect = (sfIntRect){0, 0, 0, 0};
    died.name_sprite = sfSprite_create();
    died.menu_sprite = sfSprite_create();
    died.menu_text = sfTexture_createFromFile(DIED_MENU_PATH, NULL);
    died.name_text = sfTexture_createFromFile(DIED_NAME_PATH, NULL);
    died.music = NULL;
    died.have_a_back_text = sfTrue;
    return (died);
}
