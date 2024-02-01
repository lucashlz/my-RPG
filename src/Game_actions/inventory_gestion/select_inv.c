/*
** EPITECH PROJECT, 2022
** selection_inv.c
** File description:
** select item from inv
*/

#include "my_rpg.h"
#include <stdio.h>

static void select_item_from_inv_two(rpg_t *rpg, int *check, sfVector2i coo)
{
    INV_OPEN && LT_CASE_FI ? *check = 13 : 0;
    INV_OPEN && LT_CASE_SI ? *check = 14 : 0;
    INV_OPEN && LT_CASE_SEV ? *check = 15 : 0;
    INV_OPEN && LT_CASE_EIG ? *check = 16 : 0;
    INV_OPEN && LT_CASE_NI ? *check = 17 : 0;
    INV_OPEN && LH_CASE_ONE ? *check = 18 : 0;
    INV_OPEN && LH_CASE_TWO ? *check = 19 : 0;
    INV_OPEN && LH_CASE_THREE ? *check = 20 : 0;
    INV_OPEN && LH_CASE_FO ? *check = 21 : 0;
    INV_OPEN && LH_CASE_FI ? *check = 22 : 0;
    INV_OPEN && LH_CASE_SI ? *check = 23 : 0;
    INV_OPEN && LH_CASE_SEV ? *check = 24 : 0;
    INV_OPEN && LH_CASE_EIG ? *check = 25 : 0;
    INV_OPEN && LH_CASE_NI ? *check = 26 : 0;
}

static void select_item_from_inv_one(rpg_t *rpg, int *check, sfVector2i coo)
{
    INV_OPEN && LO_CASE_ONE ? *check = 0 : 0;
    INV_OPEN && LO_CASE_TWO ? *check = 1 : 0;
    INV_OPEN && LO_CASE_THREE ? *check = 2 : 0;
    INV_OPEN && LO_CASE_FO ? *check = 3 : 0;
    INV_OPEN && LO_CASE_FI ? *check = 4 : 0;
    INV_OPEN && LO_CASE_SI ? *check = 5 : 0;
    INV_OPEN && LO_CASE_SEV ? *check = 6 : 0;
    INV_OPEN && LO_CASE_EIG ? *check = 7 : 0;
    INV_OPEN && LO_CASE_NI ? *check = 8 : 0;
    INV_OPEN && LT_CASE_ONE ? *check = 9 : 0;
    INV_OPEN && LT_CASE_TWO ? *check = 10 : 0;
    INV_OPEN && LT_CASE_THREE ? *check = 11 : 0;
    INV_OPEN && LT_CASE_FO ? *check = 12 : 0;
}

void display_bubble1(rpg_t *rpg, sfVector2f pos, sfVector2f scale,
int key_enter)
{
    sfSprite_setPosition(GAME->key[key_enter]->sprite, pos);
    sfSprite_setScale(GAME->key[key_enter]->sprite, scale);
    sfRenderWindow_drawSprite(BASE->window,
    GAME->key[key_enter]->sprite, NULL);
}


void disp_eat_drink(rpg_t *rpg, sfVector2f coof, int choice)
{
    choice == 0 ? coof.y += 20, coof.x += 12 : 0;
    choice == 1 ? coof.y += 20, coof.x += 4 : 0;
    choice == 2 ? coof.y += 20, coof.x += 12 : 0;
    sfText_setPosition(INV->details_it[choice].txt, coof);
    sfRenderWindow_drawText(BASE->window, INV->details_it[choice].txt, NULL);
}

void select_item_from_inv(rpg_t *rpg)
{
    sfVector2i coo = sfMouse_getPositionRenderWindow(BASE->window);
    sfVector2f coof = {coo.x, coo.y};
    sfVector2f coof_key = {coo.x, coo.y};
    int check = -1;

    select_item_from_inv_one(rpg, &check, coo);
    select_item_from_inv_two(rpg, &check, coo);
    display_bubble_actions(rpg, check, coof, coof_key);
}
