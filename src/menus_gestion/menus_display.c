/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** menus_display
*/

#include "my_rpg.h"

static void in_game_buttons_pos(rpg_t *rpg, menu_t menu)
{
    menu.nb_buttons > 0 ? sfSprite_setPosition(menu.buttons[0].actual_sprite,
    (sfVector2f){PAUSE_SIGN_X + 150, PAUSE_SIGN_Y + 180}) : 0;
    menu.nb_buttons > 1 ? sfSprite_setPosition(menu.buttons[2].actual_sprite,
    (sfVector2f){PAUSE_SIGN_X + 275, PAUSE_SIGN_Y + 180}) : 0;
    menu.nb_buttons > 2 ? sfSprite_setPosition(menu.buttons[1].actual_sprite,
    (sfVector2f){PAUSE_SIGN_X + 400, PAUSE_SIGN_Y + 180}) : 0;
    menu.nb_buttons > 3 ? sfSprite_setPosition(menu.buttons[3].actual_sprite,
    (sfVector2f){PAUSE_SIGN_X + 275, PAUSE_SIGN_Y + 300}) : 0;
}

void in_game_menu_btns(rpg_t *rpg, menu_t menu)
{
    display_map(rpg);
    display_png(rpg);
    sfRenderWindow_drawSprite(BASE->window, GAME->day_night->night_sprite,
    sfFalse);
    sfRenderWindow_drawSprite(BASE->window,
    GAME->day_night->rev_night_sprite, sfFalse);
    sfSprite_setScale(menu.menu_sprite, (sfVector2f){0.5, 0.5});
    sfSprite_setScale(menu.name_sprite, (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(menu.menu_sprite, (sfVector2f)
    {PAUSE_SIGN_X, PAUSE_SIGN_Y});
    sfSprite_setPosition(menu.name_sprite, (sfVector2f)
    {PAUSE_SIGN_X + 200, PAUSE_SIGN_Y + 50});
    if (my_strcmp(menu.name, "pause") == 0)
        sfSprite_setPosition(menu.name_sprite, (sfVector2f)
        {PAUSE_SIGN_X + 250, PAUSE_SIGN_Y + 50});
    in_game_buttons_pos(rpg, menu);
}

void display_menu(rpg_t *rpg, menu_t menu)
{
    sfRenderWindow_clear(BASE->window, sfBlack);
    if (menu.have_a_back_text)
        sfRenderWindow_drawSprite(BASE->window, menu.back_sprite, NULL);
    BASE->is_in_game ? in_game_menu_btns(rpg, menu) : 0;
    sfRenderWindow_drawSprite(BASE->window, menu.menu_sprite, NULL);
    sfRenderWindow_drawSprite(BASE->window, menu.name_sprite, NULL);
    for (int i = 0; i < menu.nb_buttons; i++) {
        set_button_text_pos(&menu.buttons[i], BASE->is_in_game);
        sfRenderWindow_drawSprite(BASE->window,
        menu.buttons[i].actual_sprite, NULL);
    }
    sfRenderWindow_display(BASE->window);
}
