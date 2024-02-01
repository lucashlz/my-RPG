/*
** EPITECH PROJECT, 2022
** set_inventory.c
** File description:
** set_inventory
*/

#include <stdlib.h>
#include "my_rpg.h"

void set_inventory(rpg_t *rpg)
{
    INV = malloc(sizeof(inv_t));
    INV->life = malloc(sizeof(obj_inv_t));
    INV->life_bg = malloc(sizeof(obj_inv_t));
    INV->txt_life = malloc(sizeof(txt_inv_t));
    INV->open = 0;
    INV->nb_inv = 0;
    INV->sprite = sfSprite_create();
    INV->texture = sfTexture_createFromFile(BAKO_INV, NULL);
    INV->scale = (sfVector2f){0.3, 0.3};
    sfSprite_setTexture(INV->sprite, INV->texture, sfTrue);
    sfSprite_setScale(INV->sprite, INV->scale);
    INV->life->sprite = sfSprite_create();
    INV->life->texture = sfTexture_createFromFile(BAR_LIFE, NULL);
    INV->life_bg->sprite = sfSprite_create();
    INV->life_bg->texture = sfTexture_createFromFile(BAR_BG, NULL);
    INV->txt_life->txt = sfText_create();
    INV->txt_life->Font = sfFont_createFromFile(SUBTITLE);
    sfText_setString(INV->txt_life->txt, "Life : 100/100");
    sfText_setFont(INV->txt_life->txt, INV->txt_life->Font);
    sfText_setCharacterSize(INV->txt_life->txt, 12);
}

int malloc_obj_map(rpg_t *rpg)
{
    INV->item_str = extract_str("map_items.txt", 3722);
    int len = my_strlen(INV->item_str);

    for (int i = 0; i < len; i++)
        if (INV->item_str[i] == 'a' || INV->item_str[i] == 'b' ||
        INV->item_str[i] == 'c' || INV->item_str[i] == 'f' ||
        INV->item_str[i] == 'm' || INV->item_str[i] == 'x' ||
        INV->item_str[i] == 'p' || INV->item_str[i] == 'g' ||
        INV->item_str[i] == 'r' || INV->item_str[i] == 'k' ||
        INV->item_str[i] == 'o')
            INV->nb_inv++;
    INV->item_obj = NULL;
    INV->item_obj = malloc(sizeof(obj_map_t) * (INV->nb_inv));
    for (int i = 0; i != INV->nb_inv; i++)
        INV->item_obj[i].can_pick = sfTrue;
    return (len);
}

void set_this_obj(rpg_t *rpg, char type, sfVector2f coo, int id)
{
    if (type == 'a' || type == 'b' ||
        type == 'c' || type == 'f' ||
        type == 'm' || type == 'x' ||
        type == 'p' || type == 'g' ||
        type == 'r' || type == 'k' ||
        type == 'o') {
        INV->item_obj[id].pos = coo;
        INV->item_obj[id].col_rect = (sfVector2f){48, 48};
    }
    INV->item_obj[id].type = type;
}

void set_item_inv(rpg_t *rpg)
{
    int coo_x = 624;
    int coo_y = 624;
    int j = 0;
    int len = malloc_obj_map(rpg);

    for (int i = 0; i < len; i++) {
        if (INV->item_str[i] == 'a' || INV->item_str[i] == 'b' ||
        INV->item_str[i] == 'c' || INV->item_str[i] == 'f' ||
        INV->item_str[i] == 'm' || INV->item_str[i] == 'x' ||
        INV->item_str[i] == 'p' || INV->item_str[i] == 'g' ||
        INV->item_str[i] == 'r' || INV->item_str[i] == 'k' ||
        INV->item_str[i] == 'o') {
            set_this_obj(rpg, INV->item_str[i], (sfVector2f){coo_x, coo_y}, j++);
            coo_x += 48;
            continue;
        } else if (INV->item_str[i] == '\n') {
            coo_x = 624;
            coo_y += 48;
            continue;
        } else
            coo_x += 48;
    }
}
