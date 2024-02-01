/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_quest
*/

#include <string.h>
#include "my_rpg.h"

static void display_text_quest(rpg_t *rpg)
{
    sfText_setPosition(GAME->q_text[0].txt,
    (sfVector2f){GAME_VAR->p_pos.x - 40, GAME_VAR->p_pos.y - 30});
    sfRenderWindow_drawText(BASE->window, GAME->q_text[0].txt, NULL);
    sfText_setPosition(GAME->q_text[GAME_VAR->txt].txt,
    (sfVector2f){GAME_VAR->p_pos.x - 200, GAME_VAR->p_pos.y - (- 5)});
    sfRenderWindow_drawText(BASE->window,
    GAME->q_text[GAME_VAR->txt].txt, NULL);
}

void display_quest(rpg_t *rpg)
{
    sfSprite_setPosition(GAME->quest[0].sprite,
    (sfVector2f){GAME_VAR->p_pos.x - 250, GAME_VAR->p_pos.y - 70});
    sfSprite_setScale(GAME->quest[0].sprite, GAME->quest[0].scale);
    sfSprite_setTextureRect(GAME->quest[0].sprite, GAME->quest[0].rect);
    sfRenderWindow_drawSprite(BASE->window, GAME->quest[0].sprite, NULL);
    sfSprite_setPosition(GAME->quest[1].sprite,
    (sfVector2f){GAME_VAR->p_pos.x - 120, GAME_VAR->p_pos.y - 220});
    sfSprite_setScale(GAME->quest[1].sprite, GAME->quest[1].scale);
    sfSprite_setTextureRect(GAME->quest[1].sprite, GAME->quest[1].rect);
    sfRenderWindow_drawSprite(BASE->window, GAME->quest[1].sprite, NULL);
    display_text_quest(rpg);
}
