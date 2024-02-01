/*
** EPITECH PROJECT, 2022
** item_gestion.c
** File description:
** item_gestion
*/

#include "my_rpg.h"
#define TYPE INV->item_obj[idx].type

int is_item(rpg_t *rpg, sfVector2f pos)
{
    for (int i = 0; i < INV->nb_inv; i++) {
        if ((pos.x > INV->item_obj[i].pos.x &&
            pos.x < INV->item_obj[i].pos.x +
            INV->item_obj[i].col_rect.x &&
            pos.y - 24 > INV->item_obj[i].pos.y &&
            pos.y - 24 < INV->item_obj[i].pos.y +
            INV->item_obj[i].col_rect.y) ||
            (pos.x> INV->item_obj[i].pos.x &&
            pos.x < INV->item_obj[i].pos.x +
            INV->item_obj[i].col_rect.x &&
            pos.y  + 38 > INV->item_obj[i].pos.y &&
            pos.y + 38 < INV->item_obj[i].pos.y +
            INV->item_obj[i].col_rect.y))
                return (i);
    }
    return (-1);
}

void d_item(sfRenderWindow *w, grab_wich_item_t *grab,
int choice, sfVector2f pos)
{
    sfSprite_setPosition(grab[choice].sprite, pos);
    sfSprite_setScale(grab[choice].sprite, grab[choice].scale);
    sfRenderWindow_drawSprite(w, grab[choice].sprite, NULL);
}

void disp_wich_item(char type, rpg_t *rpg, sfVector2f pos)
{
    pos.x += 10;
    pos.y += 15;
    type == 'a' ? d_item(BASE->window, INV->grab->gw, apple, pos) : 0;
    type == 'b' ? d_item(BASE->window, INV->grab->gw, baie, pos) : 0;
    type == 'c' ? d_item(BASE->window, INV->grab->gw, cheese, pos) : 0;
    type == 'f' ? d_item(BASE->window, INV->grab->gw, fish_orange, pos) : 0;
    type == 'm' ? d_item(BASE->window, INV->grab->gw, mush_orange, pos) : 0;
    type == 'x' ? d_item(BASE->window, INV->grab->gw, mush_purple, pos) : 0;
    type == 'o' ? d_item(BASE->window, INV->grab->gw, orange, pos) : 0;
    type == 'p' ? d_item(BASE->window, INV->grab->gw, po_purple, pos) : 0;
    type == 'g' ? d_item(BASE->window, INV->grab->gw, po_green, pos) : 0;
    type == 'r' ? d_item(BASE->window, INV->grab->gw, rope, pos) : 0;
    type == 'k' ? d_item(BASE->window, INV->grab->gw, karrot, pos) : 0;
}

void display_bub_item(rpg_t *rpg, int idx, sfVector2f pos_inv)
{
    if (INV->item_obj[idx].can_pick) {
        display_bubble(rpg, pos_inv, 1);
        disp_wich_item(INV->item_obj[idx].type, rpg, pos_inv);
        sfSprite_setPosition(INV->grab->sprite, pos_inv);
        sfRenderWindow_drawSprite(BASE->window, INV->grab->sprite, NULL);
    }
}

void check_items(rpg_t *rpg)
{
    int x = (GAME_VAR->p_pos.x - 40);
    int y = (GAME_VAR->p_pos.y - 90);
    sfVector2f pos_inv = (sfVector2f){x, y};
    int idx = is_item(rpg, GAME_VAR->p_pos);

    if (idx == -1)
        return;
    if (TYPE == 'a' || TYPE == 'b' || TYPE == 'c' || TYPE == 'f' ||
        TYPE == 'm' || TYPE == 'x' || TYPE == 'p' || TYPE == 'g' ||
        TYPE == 'r' || TYPE == 'k' || TYPE == 'o') {
        if (INV->item_obj[idx].type == 'g' &&
        !GAME->capacity->invi->can_get_potion)
            return;
        display_bub_item(rpg, idx, pos_inv);
        if (sfKeyboard_isKeyPressed(sfKeyLShift) &&
        INV->item_obj[idx].can_pick) {
            place_item_inv(INV->items, idx,
            INV->item_obj[idx].type, INV->grab->gw);
            INV->item_obj[idx].can_pick = sfFalse;
        }
    }
}
