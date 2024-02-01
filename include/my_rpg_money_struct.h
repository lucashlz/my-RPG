/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_rpg_money_struct
*/

#ifndef MY_RPG_MONEY_STRUCT_H_
    #define MY_RPG_MONEY_STRUCT_H_

typedef struct st_money {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float sec;
} money_t;

#endif /* !MY_RPG_MONEY_STRUCT_H_ */
