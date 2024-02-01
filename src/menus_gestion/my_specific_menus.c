/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_specific_menus
*/

#include "my_rpg.h"

void my_specific_menus(rpg_t *rpg, menu_t menu)
{
    menu.is_active = sfTrue;
    if (menu.have_a_back_text && BASE->is_in_game == sfFalse)
        menu.back_text = MENU_BASE.curr_back_text;
    if (menu.have_a_back_text && BASE->is_in_game == sfTrue &&
    !BOSS_GEST->is_in_arena)
        menu.back_text = GAME->b[map].texture;
    if (menu.have_a_back_text && BOSS_GEST->is_in_arena)
        menu.back_text = sfTexture_createFromFile(ARENA, sfFalse);
    menu.back_sprite = sfSprite_create();
    if (my_strcmp(menu.name, "died") == 0) {
        GAME_VAR->p_pos = GAME_VAR->original_bako_pos;
        exit_from_arena(rpg);
    }
    sfSprite_setTexture(menu.back_sprite, menu.back_text, sfFalse);
    menu_gestion(rpg, menu);
}
