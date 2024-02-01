/*
** EPITECH PROJECT, 2022
** item_inv_choice.c
** File description:
** item_inv_choice
*/

#include "my_rpg.h"

void set_case_inv(items_t *it, grab_wich_item_t *g, int idx, int type)
{
    it[idx].used = 1;
    it[idx].sprite = g[type].sprite;
    type == apple ? it[idx].name = my_strdup("apple") : 0;
    type == baie ? it[idx].name = my_strdup("bai") : 0;
    type == cheese ? it[idx].name = my_strdup("cheese") : 0;
    type == fish_orange ? it[idx].name = my_strdup("fish_orange") : 0;
    type == mush_orange ? it[idx].name = my_strdup("mush_orange") : 0;
    type == mush_purple ? it[idx].name = my_strdup("mush_purple") : 0;
    type == orange ? it[idx].name = my_strdup("orange") : 0;
    type == po_green ? it[idx].name = my_strdup("po_purple") : 0;
    type == po_purple ? it[idx].name = my_strdup("po_green") : 0;
    type == rope ? it[idx].name = my_strdup("rope") : 0;
    type == karrot ? it[idx].name = my_strdup("karrot") : 0;
    it[idx].idx_case = idx;

}

void place_item_inv(items_t *it, int idx, char item, grab_wich_item_t *g)
{
    (void)idx;
    int i = 0;
    for (; it[i].used == 1; i++);
    item == 'a' ? set_case_inv(it, g, i, apple) : 0;
    item == 'b' ? set_case_inv(it, g, i, baie) : 0;
    item == 'c' ? set_case_inv(it, g, i, cheese) : 0;
    item == 'f' ? set_case_inv(it, g, i, fish_orange) : 0;
    item == 'm' ? set_case_inv(it, g, i, mush_orange) : 0;
    item == 'x' ? set_case_inv(it, g, i, mush_purple) : 0;
    item == 'o' ? set_case_inv(it, g, i, orange) : 0;
    item == 'p' ? set_case_inv(it, g, i, po_purple) : 0;
    item == 'g' ? set_case_inv(it, g, i, po_green) : 0;
    item == 'r' ? set_case_inv(it, g, i, rope) : 0;
    item == 'k' ? set_case_inv(it, g, i, karrot) : 0;
}
