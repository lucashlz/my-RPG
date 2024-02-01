/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_text_game
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "my_rpg.h"

void set_text_game(rpg_t *rpg)
{
    baco_text(rpg);
    kenett_text(rpg);
    hotaru_text(rpg);
}
