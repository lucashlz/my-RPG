/*
** EPITECH PROJECT, 2022
** set_rab_items.c
** File description:
** set_grab_items
*/

#include <stdlib.h>
#include "my_rpg.h"
#define SCALE (sfVector2f){0.8, 0.8}

grab_wich_item_t create_sp_it(char *path, sfVector2f scale)
{
    grab_wich_item_t item;
    item.sprite = sfSprite_create();
    item.texture = sfTexture_createFromFile(path, NULL);
    item.scale = scale;
    sfSprite_setTexture(item.sprite, item.texture, sfTrue);
    sfSprite_setPosition(item.sprite, item.pos);
    return (item);
}

void set_all_items(rpg_t *rpg)
{
    INV->grab->gw[apple] = create_sp_it(APPLE, SCALE);
    INV->grab->gw[baie] = create_sp_it(BAI, SCALE);
    INV->grab->gw[cheese] = create_sp_it(CHEESE, SCALE);
    INV->grab->gw[fish_orange] = create_sp_it(FISH_O, SCALE);
    INV->grab->gw[mush_orange] = create_sp_it(MUSH_O, SCALE);
    INV->grab->gw[mush_purple] = create_sp_it(MUSH_P, SCALE);
    INV->grab->gw[orange] = create_sp_it(ORANGE, SCALE);
    INV->grab->gw[po_green] = create_sp_it(PO_GREEN, SCALE);
    INV->grab->gw[po_purple] = create_sp_it(PO_PURPLE, SCALE);
    INV->grab->gw[rope] = create_sp_it(ROPE, SCALE);
    INV->grab->gw[karrot] = create_sp_it("assets/inventory/carrot.png", SCALE);
}

void set_grab_items(rpg_t *rpg)
{
    INV->grab = malloc(sizeof(grab_item_t));
    for (int i = 0; i < 27; i++) {
        INV->items[i].used = 0;
        INV->items[i].sprite = sfSprite_create();
        INV->items[i].texture = sfTexture_createFromFile(BAKO_TALK, NULL);
        INV->items[i].scale = (sfVector2f){0.8, 0.8};
        sfSprite_setPosition(INV->items[i].sprite,
        (sfVector2f){(GAME_VAR->p_pos.x - 15), (GAME_VAR->p_pos.y - 30)});
        sfSprite_setTexture(INV->items[i].sprite, INV->items[i].texture, sfTrue);
        sfSprite_setScale(INV->items[i].sprite, INV->items[i].scale);
    }
    set_all_items(rpg);
    INV->grab->sprite = sfSprite_create();
    INV->grab->texture = sfTexture_createFromFile(BAKO_TALK, NULL);
    sfSprite_setTexture(INV->grab->sprite, INV->grab->texture, sfTrue);
    sfSprite_setScale(INV->grab->sprite, (sfVector2f){0.7, 0.7});
}
