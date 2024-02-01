/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_bars
*/

#include "my_rpg.h"

void display_bar_life(rpg_t *rpg)
{
    GAME_VAR->bako_life >= 100 ? GAME_VAR->bako_life = 100 : 0;
    sfSprite_setPosition(GAME->bars[0].back_bar_sprite, ((sfVector2f)
    {GAME_VAR->p_pos.x - 100, GAME_VAR->p_pos.y + 270}));
    sfSprite_setPosition(GAME->bars[0].bar_sprite, ((sfVector2f)
    {GAME_VAR->p_pos.x - 98, GAME_VAR->p_pos.y + 269}));
    GAME->bars[0].bar_rect.width = ((GAME_VAR->bako_life * 1.65));
    sfSprite_setTextureRect(GAME->bars[0].bar_sprite, GAME->bars[0].bar_rect);
    sfRenderWindow_drawSprite(BASE->window,
    GAME->bars[0].back_bar_sprite, sfFalse);
    sfRenderWindow_drawSprite(BASE->window, GAME->bars[0].bar_sprite, sfFalse);
}

void display_bars(rpg_t *rpg)
{
    display_bar_life(rpg);
}