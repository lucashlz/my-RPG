/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** which_discuss
*/

#include "my_rpg.h"

void my_clock_key(rpg_t *rpg, int keyy)
{
    GAME->key[keyy]->time = sfClock_getElapsedTime
    (GAME->key[keyy]->clock);
    GAME->key[keyy]->sec = GAME->key[keyy]->time.microseconds / 1000000.0;
}

void color_bar_discuss(rpg_t *rpg, int bar)
{
    if (GAME->d[bar].opacity >= 255)
        return;
    sfColor test = sfColor_fromRGBA(255, 255, 255, GAME->d[bar].opacity);
    sfSprite_setColor(GAME->d[bar].sprite, test);
    GAME->d[bar].opacity += 7;
}

void discuss_bar(rpg_t *rpg, int box, int x, int y)
{
    my_clock_discuss(rpg, box);
    if (GAME->d[box].sec > 0.05) {
        sfSprite_setScale(GAME->d[box].sprite, GAME->d[box].scale);
        sfSprite_setPosition(GAME->d[box].sprite,
        (sfVector2f){(GAME_VAR->p_pos.x - x), (GAME_VAR->p_pos.y - y)});
        sfSprite_setTextureRect(GAME->d[box].sprite, GAME->d[box].rect);
        color_bar_discuss(rpg, 0);
        sfRenderWindow_drawSprite(BASE->window, GAME->d[box].sprite, NULL);
    }
}

void portrait(rpg_t *rpg, int box, int portrait, int x, int y)
{
    if (GAME->d[box].opacity >= OPACITY_BAR) {
        display_portrait(rpg, portrait, (sfVector2f){(GAME_VAR->p_pos.x + x),
        (GAME_VAR->p_pos.y - y)});
    }
}

void key_enter_skip(rpg_t *rpg, int key_x, int key_y)
{
    display_key_enter(rpg, (sfVector2f){GAME_VAR->p_pos.x + key_x,
    GAME_VAR->p_pos.y - key_y});
}
