/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_rpg_set_text_game
*/

#ifndef MY_RPG_SET_TEXT_GAME_H_
    #define MY_RPG_SET_TEXT_GAME_H_

typedef struct st_baco_text {
    sfText *txt;
    sfFont *Font;
    sfVector2f pos;
    sfVector2f scale;
    sfClock *clock;
    sfTime time;
    int max_sec;
    float sec;
    float opacity;
    int valid;
} baco_text_t;

typedef struct st_kenett_text {
    sfText *txt;
    sfFont *Font;
    sfVector2f pos;
    sfVector2f scale;
    sfClock *clock;
    sfTime time;
    int max_sec;
    float sec;
    float opacity;
    int valid;
} kenett_text_t;

typedef struct st_hotaru_text {
    sfText *txt;
    sfFont *Font;
    sfVector2f pos;
    sfVector2f scale;
    sfClock *clock;
    sfTime time;
    int max_sec;
    float sec;
    float opacity;
    int valid;
} hotaru_text_t;

typedef struct my_rpg_set_text_game {
    baco_text_t baco[9];
    kenett_text_t kenett[5];
    hotaru_text_t hotaru[4];
} set_text_game_t;

typedef struct st_text_wait {
    sfText *txt;
    sfFont *Font;
    sfVector2f pos;
    sfVector2f scale;
    sfClock *clock;
    sfTime time;
    int max_sec;
    float sec;
    float opacity;
    int valid;
} text_wait_t;

#endif /* !MY_RPG_SET_TEXT_GAME_H_ */
