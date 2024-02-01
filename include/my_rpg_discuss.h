/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_rpg_discuss
*/

#ifndef MY_RPG_DISCUSS_H_
    #define MY_RPG_DISCUSS_H_

void set_discuss(rpg_t *);
void set_characters_portraits(rpg_t *);
void display_portrait(rpg_t *rpg, int perso, sfVector2f pos);
void color(rpg_t *, int);
void my_clock_discuss(rpg_t *, int);

void talk_welcome(rpg_t *rpg);
void welcom_discuss(rpg_t *rpg);
void color_bar_discuss(rpg_t *rpg, int bar);
void discuss_bar(rpg_t *rpg, int box, int x, int y);
void portrait(rpg_t *rpg, int box, int portrait, int x, int y);
void key_enter_skip(rpg_t *rpg, int key_x, int key_y);

void kenett_discuss(rpg_t *rpg);

void hotaru_discuss(rpg_t *rpg);

#endif
