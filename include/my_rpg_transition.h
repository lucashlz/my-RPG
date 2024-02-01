/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_rpg_transition
*/

#ifndef MY_RPG_TRANSITION_H_
    #define MY_RPG_TRANSITION_H_
    #define TEL_X 1170
    #define TEL_Y 2534

typedef struct st_transition {
    sfRectangleShape *rect;
    sfColor color;
    sfClock *clock;
} transition_t;

#endif /* !MY_RPG_TRANSITION_H_ */
