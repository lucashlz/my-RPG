/*
** EPITECH PROJECT, 2022
** display_gestion.c
** File description:
** display_gestion
*/

#include "my_rpg.h"

static void display_inv_window(rpg_t *rpg)
{
    sfSprite_setTexture(GAME->inv->sprite, GAME->inv->texture, sfTrue);
    sfSprite_setPosition(GAME->inv->sprite,
    (sfVector2f){(GAME_VAR->p_pos.x - 200), (GAME_VAR->p_pos.y - 150)});
    sfSprite_setScale(GAME->inv->sprite, GAME->inv->scale);
    sfRenderWindow_drawSprite(rpg->base->window, GAME->inv->sprite, NULL);
}

static void display_bako_mini(rpg_t *rpg)
{
    sfSprite_setPosition(GAME->p[bako_place_bottom].sprite,
    (sfVector2f){(GAME_VAR->p_pos.x - 100), (GAME_VAR->p_pos.y - 75)});
    sfSprite_setScale(GAME->p[bako_place_bottom].sprite,
    (sfVector2f){1.5, 1.5});
    sfRenderWindow_drawSprite(BASE->window,
    GAME->p[bako_place_bottom].sprite, NULL);
}

static void display_life(rpg_t *rpg)
{
    sfSprite_setTexture(GAME->inv->life_bg->sprite,
    GAME->inv->life_bg->texture, sfTrue);
    sfSprite_setPosition(GAME->inv->life_bg->sprite,
    (sfVector2f){(GAME_VAR->p_pos.x + 65), (GAME_VAR->p_pos.y - 77)});
    sfSprite_setScale(GAME->inv->life_bg->sprite, (sfVector2f){0.38, 0.3});
    sfRenderWindow_drawSprite(BASE->window, GAME->inv->life_bg->sprite, NULL);
    sfSprite_setTexture(GAME->inv->life->sprite,
    GAME->inv->life->texture, sfTrue);
    sfSprite_setPosition(GAME->inv->life->sprite,
    (sfVector2f){(GAME_VAR->p_pos.x + 68), (GAME_VAR->p_pos.y - 75)});
    sfSprite_setScale(GAME->inv->life->sprite, (sfVector2f){0.35, 0.35});
    sfRenderWindow_drawSprite(BASE->window, GAME->inv->life->sprite, NULL);
}

void display_item(rpg_t *rpg)
{
    int j = 0;
    int x = (GAME_VAR->p_pos.x - 225);
    int y = (GAME_VAR->p_pos.y + 55);
    sfVector2f pos_inv = (sfVector2f){x, y};
    float beg_x = (GAME_VAR->p_pos.x - 225.2);

    for (int i = 0; i < 27; i++) {
        if (INV->items[i].used == 1) {
            j == 9 || j == 18 ? pos_inv.x = beg_x, pos_inv.y += 43.2 : 0;
            (j != 9 || j != 18 || j != 0) ? pos_inv.x += 43.2 : 0;
            j++;
            sfSprite_setPosition(INV->items[i].sprite, pos_inv);
            sfSprite_setScale(INV->items[i].sprite, INV->items[i].scale);
            sfRenderWindow_drawSprite(BASE->window,
            INV->items[i].sprite, NULL);
        }
    }
}

void display_inventory(rpg_t *rpg)
{
    if (rpg->game->inv->open == 1) {
        display_inv_window(rpg);
        display_bako_mini(rpg);
        display_life(rpg);
        sfText_setPosition(GAME->inv->txt_life->txt,
        (sfVector2f){(GAME_VAR->p_pos.x + 68), (GAME_VAR->p_pos.y - 92)});
        sfRenderWindow_drawText(BASE->window, GAME->inv->txt_life->txt, NULL);
        display_item(rpg);
    }
}