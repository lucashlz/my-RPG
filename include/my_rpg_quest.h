/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_rpg_quest
*/

#ifndef MY_RPG_QUEST_H_
    #define MY_RPG_QUEST_H_

typedef struct st_text_quest {
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
} quest_text_t;

typedef struct st_quest  {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float sec;
} quest_t;

#endif
