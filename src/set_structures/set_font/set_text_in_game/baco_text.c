/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** baco_text
*/

#include "my_rpg.h"

void my_free_array(char **array);

static baco_text_t set_text_baco_struct(char *Font,
sfVector2f pos, const char *text, int size)
{
    baco_text_t baco_text;

    baco_text.clock = sfClock_create();
    baco_text.txt = sfText_create();
    baco_text.Font = sfFont_createFromFile(Font);
    baco_text.sec = 0;
    baco_text.max_sec = 0;
    baco_text.opacity = 0;
    sfText_setString(baco_text.txt, text);
    sfText_setFont(baco_text.txt, baco_text.Font);
    sfText_setCharacterSize(baco_text.txt, size);
    sfText_setPosition(baco_text.txt, pos);
    return (baco_text);
}

void baco_text(rpg_t *rpg)
{
    char **array_text = text("src/set_structures/set_font/text/baco", 1120);

    GAME_TEXT->baco[0] = set_text_baco_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x - 90, GAME_VAR->p_pos.y - 240}, array_text[0], 15);
    GAME_TEXT->baco[1] = set_text_baco_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x - 80, GAME_VAR->p_pos.y - 235}, array_text[1], 15);
    GAME_TEXT->baco[2] = set_text_baco_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x - 80, GAME_VAR->p_pos.y - 235}, array_text[2], 15);
    GAME_TEXT->baco[3] = set_text_baco_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x - 80, GAME_VAR->p_pos.y - 235}, array_text[3], 15);
    GAME_TEXT->baco[4] = set_text_baco_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x - 80, GAME_VAR->p_pos.y - 235}, array_text[4], 15);
    GAME_TEXT->baco[5] = set_text_baco_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x - 80, GAME_VAR->p_pos.y - 235}, array_text[5], 15);
    GAME_TEXT->baco[6] = set_text_baco_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x - 80, GAME_VAR->p_pos.y - 235}, array_text[6], 15);
    GAME_TEXT->baco[7] = set_text_baco_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x - 80, GAME_VAR->p_pos.y - 235}, array_text[7], 15);
    GAME_TEXT->baco[8] = set_text_baco_struct(BOLT, (sfVector2f)
    {GAME_VAR->p_pos.x - 80, GAME_VAR->p_pos.y - 235}, array_text[8], 15);
    my_free_array(array_text);
}
