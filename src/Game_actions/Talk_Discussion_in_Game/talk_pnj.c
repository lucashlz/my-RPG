/*
** EPITECH PROJECT, 2022
** talk_pnj.c
** File description:
** talk with pnj in game
*/

#include "my_rpg.h"

void dialogue_kenett(rpg_t *rpg)
{
    kenett_discuss(rpg);
}

void dialogue_hotaru(rpg_t *rpg)
{
    hotaru_discuss(rpg);
}

void display_talk(rpg_t *rpg)
{
    STEPS_TALK == 0 ? talk_welcome(rpg) : 0;
    STEPS_TALK == 1 ? talk_kenett(rpg) : 0;
    STEPS_TALK == 3 ? find_the_girl(rpg) : 0;
    STEPS_TALK == 4 ? talk_girl_help(rpg) : 0;
    STEPS_TALK == 5 ? dark_trans_special_text_teleportation(rpg) : 0;
    STEPS_TALK == 6 ? TALK->kenett->valid_transition = 0, STEPS_TALK ++ : 0;
    STEPS_TALK == 7 ? talk_kenett(rpg) : 0;
    STEPS_TALK == 8 ? talk_hotaru(rpg) : 0;
    STEPS_TALK == 9 ? talk_kenett(rpg) : 0;
    STEPS_TALK == 10 ? dark_trans_special_text(rpg, 0) : 0;
    STEPS_TALK == 11 ? TALK->kenett->valid_transition = 0, STEPS_TALK ++ : 0;
    STEPS_TALK == 12 ? talk_hotaru_new_sword(rpg) : 0;
}
