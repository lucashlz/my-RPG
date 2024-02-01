/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** menus_gestion
*/

#include "my_rpg.h"

static void button_effect_gestion(rpg_t *rpg, menu_t *menu, button_t *button)
{
    if (menu->events.type == sfEvtMouseButtonPressed) {
        play_sound(rpg, button->sound, button->sound_buffer);
        button->type == b_play ? my_play(rpg, menu) : 0;
        button->type == b_resume ? my_resume(rpg, menu) : 0;
        button->type == b_back ? my_back(rpg, menu) : 0;
        button->type == b_quit ? my_quit(rpg) : 0;
        button->type == b_volume ? my_volume(rpg, menu) : 0;
        button->type == b_restart ? menu->is_active = sfFalse,
        MENU_BASE.should_respawn = sfTrue : 0;
        button->type == b_settings ? my_settings(rpg) : 0;
        button->type == b_sound ? my_sound(rpg, menu) : 0;
    }
}

menu_t menu_events(rpg_t *rpg, menu_t menu, sfVector2i coo)
{
    for (int i = 0; i < menu.nb_buttons && menu.is_active; i++) {
        if (coo.x >= menu.buttons[i].pos.x + menu.buttons[i].rect.left &&
            coo.x <= menu.buttons[i].pos.x + menu.buttons[i].rect.left +
            menu.buttons[i].rect.width && coo.y >= menu.buttons[i].pos.y +
            menu.buttons[i].rect.top && coo.y <= menu.buttons[i].pos.y +
            menu.buttons[i].rect.left + menu.buttons[i].rect.height) {
            menu.buttons[i].actual_sprite = menu.buttons[i].tr_sprite;
            menu.buttons[i].actual_text = menu.buttons[i].tr_text;
            display_menu(rpg, menu);
            coo = sfMouse_getPositionRenderWindow(BASE->window);
            button_effect_gestion(rpg, &menu, &menu.buttons[i]);
        } else {
            menu.buttons[i].actual_sprite = menu.buttons[i].sprite;
            menu.buttons[i].actual_text = menu.buttons[i].text;
        }
    }
    menu.events.type == sfEvtClosed ? sfRenderWindow_close(BASE->window) : 0;
    sfKeyboard_isKeyPressed(sfKeyEscape) && my_strcmp(menu.name, "welcome")
    != 0 ? menu.is_active = sfFalse : 0;
    return (menu);
}

static void stop_sound_start_kenett(rpg_t *rpg)
{
    sfColor test;

    DISCUSS = 0;
    GAME_KENT->kenett_start_anim = 2;
    test = sfColor_fromRGBA(255, 255, 255, 255);
    sfSprite_setColor(GAME->b[map].sprite, test);
    sfSprite_setColor(GAME->b[obstacles].sprite, test);
    stop_music(GAME->music->ail);
    stop_music(GAME->music->kenett_1);
    stop_music(GAME->music->kenett_2);
    stop_music(GAME->music->kenett_3);
    stop_music(GAME->music->kenett_4);
    stop_music(GAME->music->kenett_5);
    stop_music(GAME->music->music_in_game);
    stop_music(GAME->music->thunder);
}

void menu_gestion(rpg_t *rpg, menu_t menu)
{
    sfVector2i coo;

    menu.is_active = sfTrue;
    play_music(rpg, menu.music);
    while (menu.is_active && sfRenderWindow_isOpen(BASE->window) &&
    !MENU_BASE.should_respawn) {
        music_gestion(rpg);
        display_menu(rpg, menu);
        while (sfRenderWindow_pollEvent(BASE->window, &menu.events)) {
            coo = sfMouse_getPositionRenderWindow(BASE->window);
            menu = menu_events(rpg, menu, coo);
        }
    }
    menu.music ? sfMusic_stop(menu.music) : 0;
    MENU_BASE.should_respawn ? my_respawn(rpg) : 0;
    if (my_strcmp(menu.name, "welcome") == 0) {
        display_transition(rpg);
        wait_to_press_enter(rpg);
        display_transition_start_kenett(rpg);
        stop_sound_start_kenett(rpg);
        return;
    }
}
