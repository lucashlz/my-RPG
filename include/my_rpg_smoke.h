/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_rpg_smoke
*/

#ifndef MY_RPG_SMOKE_H_
    #define MY_RPG_SMOKE_H_
    #define SMOKE "assets/ALL_WORLD/48x48/Animated_Tiles/smoke.png"

typedef struct st_smoke {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float sec;
} smoke_t;

#endif /* !MY_RPG_SMOKE_H_ */
