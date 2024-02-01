/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_rpg
*/

#include "my_rpg.h"

void my_rpg(rpg_t *rpg)
{
    set_menus_text_pos(rpg);
    while (sfRenderWindow_isOpen(BASE->window)) {
        !BASE->is_in_game ? menu_gestion(rpg, MENUS[m_welcome]) : 0;
        (BASE->is_in_game) ? my_game(rpg) : 0;
    }
    return;
}
