/*
** EPITECH PROJECT, 2022
** disp_weapon.c
** File description:
** disp_weapons
*/

#include "my_rpg.h"

static void disp_fire(rpg_t *rpg)
{
    int x = (GAME_VAR->p_pos.x - 173);
    int y = (GAME_VAR->p_pos.y - 130);
    sfVector2f pos_slot = (sfVector2f){x, y};

    if (INV->equiped[fire_w].used == 1) {
        sfSprite_setPosition(INV->equiped[fire_w].sprite, pos_slot);
        sfRenderWindow_drawSprite(BASE->window,
        INV->equiped[fire_w].sprite, NULL);
    }
}

static void disp_thunder(rpg_t *rpg)
{
    int x = (GAME_VAR->p_pos.x - 173);
    int y = (GAME_VAR->p_pos.y - 100);
    sfVector2f pos_slot = (sfVector2f){x, y};

    if (INV->equiped[thunder_w].used == 1) {
        sfSprite_setPosition(INV->equiped[thunder_w].sprite, pos_slot);
        sfRenderWindow_drawSprite(BASE->window,
        INV->equiped[thunder_w].sprite, NULL);
    }
}

static void disp_water(rpg_t *rpg)
{
    int x = (GAME_VAR->p_pos.x - 173);
    int y = (GAME_VAR->p_pos.y - 70);
    sfVector2f pos_slot = (sfVector2f){x, y};

    if (INV->equiped[water_w].used == 1) {
        sfSprite_setPosition(INV->equiped[water_w].sprite, pos_slot);
        sfRenderWindow_drawSprite(BASE->window,
        INV->equiped[water_w].sprite, NULL);
    }
}

void disp_weapon(rpg_t *rpg)
{
    if (INV->open == 0)
        return;
    disp_fire(rpg);
    disp_thunder(rpg);
    disp_water(rpg);
}
