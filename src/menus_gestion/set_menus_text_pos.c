/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_menus_text_pos
*/

#include "my_rpg.h"

void set_menus_text_pos(rpg_t *rpg)
{
    for (int i = 0; i < NB_MENUS; i++) {
        sfSprite_setTexture(MENUS[i].menu_sprite, MENUS[i].menu_text, sfFalse);
        sfSprite_setTexture(MENUS[i].name_sprite, MENUS[i].name_text, sfFalse);
        sfSprite_setPosition(MENUS[i].name_sprite, MENUS[i].name_pos);
    }
}
