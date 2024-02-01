/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_bars
*/

#include "my_rpg.h"

static bars_t set_life_bar(void)
{
    bars_t life;

    life.back_bar_sprite = sfSprite_create();
    life.bar_sprite = sfSprite_create();
    life.back_bar_texture = sfTexture_createFromFile(BACK_BAR, sfFalse);
    life.bar_texture = sfTexture_createFromFile(LIFE_BAR, sfFalse);
    life.bar_pos = (sfVector2f){1650, 30};
    life.bar_rect = (sfIntRect){0, 0, 169, 19};
    sfSprite_setTexture(life.bar_sprite, life.bar_texture, sfFalse);
    sfSprite_setTexture(life.back_bar_sprite, life.back_bar_texture, sfFalse);
    return (life);
}

void set_bars(rpg_t *rpg)
{
    GAME->bars[0] = set_life_bar();
}