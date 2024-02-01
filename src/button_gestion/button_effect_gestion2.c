/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** button_effect_gestion2
*/

#include "my_rpg.h"

void my_restart(rpg_t *rpg, menu_t *menu)
{
    menu->is_active = sfFalse;
    MENU_BASE.should_respawn = sfTrue;
}

void my_settings(rpg_t *rpg)
{
    my_specific_menus(rpg, rpg->menus[m_settings]);
}

void my_sound(rpg_t *rpg, menu_t *menu)
{
    if (BASE->sound_is_on == sfTrue) {
        menu->buttons[3].text =
        sfTexture_createFromFile(SOUND_OFF_PATH, NULL);
        menu->buttons[3].tr_text =
        sfTexture_createFromFile(TR_SOUND_OFF_PATH, NULL);
        BASE->sound_is_on = sfFalse;
    } else {
        menu->buttons[3].text =
        sfTexture_createFromFile(SOUND_BTN_PATH, NULL);
        menu->buttons[3].tr_text =
        sfTexture_createFromFile(TR_SOUND_BTN_PATH, NULL);
        BASE->sound_is_on = sfTrue;
    }
}
