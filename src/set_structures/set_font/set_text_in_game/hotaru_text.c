/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** hotaru_text
*/

#include "my_rpg.h"

void my_free_array(char **array);

static hotaru_text_t set_text_hotaru_struct(char *Font,
sfVector2f pos, const char *text, int size)
{
    hotaru_text_t hotaru_text;

    hotaru_text.clock = sfClock_create();
    hotaru_text.txt = sfText_create();
    hotaru_text.Font = sfFont_createFromFile(Font);
    hotaru_text.sec = 0;
    hotaru_text.max_sec = 0;
    hotaru_text.opacity = 0;
    sfText_setString(hotaru_text.txt, text);
    sfText_setFont(hotaru_text.txt, hotaru_text.Font);
    sfText_setCharacterSize(hotaru_text.txt, size);
    sfText_setPosition(hotaru_text.txt, pos);
    return (hotaru_text);
}

void hotaru_text(rpg_t *rpg)
{
    char **array_text = text("src/set_structures/set_font/text/hotaru", 359);

    GAME_TEXT->hotaru[0] = set_text_hotaru_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x, GAME_VAR->p_pos.y}, array_text[0], 15);
    GAME_TEXT->hotaru[1] = set_text_hotaru_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x, GAME_VAR->p_pos.y}, array_text[1], 15);
    GAME_TEXT->hotaru[2] = set_text_hotaru_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x, GAME_VAR->p_pos.y}, array_text[2], 15);
    GAME_TEXT->hotaru[3] = set_text_hotaru_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x, GAME_VAR->p_pos.y}, array_text[3], 15);
    my_free_array(array_text);
}
