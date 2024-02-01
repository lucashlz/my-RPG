/*
** EPITECH PROJECT, 2022
** disp_bubble_inv.c
** File description:
** disp_bubble_inv
*/

#include "my_rpg.h"
static const char *const EAT_ITEMS[] = {"apple", "bai", "cheese",
"fish_orange", "mush_orange", "mush_purple", "karrot", "orange"};
static const char *const DRINK_ITEMS[] = {"po_purple", "po_green"};

void disp_actions(rpg_t *rpg, int check, sfVector2f coof)
{
    for (int i = 0; i != 8; i++)
        !my_strcmp(INV->items[check].name, EAT_ITEMS[i]) ?
        disp_eat_drink(rpg, coof, 0) : 0;
    for (int i = 0; i != 2; i++)
        !my_strcmp(INV->items[check].name, DRINK_ITEMS[i]) ?
        disp_eat_drink(rpg, coof, 1) : 0;
    if (!my_strcmp(INV->items[check].name, "rope"))
        disp_eat_drink(rpg, coof, 2);
}

void replace_inv(items_t *it, int check)
{
    items_t tmp[27];
    int j = 0;

    for (int i = 0; i < 28; i++) {
        if (i == check)
            continue;
        tmp[j] = it[i];
        j++;
    }
    it = tmp;
}

void add_bonus_items(rpg_t *rpg, items_t *it, int check)
{
    my_strcmp(it[check].name, "apple") ? GAME_VAR->bako_life += 5 : 0;
    my_strcmp(it[check].name, "bai") ? GAME_VAR->bako_life += 5 : 0;
    my_strcmp(it[check].name, "cheese") ? GAME_VAR->bako_life += 10 : 0;
    my_strcmp(it[check].name, "fish_orange") ? GAME_VAR->bako_life += 10 : 0;
    my_strcmp(it[check].name, "mush_orange") ? GAME_VAR->bako_life += 10 : 0;
    my_strcmp(it[check].name, "mush_purple") ? GAME_VAR->bako_life += 10 : 0;
    my_strcmp(it[check].name, "orange") ? GAME_VAR->bako_life += 5 : 0;
    my_strcmp(it[check].name, "po_purple") ? GAME_VAR->bako_life += 25 : 0;
    my_strcmp(it[check].name, "po_green") ?
    GAME->capacity->invi->drinked_potion = sfTrue : 0;
    my_strcmp(it[check].name, "karrot") ? GAME_VAR->bako_life += 20 : 0;
}

void use_item(rpg_t *rpg, int check)
{
    if (sfKeyboard_isKeyPressed(sfKeyEnter) &&
    my_strcmp(INV->items[check].name, "rope")) {
        GAME->capacity->invi->drinked_potion = sfTrue;
        INV->items[check].used = 0;
        add_bonus_items(rpg, INV->items, check);
        replace_inv(INV->items, check);
    }
}

void display_bubble_actions(rpg_t *rpg, int check, sfVector2f coof,
sfVector2f coof_key)
{
    sfVector2f scale = {0.05, 0.05};

    if (check != -1 && INV->open == 1 && INV->items[check].used == 1) {
        coof.x = GAME_VAR->p_pos.x - 200;
        coof.y = GAME_VAR->p_pos.y - 10;
        check < 9 ? coof.x += (45 * check) : 0;
        check >= 9 && check < 18 ?
        coof.x += (45 * (check - 9)),coof.y += 40 : 0;
        check >= 18 && check < 27 ?
        coof.x += (45 * (check - 18)), coof.y += 80 : 0;
        display_bubble(rpg, coof, 1);
        coof_key = coof;
        coof_key.x += 20;
        display_bubble1(rpg, coof_key, scale, 0);
        disp_actions(rpg, check, coof);
        use_item(rpg, check);
    }
}
