/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_buttons
*/

#include "my_rpg.h"

void set_button_text_pos(button_t *button, sfBool is_in_game)
{
    sfSprite_setTexture(button->actual_sprite, button->actual_text, sfFalse);
    if (is_in_game == sfFalse)
        sfSprite_setPosition(button->actual_sprite, button->pos);
    is_in_game == sfTrue ? sfSprite_setScale(button->actual_sprite,
    (sfVector2f){0.5, 0.5}), button->rect = (sfIntRect){30, -60, 180, 150} :
    sfSprite_setScale(button->actual_sprite, button->resize);
}