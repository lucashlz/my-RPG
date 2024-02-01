/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** talk_girl_kenett
*/

#include "my_rpg.h"

static void write_text_bako_girl(rpg_t *rpg, int which, int x, int y)
{
    sfText *text_girl = sfText_create();
    sfFont *font = sfFont_createFromFile(SUBTITLE);
    sfText_setString(text_girl, "C'EST ELLE ! IL FAUT QUE J'Y ARRIVE !");
    sfText_setFont(text_girl, font);
    sfText_setCharacterSize(text_girl, 10);

    sfText_setPosition(text_girl, (sfVector2f)
    {(GAME_VAR->p_pos.x - 90) + x, (GAME_VAR->p_pos.y - 240) + y});
    sfRenderWindow_drawText(BASE->window, text_girl, NULL);
}

static void display_girl_kenett(rpg_t *rpg)
{
    TALK->kenett->valid_discuss == 0 && DISCUSS > 0 ? DISCUSS = 0,
    TALK->kenett->valid_discuss = 1 : 0;

    DISCUSS == 0 ? discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_3, 378, 256), write_text_bako_girl(rpg, 2, 10, 40) : 0;
    DISCUSS == 0 ? key_enter_skip(rpg, 476, 147) : 0;

    DISCUSS == 1 ? STEPS_TALK += 1, DISCUSS = 0,
    TALK->kenett->key_pressed = 0, TALK->kenett->valid_discuss = 0 : 0;
}

void find_the_girl(rpg_t *rpg)
{
    if (TALK_GIRL) {
        display_bubble(rpg,
        (sfVector2f){GAME_VAR->p_pos.x - 40, GAME_VAR->p_pos.y - 85}, 1);
        display_key(rpg,
        (sfVector2f){GAME_VAR->p_pos.x - 36, GAME_VAR->p_pos.y - 75});
        if (TALK->kenett->key_pressed == 1)
            display_girl_kenett(rpg);
        return;
    }
}
