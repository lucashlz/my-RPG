/*
** EPITECH PROJECT, 2022
** stock
** File description:
** welcom_discuss
*/

#include "my_rpg.h"

void write_text_bako(rpg_t *rpg, int which, int x, int y)
{
    sfText_setPosition(GAME_TEXT->baco[which].txt, (sfVector2f)
    {(GAME_VAR->p_pos.x - 90) + x, (GAME_VAR->p_pos.y - 240) + y});
    sfRenderWindow_drawText(BASE->window, GAME_TEXT->baco[which].txt, NULL);
}

void welcom_discuss(rpg_t *rpg)
{
    TALK->kenett->valid_discuss == 0 && DISCUSS > 0 ? DISCUSS = 0,
    TALK->kenett->valid_discuss = 1 : 0;

    DISCUSS == 0 ? discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_1, 378, 256), key_enter_skip(rpg, 476, 147) : 0;
    DISCUSS == 0 ? write_text_bako(rpg, 0, 0, 0) : 0;

    DISCUSS == 1 ? discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_2, 378, 256), key_enter_skip(rpg, 476, 147) : 0;
    DISCUSS == 1 ? write_text_bako(rpg, 1, 0, 0) : 0;

    DISCUSS == 2 ? GAME_VAR->steps_game_talk += 1, DISCUSS = 0,
    TALK->kenett->valid_discuss = 0 : 0;
}
