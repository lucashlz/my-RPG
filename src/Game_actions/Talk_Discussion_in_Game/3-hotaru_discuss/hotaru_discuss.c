/*
** EPITECH PROJECT, 2022
** rpg_2
** File description:
** hotaru_duscuss
*/

#include "my_rpg.h"

void write_text_hotaru(rpg_t *rpg, int which, int x, int y)
{
    sfText_setPosition(GAME_TEXT->hotaru[which].txt, (sfVector2f)
    {(GAME_VAR->p_pos.x - 400) + x, (GAME_VAR->p_pos.y + 150) + y});
    sfRenderWindow_drawText(BASE->window, GAME_TEXT->hotaru[which].txt, NULL);
}

static void hotaru_discuss_continue(rpg_t *rpg)
{
    DISCUSS == 4 ? key_enter_skip(rpg, 476, 147) : 0;
    DISCUSS == 5 ? discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_4, 378, 256), write_text_bako(rpg, 7, 0, 15) : 0;
    DISCUSS == 5 ? key_enter_skip(rpg, 476, 147) : 0;
    DISCUSS == 6 ? STEPS_TALK += 1, DISCUSS = 0,
    TALK->hotaru->key_pressed = 0, TALK->kenett->valid_discuss = 0,
    GAME_VAR->txt++ : 0;
}

void hotaru_discuss(rpg_t *rpg)
{
    TALK->kenett->valid_discuss == 0 && DISCUSS > 0 ? DISCUSS = 0,
    TALK->kenett->valid_discuss = 1 : 0;
    DISCUSS == 0 || DISCUSS == 1 ? discuss_bar(rpg, port_2, 507, -100),
    portrait(rpg, 0, 8, -490, -130), write_text_hotaru(rpg, 0, 40, 30) : 0;
    DISCUSS == 0 ? key_enter_skip(rpg, 90, -240) : 0;
    DISCUSS == 1 || DISCUSS == 2 || DISCUSS == 3 ?
    discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_4, 378, 256), write_text_bako(rpg, 5, 0, 15) : 0;
    DISCUSS == 1 ? key_enter_skip(rpg, 476, 147) : 0;
    DISCUSS == 2 ? discuss_bar(rpg, port_2, 507, -100),
    portrait(rpg, 0, 10, -490, -130), write_text_hotaru(rpg, 1, 30, 0) : 0;
    DISCUSS == 2 ? key_enter_skip(rpg, 90, -240) : 0;
    DISCUSS == 3 || DISCUSS == 4 ? discuss_bar(rpg, port_2, 507, -100),
    portrait(rpg, 0, 12, -490, -130), write_text_hotaru(rpg, 2, 30, 10) : 0;
    DISCUSS == 3 ? key_enter_skip(rpg, 90, -240) : 0;
    DISCUSS == 4 ? discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_2, 378, 256), write_text_bako(rpg, 6, 0, 15) : 0;
    hotaru_discuss_continue(rpg);
}

void dialogue_hotaru_next(rpg_t *rpg)
{
    TALK->kenett->valid_discuss == 0 && DISCUSS > 0 ? DISCUSS = 0,
    TALK->kenett->valid_discuss = 1 : 0;

    DISCUSS == 0 ? discuss_bar(rpg, port_2, 507, -100),
    portrait(rpg, 0, 8, -490, -130), write_text_hotaru(rpg, 3, 40, 30) : 0;

    DISCUSS == 1 ? DISCUSS = 0,
    TALK->hotaru->key_pressed = 0, TALK->kenett->valid_discuss = 0,
    GAME_VAR->txt++ : 0;
}

void talk_hotaru_new_sword(rpg_t *rpg)
{
    if (TALK_GUNSMITH) {
        display_bubble(rpg, (sfVector2f){745, 805}, 1);
        display_key(rpg, (sfVector2f){750, 813});
    }
    if (TALK->hotaru->key_pressed == 1) {
        dialogue_hotaru_next(rpg);
        if (rpg->money >= 20) {
            INV->equiped[thunder_w].used = 1;
            GAME->curr_style->can_use_elec = sfTrue;
            STEPS_TALK += 1;
            return;
        } else {
            DISCUSS = 0;
        }
    }
}

void talk_hotaru(rpg_t *rpg)
{
    if (TALK_GUNSMITH) {
        display_bubble(rpg, (sfVector2f){745, 805}, 1);
        display_key(rpg, (sfVector2f){750, 813});
    }
    if (TALK->hotaru->key_pressed == 1) {
        dialogue_hotaru(rpg);
        INV->equiped[water_w].used = 1;
    }
}
