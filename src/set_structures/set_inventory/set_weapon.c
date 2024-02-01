/*
** EPITECH PROJECT, 2022
** set_weapon
** File description:
** set_weapon
*/

#include "my_rpg.h"
#define SCALE (sfVector2f){0.55, 0.55}

static void set_fire(rpg_t *rpg)
{
    INV->equiped[fire_w].sprite = sfSprite_create();
    INV->equiped[fire_w].texture =
    sfTexture_createFromFile("assets/inventory/weapons/fire.png", NULL);
    sfSprite_setTexture(INV->equiped[fire_w].sprite,
    INV->equiped[fire_w].texture, sfTrue);
    sfSprite_setScale(INV->equiped[fire_w].sprite, SCALE);
    INV->equiped[fire_w].used = 0;
    INV->equiped[fire_w].name = my_strdup("fire");
}

static void set_thunder(rpg_t *rpg)
{
    INV->equiped[thunder_w].sprite = sfSprite_create();
    INV->equiped[thunder_w].texture =
    sfTexture_createFromFile("assets/inventory/weapons/thunder.png", NULL);
    sfSprite_setTexture(INV->equiped[thunder_w].sprite,
    INV->equiped[thunder_w].texture, sfTrue);
    sfSprite_setScale(INV->equiped[thunder_w].sprite, SCALE);
    INV->equiped[thunder_w].used = 0;
    INV->equiped[thunder_w].name = my_strdup("thunder");
}

static void set_water(rpg_t *rpg)
{
    INV->equiped[water_w].sprite = sfSprite_create();
    INV->equiped[water_w].texture =
    sfTexture_createFromFile("assets/inventory/weapons/water.png", NULL);
    sfSprite_setTexture(INV->equiped[water_w].sprite,
    INV->equiped[water_w].texture, sfTrue);
    sfSprite_setScale(INV->equiped[water_w].sprite, SCALE);
    INV->equiped[water_w].used = 0;
    INV->equiped[water_w].name = my_strdup("water");
}

void set_weapon(rpg_t *rpg)
{
    set_fire(rpg);
    set_thunder(rpg);
    set_water(rpg);
}
