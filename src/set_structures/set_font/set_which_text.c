/*
** EPITECH PROJECT, 2022
** rpg_2
** File description:
** set_wich_text
*/

#include "my_rpg.h"

static void set_which_text_is_two(rpg_t *rpg)
{
    GAME->write[10].max_sec = 80;
    GAME->write[11].max_sec = 80;
    GAME->write[12].max_sec = 200;
    GAME->write[13].max_sec = 150;
    GAME->write[14].max_sec = 350;
    GAME->write[15].max_sec = 80;
    GAME->write[16].max_sec = 130;
    GAME->write[17].max_sec = 200;
    GAME->write[18].max_sec = 120;
    GAME->write[19].max_sec = 120;
    GAME->write[20].max_sec = 400;
}

void set_which_text_is(rpg_t *rpg)
{
    GAME_VAR->valid_write = 0;
    GAME->write[0].max_sec = 200;
    GAME->write[1].max_sec = 130;
    GAME->write[2].max_sec = 190;
    GAME->write[3].max_sec = 190;
    GAME->write[4].max_sec = 190;
    GAME->write[5].max_sec = 150;
    GAME->write[6].max_sec = 250;
    GAME->write[7].max_sec = 230;
    GAME->write[8].max_sec = 210;
    GAME->write[9].max_sec = 70;
    set_which_text_is_two(rpg);
}
