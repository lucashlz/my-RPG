/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_money
*/

#include "my_rpg.h"
#include <stdlib.h>

static money_t set_money_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    money_t money;

    money.sprite = sfSprite_create();
    money.texture = sfTexture_createFromFile(path, NULL);
    money.clock = sfClock_create();
    money.rect = rect;
    money.pos = pos;
    money.scale = scale;
    sfSprite_setTexture(money.sprite, money.texture, sfTrue);
    sfSprite_setTextureRect(money.sprite, money.rect);
    sfSprite_setPosition(money.sprite, money.pos);
    return (money);
}

void set_money(rpg_t *rpg)
{
    rpg->glod = malloc(sizeof(game_t));
    rpg->money = 10;
    rpg->glod[0] = set_money_struct("assets/money.png", (sfVector2f)
    {(GAME_VAR->p_pos.x - 160), (GAME_VAR->p_pos.y + 255)},
    (sfIntRect){0, 0, 80, 80}, (sfVector2f){0.6, 0.6});
}
