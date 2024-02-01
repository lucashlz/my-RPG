/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_font
*/

#include "my_rpg.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void set_font_next_next(rpg_t *rpg, char **dialogues);

void set_font_next(rpg_t *rpg, char **dialogues);

void set_font_next(rpg_t *rpg, char **dialogues);

void my_free_array(char **array);

char **text(char *path, int nbr_char)
{
    ssize_t size;
    char *dialogue = NULL;
    char **array = NULL;

    int fd = open(path, O_RDONLY);
    if (fd == -1)
        return (NULL);
    dialogue = malloc(sizeof(char) * (nbr_char + 1));
    if (!dialogue)
        return (NULL);
    size = read(fd, dialogue, nbr_char);
    dialogue[nbr_char] = '\0';
    if (size == -1)
        return (NULL);
    array = my_str_to_array_hugo(dialogue, "|");
    free(dialogue);
    return (array);
}

static text_t set_anime_map_struct(char *Font,
sfVector2f pos, char *text, int size)
{
    text_t write;

    write.clock = sfClock_create();
    write.txt = sfText_create();
    write.Font = sfFont_createFromFile(Font);
    write.sec = 0;
    write.max_sec = 0;
    write.opacity = 0;
    sfText_setString(write.txt, text);
    sfText_setFont(write.txt, write.Font);
    sfText_setCharacterSize(write.txt, size);
    sfText_setPosition(write.txt, pos);
    return (write);
}

void set_font(rpg_t *rpg)
{
    char **dialogues = text("src/set_structures/set_font/text/dialogue", 729);

    if (!dialogues)
        return;
    GAME_VAR->which_speech = 0;
    GAME->write[0] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){470, 800}, dialogues[0], 45);
    GAME->write[1] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){240, 800}, dialogues[1], 45);
    GAME->write[2] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){440, 800}, dialogues[2], 45);
    GAME->write[3] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){350, 800}, dialogues[3], 45);
    GAME->write[4] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){150, 800}, dialogues[4], 45);
    GAME->write[5] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){630, 800}, dialogues[5], 45);
    set_font_next(rpg, dialogues);
}

void set_font_next(rpg_t *rpg, char **dialogues)
{
    GAME->write[6] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){160, 800}, dialogues[6], 45);
    GAME->write[7] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){380, 800}, dialogues[7], 45);
    GAME->write[8] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){520, 800}, dialogues[8], 45);
    GAME->write[9] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){390, 800}, dialogues[9], 50);
    GAME->write[10] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){460, 800}, dialogues[10], 50);
    GAME->write[11] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){460, 800}, dialogues[11], 50);
    GAME->write[12] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){310, 800}, dialogues[12], 50);
    set_font_next_next(rpg, dialogues);
}

void set_font_next_next(rpg_t *rpg, char **dialogues)
{
    GAME->write[13] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){150, 800}, dialogues[13], 55);
    GAME->write[14] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){150, 800}, dialogues[14], 55);
    GAME->write[15] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){490, 800}, dialogues[15], 55);
    GAME->write[16] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){590, 800}, dialogues[16], 55);
    GAME->write[17] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){260, 800}, dialogues[17], 55);
    GAME->write[18] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){590, 800}, dialogues[18], 55);
    GAME->write[19] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){640, 800}, dialogues[19], 55);
    GAME->write[20] = set_anime_map_struct(SUBTITLE,
    (sfVector2f){640, 800}, dialogues[20], 55);
    my_free_array(dialogues);
    set_which_text_is(rpg);
}
