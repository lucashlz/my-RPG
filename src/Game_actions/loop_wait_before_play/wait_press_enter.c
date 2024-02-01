/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** wait_press_enter
*/

#include "my_rpg.h"

void display_anime_background(rpg_t *rpg);

void display_bako_wait(rpg_t *rpg);

void display_logo_wait(rpg_t *rpg);

static void my_clock_text(rpg_t *rpg, int which)
{
    TEXT_WAIT[which].time = sfClock_getElapsedTime
    (TEXT_WAIT[which].clock);
    TEXT_WAIT[which].sec =
    TEXT_WAIT[which].time.microseconds / 1000000.0;
}

static void opacity(rpg_t *rpg)
{
    sfColor test = sfColor_fromRGBA(255, 255, 255, TEXT_WAIT[0].opacity);

    sfText_setColor(TEXT_WAIT[0].txt, test);
    my_clock_text(rpg, 0);
    if (TEXT_WAIT[0].valid == 0 && TEXT_WAIT[0].sec > 0.009) {
        if (TEXT_WAIT[0].opacity >= 255)
            TEXT_WAIT[0].valid = 1;
        else
            TEXT_WAIT[0].opacity += 5;
    } else if (TEXT_WAIT[0].valid == 1 && TEXT_WAIT[0].sec > 0.009) {
        if (TEXT_WAIT[0].opacity <= 0)
            TEXT_WAIT[0].valid = 0;
        else
            TEXT_WAIT[0].opacity -= 5;
        sfClock_restart(TEXT_WAIT[0].clock);
    }
    sfRenderWindow_drawText(BASE->window, TEXT_WAIT[0].txt, NULL);
}

static void loop_display_wait(rpg_t *rpg)
{
    sfRenderWindow_clear(BASE->window, sfBlack);
    display_anime_background(rpg);
    display_bako_wait(rpg);
    display_logo_wait(rpg);
    opacity(rpg);
}

static int check(rpg_t *rpg)
{
    if (GAME_VAR->events.type == sfEvtKeyPressed)
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            return 1;
        }
    if (GAME_VAR->events.type == sfEvtClosed)
        sfRenderWindow_close(BASE->window);
    return 0;
}

void wait_to_press_enter(rpg_t *rpg)
{
    int check_exit = 0;

    play_music(rpg, rpg->game->music->music_in_game);
    while (sfRenderWindow_isOpen(BASE->window)) {
        if (check_exit == 1)
            return;
        loop_display_wait(rpg);
        while (sfRenderWindow_pollEvent(BASE->window, &GAME_VAR->events))
            check(rpg) == 1 ? stop_music(rpg->game->music->music_in_game),
            check_exit = 1 : 0;
        sfRenderWindow_display(BASE->window);
    }
}
