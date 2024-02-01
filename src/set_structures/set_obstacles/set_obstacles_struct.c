/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_obstacles_struct
*/

#include "my_rpg.h"
#include <stdio.h>
#include <stdlib.h>

void set_specific_obs(rpg_t *rpg)
{
    GAME->obst[847].col_rect = (sfVector2f){12, 758};
    GAME->obst[847].pos = (sfVector2f){1860, 584};
    GAME->obst[848].col_rect = (sfVector2f){12, 388};
    GAME->obst[848].pos = (sfVector2f){1814, 1358};
    GAME->obst[849].col_rect = (sfVector2f){60, 12};
    GAME->obst[849].pos = (sfVector2f){1244, 1019};
    GAME->obst[850].col_rect = (sfVector2f){336, 2};
    GAME->obst[850].pos = (sfVector2f){2208, 684};
    GAME->obst[851].col_rect = (sfVector2f){1021, 2};
    GAME->obst[851].pos = (sfVector2f){3360, 734};
    GAME->obst[852].col_rect = (sfVector2f){1324, 48};
    GAME->obst[852].pos = (sfVector2f){594, 534};
    GAME->obst[853].col_rect = (sfVector2f){2732, 48};
    GAME->obst[853].pos = (sfVector2f){1878, 584};
    GAME->obst[854].col_rect = (sfVector2f){48, 48};
    GAME->obst[854].pos = (sfVector2f){597, 1767};
    GAME->obst[855].col_rect = (sfVector2f){350, 2};
    GAME->obst[855].pos = (sfVector2f){3363, 1584};
    GAME->obst[856].col_rect = (sfVector2f){300, 2};
    GAME->obst[856].pos = (sfVector2f){3027, 1489};
}

int find_obstacle(rpg_t *rpg, sfVector2f coos)
{
    for (int i = 0; i < GAME_VAR->nb_obs; i++)
        if (coos.x == GAME->obst[i].pos.x && coos.y == GAME->obst[i].pos.x)
            return (i);
    return (-1);
}

int malloc_struct(rpg_t *rpg)
{
    int len = my_strlen(GAME_VAR->obs_str);

    for (int i = 0; i < len; i++)
        if (GAME_VAR->obs_str[i] == 'o' || GAME_VAR->obs_str[i] == 's' ||
        GAME_VAR->obs_str[i] == 'w' || GAME_VAR->obs_str[i] == 'b')
            GAME_VAR->nb_obs++;
    GAME_VAR->nb_obs += 10;
    GAME->obst = malloc(sizeof(obstacles_t) * (GAME_VAR->nb_obs));
    return (len);
}

void set_obstacles_struct(rpg_t *rpg)
{
    int coo_x = 624;
    int coo_y = 624;
    int j = 0;
    int len = malloc_struct(rpg);

    for (int i = 0; i < len; i++) {
        if (GAME_VAR->obs_str[i] == 'o' || GAME_VAR->obs_str[i] == 's' ||
            GAME_VAR->obs_str[i] == 'w' || GAME_VAR->obs_str[i] == 'b') {
            set_this_obs(rpg, GAME_VAR->obs_str[i],
            (sfVector2f){coo_x, coo_y}, j++);
            coo_x += 48;
            continue;
        } else if (GAME_VAR->obs_str[i] == '\n') {
            coo_x = 624;
            coo_y += 48;
            continue;
        } else
            coo_x += 48;
    }
    set_specific_obs(rpg);
}
