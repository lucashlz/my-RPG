/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_menu_btns
*/

#include "my_rpg.h"
#include <stdlib.h>

button_t *set_settings_btns(int nb_btns)
{
    button_t *buttons = malloc(sizeof(button_t) * nb_btns);

    buttons[0] = set_this_button(b_back, (sfVector2f){600, 400});
    buttons[1] = set_this_button(b_quit, (sfVector2f){1100, 400});
    buttons[2] = set_this_button(b_volume, (sfVector2f){850, 400});
    buttons[3] = set_this_button(b_sound, (sfVector2f){850, 650});
    return (buttons);
}

button_t *set_pause_btns(int nb_btns)
{
    button_t *buttons = malloc(sizeof(button_t) * nb_btns);

    buttons[0] = set_this_button(b_resume, (sfVector2f){600, 400});
    buttons[1] = set_this_button(b_quit, (sfVector2f){1100, 400});
    buttons[2] = set_this_button(b_settings, (sfVector2f){850, 400});
    buttons[3] = set_this_button(b_map, (sfVector2f){850, 650});
    return (buttons);
}

button_t *set_welcome_btns(int nb_btns)
{
    button_t *buttons = malloc(sizeof(button_t) * nb_btns);

    buttons[0] = set_this_button(b_play, (sfVector2f){600, 400});
    buttons[1] = set_this_button(b_quit, (sfVector2f){1100, 400});
    buttons[2] = set_this_button(b_settings, (sfVector2f){850, 400});
    return (buttons);
}

button_t *set_died_btns(int nb_btns)
{
    button_t *buttons = malloc(sizeof(button_t) * nb_btns);

    buttons[0] = set_this_button(b_restart, (sfVector2f){600, 400});
    buttons[1] = set_this_button(b_quit, (sfVector2f){1100, 400});
    buttons[2] = set_this_button(b_settings, (sfVector2f){850, 400});
    return (buttons);
}
