/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** step_start_kenett
*/

#include "my_rpg.h"

int display_first_action(rpg_t *rpg)
{
    if (GAME_KENT->kenett_smoke == 0) {
        play_music(rpg, GAME->music->kenett_3);
        moove_smoke_kenett(rpg, 4);
        display_steps(rpg, 4, 1);
        GAME_KENT->kenett_display = 1;
        return 1;
    }
    if (GAME_KENT->kenett_display == 1) {
        advance_kenett(rpg);
        display_steps(rpg, 1, 1);
        return 1;
    }
    if (GAME_KENT->kenett_smoke == 1) {
        stop_music(GAME->music->kenett_3);
        moove_smoke_kenett(rpg, 4);
        display_steps(rpg, 4, 1);
        play_music(rpg, GAME->music->ail);
        play_music(rpg, GAME->music->kenett_1);
        return 1;
    }
    return 0;
}

int display_second_action(rpg_t *rpg)
{
    if (GAME_KENT->kenett_display == 2) {
        advance_kenett(rpg);
        display_steps(rpg, 2, 1);
        return 1;
    }
    if (GAME_KENT->kenett_smoke == 2) {
        play_music(rpg, GAME->music->kenett_3);
        moove_smoke_kenett(rpg, 4);
        display_steps(rpg, 4, 1);
        stop_music(GAME->music->ail);
        stop_music(GAME->music->kenett_1);
        return 1;
    }
    if (GAME_KENT->kenett_display == 3) {
        stop_music(GAME->music->kenett_3);
        advance_kenett(rpg);
        display_steps(rpg, 0, 1);
        return 1;
    }
    return 0;
}

int display_third_action(rpg_t *rpg)
{
    sfColor test;

    if (GAME_KENT->kenett_smoke == 3) {
        play_music(rpg, GAME->music->kenett_2);
        play_music(rpg, GAME->music->kenett_4);
        moove_smoke_kenett(rpg, 4);
        display_steps(rpg, 4, 1);
        return 1;
    }
    if (GAME_KENT->kenett_display == 4) {
        play_music(rpg, GAME->music->kenett_5);
        play_music(rpg, GAME->music->thunder);
        test = sfColor_fromRGBA(0, 255, 0, 255);
        sfSprite_setColor(GAME->b[map].sprite, test);
        sfSprite_setColor(GAME->b[obstacles].sprite, test);
        advance_kenett(rpg);
        display_steps(rpg, 3, 1);
        return 1;
    }
    return 0;
}

int display_fourth_action(rpg_t *rpg)
{
    sfColor test;

    if (GAME_KENT->kenett_display == 5) {
        stop_music(GAME->music->kenett_2);
        test = sfColor_fromRGBA(255, 0, 0, 255);
        sfSprite_setColor(GAME->b[map].sprite, test);
        sfSprite_setColor(GAME->b[obstacles].sprite, test);
        advance_kenett(rpg);
        display_steps(rpg, 0, 1);
        return 1;
    }
    return 0;
}
