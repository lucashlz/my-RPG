/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_text_wait_start
*/

#include "my_rpg.h"

static text_wait_t set_text_wait_start_struct(char *Font,
sfVector2f pos, char *text, int size)
{
    text_wait_t text_wait;

    text_wait.clock = sfClock_create();
    text_wait.txt = sfText_create();
    text_wait.Font = sfFont_createFromFile(Font);
    text_wait.sec = 0;
    text_wait.max_sec = 0;
    text_wait.opacity = 0;
    sfText_setString(text_wait.txt, text);
    sfText_setFont(text_wait.txt, text_wait.Font);
    sfText_setCharacterSize(text_wait.txt, size);
    sfText_setPosition(text_wait.txt, pos);
    return (text_wait);
}

void set_text_wait(rpg_t *rpg)
{
    TEXT_WAIT[0].opacity = 0;
    TEXT_WAIT[0].valid = 0;
    TEXT_WAIT[0] = set_text_wait_start_struct(SUBTITLE,
    (sfVector2f){650, 850}, "PRESS ENTER TO START", 45);
}
