/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** kenett_text
*/

#include "my_rpg.h"

void my_free_array(char **array);

static kenett_text_t set_text_kenett_struct(char *Font,
sfVector2f pos, const char *text, int size)
{
    kenett_text_t kenett_text;

    kenett_text.clock = sfClock_create();
    kenett_text.txt = sfText_create();
    kenett_text.Font = sfFont_createFromFile(Font);
    kenett_text.sec = 0;
    kenett_text.max_sec = 0;
    kenett_text.opacity = 0;
    sfText_setString(kenett_text.txt, text);
    sfText_setFont(kenett_text.txt, kenett_text.Font);
    sfText_setCharacterSize(kenett_text.txt, size);
    sfText_setPosition(kenett_text.txt, pos);
    return (kenett_text);
}

void kenett_text(rpg_t *rpg)
{
    char **array_text = text("src/set_structures/set_font/text/kenett", 708);

    GAME_TEXT->kenett[0] = set_text_kenett_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x, GAME_VAR->p_pos.y}, array_text[0], 15);
    GAME_TEXT->kenett[1] = set_text_kenett_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x, GAME_VAR->p_pos.y}, array_text[1], 15);
    GAME_TEXT->kenett[2] = set_text_kenett_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x, GAME_VAR->p_pos.y}, array_text[2], 15);
    GAME_TEXT->kenett[3] = set_text_kenett_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x, GAME_VAR->p_pos.y}, array_text[3], 15);
    GAME_TEXT->kenett[4] = set_text_kenett_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x, GAME_VAR->p_pos.y}, array_text[4], 15);
    my_free_array(array_text);
}
