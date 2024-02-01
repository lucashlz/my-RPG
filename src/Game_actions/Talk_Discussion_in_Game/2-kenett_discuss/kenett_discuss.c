/*
** EPITECH PROJECT, 2022
** rpg_2
** File description:
** kenett_discuss
*/

#include "my_rpg.h"

void write_text_kenett(rpg_t *rpg, int which, int x, int y)
{
    sfText_setPosition(GAME_TEXT->kenett[which].txt, (sfVector2f)
    {(GAME_VAR->p_pos.x - 400) + x, (GAME_VAR->p_pos.y + 150) + y});
    sfRenderWindow_drawText(BASE->window, GAME_TEXT->kenett[which].txt, NULL);
}

void kenett_discuss(rpg_t *rpg)
{
    TALK->kenett->valid_discuss == 0 && DISCUSS > 0 ? DISCUSS = 0,
    TALK->kenett->valid_discuss = 1 : 0;

    DISCUSS == 0 || DISCUSS == 1 ? discuss_bar(rpg, port_2, 507, -100),
    write_text_kenett(rpg, 0, 0, -10), display_kenett_talk
    (rpg, (sfVector2f){(GAME_VAR->p_pos.x - 500), (GAME_VAR->p_pos.y + 120)}) : 0;
    DISCUSS == 0 ? key_enter_skip(rpg, 90, -240) : 0;

    DISCUSS == 1 || DISCUSS == 2 ? discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_4, 378, 256), write_text_bako(rpg, 2, 10, 20) : 0;
    DISCUSS == 1 ? key_enter_skip(rpg, 476, 147) : 0;

    DISCUSS == 2 || DISCUSS == 3 ? discuss_bar(rpg, port_2, 507, -100),
    write_text_kenett(rpg, 1, 0, 10),display_kenett_talk
    (rpg, (sfVector2f){(GAME_VAR->p_pos.x - 500), (GAME_VAR->p_pos.y + 120)}) : 0;
    DISCUSS == 2 ? key_enter_skip(rpg, 90, -240) : 0;

    DISCUSS == 3 || DISCUSS == 4 ? discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_2, 378, 256), write_text_bako(rpg, 3, 0, -23) : 0;
    DISCUSS == 3 ? key_enter_skip(rpg, 476, 147) : 0;

    DISCUSS == 4 || DISCUSS == 5 ? discuss_bar(rpg, port_2, 507, -100),
    write_text_kenett(rpg, 2, 0, 3),display_kenett_talk
    (rpg, (sfVector2f){(GAME_VAR->p_pos.x - 500), (GAME_VAR->p_pos.y + 120)}) : 0;
    DISCUSS == 4 ? key_enter_skip(rpg, 90, -240) : 0;

    DISCUSS == 5 || DISCUSS == 6 ? discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_3, 378, 256), write_text_bako(rpg, 4, 0, 7) : 0;
    DISCUSS == 5 ? key_enter_skip(rpg, 476, 147) : 0;

    DISCUSS == 6 ? discuss_bar(rpg, port_2, 507, -100),
    write_text_kenett(rpg, 3, 0, -3), display_kenett_talk
    (rpg, (sfVector2f){(GAME_VAR->p_pos.x - 500), (GAME_VAR->p_pos.y + 120)}) : 0;
    DISCUSS == 6 ? key_enter_skip(rpg, 90, -240),
    GAME->capacity->invi->can_get_potion = sfTrue : 0;

    DISCUSS == 7 ? STEPS_TALK += 1, DISCUSS = 0,
    TALK->kenett->key_pressed = 0, TALK->kenett->valid_discuss = 0,
    GAME_VAR->txt++ : 0;
}

void next_dialogue_kenett(rpg_t *rpg)
{
    TALK->kenett->valid_discuss == 0 && DISCUSS > 0 ? DISCUSS = 0,
    TALK->kenett->valid_discuss = 1 : 0;

    DISCUSS == 0 || DISCUSS == 1 ? discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_2, 378, 256), write_text_bako(rpg, 8, 10, 10) : 0;
    DISCUSS == 0 ? key_enter_skip(rpg, 476, 147) : 0;

    DISCUSS == 1 ? discuss_bar(rpg, port_2, 507, -100), display_kenett_talk
    (rpg, (sfVector2f){(GAME_VAR->p_pos.x - 500), (GAME_VAR->p_pos.y + 120)}),
    write_text_kenett(rpg, 4, 0, -3) : 0;
    DISCUSS == 1 ? key_enter_skip(rpg, 90, -240) : 0;

    DISCUSS == 2 ? STEPS_TALK += 1, DISCUSS = 0,
    TALK->kenett->key_pressed = 0, TALK->kenett->valid_discuss = 0,
    GAME_VAR->txt++ : 0;
    GAME->curr_style->can_use_water = sfTrue;
}

void display_key(rpg_t *rpg, sfVector2f pos)
{
    sfSprite_setPosition(TALK->t_key->sprite, pos);
    sfSprite_setScale(TALK->t_key->sprite, TALK->t_key->scale);
    sfRenderWindow_drawSprite(BASE->window, TALK->t_key->sprite, NULL);
}

void talk_kenett(rpg_t *rpg)
{
    if (TALK_KENNET) {
        display_bubble(rpg, (sfVector2f){1133, 2344}, 1);
        display_key(rpg, (sfVector2f){1138, 2355});
    }
    if (TALK->kenett->key_pressed == 1) {
        STEPS_TALK == 1 ? dialogue_kenett(rpg) : 0;
        STEPS_TALK == 7 ? retrieve_girl_talk_kenett(rpg) : 0;
        STEPS_TALK == 9 ? next_dialogue_kenett(rpg) : 0;
    }
}
