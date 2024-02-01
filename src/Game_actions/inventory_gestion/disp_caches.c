/*
** EPITECH PROJECT, 2022
** disp_caches.c
** File description:
** disp_caches
*/

#include "my_rpg.h"

int wich_texture(obj_map_t *omap, int i)
{
    int choice;
    omap[i].type == 'a' ? choice = 0 : 0;
    omap[i].type == 'b' ? choice = 1 : 0;
    omap[i].type == 'c' ? choice = 2 : 0;
    omap[i].type == 'f' ? choice = 3 : 0;
    omap[i].type == 'm' ? choice = 0 : 0;
    omap[i].type == 'x' ? choice = 0 : 0;
    omap[i].type == 'o' ? choice = 0 : 0;
    omap[i].type == 'p' ? choice = 6 : 0;
    omap[i].type == 'g' ? choice = 7 : 0;
    omap[i].type == 'r' ? choice = 2 : 0;
    omap[i].type == 'k' ? choice = 8 : 0;
    return (choice);
}

void disp_caches(obj_map_t *omap, rpg_t *rpg)
{
    int choice = -1;

    for (int i = 0; i < INV->nb_inv; i++)
        if (omap[i].can_pick == sfFalse) {
            choice = wich_texture(omap, i);
            sfSprite_setPosition(INV->caches[choice].sprite, omap[i].pos);
            sfRenderWindow_drawSprite(BASE->window,
            INV->caches[choice].sprite, NULL);
    }
}