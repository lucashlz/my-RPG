/*
** EPITECH PROJECT, 2022
** set_caches
** File description:
** set_caches
*/

#include "my_rpg.h"
static const char FONT[] = "assets/font/font_p.ttf";

void set_caches(rpg_t *rpg)
{
    for (int i = 0; i < 9; i++) {
        INV->caches[i].sprite = sfSprite_create();
        INV->caches[i].texture =
        sfTexture_createFromFile(ALL_CACHES[i], NULL);
        sfSprite_setTexture(INV->caches[i].sprite,
        INV->caches[i].texture, sfTrue);
    }
}

void set_details_items(rpg_t *rpg)
{
    INV->details_it[0].txt = sfText_create();
    INV->details_it[1].txt = sfText_create();
    INV->details_it[2].txt = sfText_create();
    INV->details_it[0].Font = sfFont_createFromFile(FONT);
    INV->details_it[1].Font = sfFont_createFromFile(FONT);
    INV->details_it[2].Font = sfFont_createFromFile(FONT);
    sfText_setString(INV->details_it[0].txt, "Eat");
    sfText_setString(INV->details_it[1].txt, "Drink");
    sfText_setString(INV->details_it[2].txt, "Use");
    sfText_setFont(INV->details_it[0].txt, INV->details_it[0].Font);
    sfText_setFont(INV->details_it[1].txt, INV->details_it[1].Font);
    sfText_setFont(INV->details_it[2].txt, INV->details_it[2].Font);
    sfText_setColor(INV->details_it[0].txt, sfBlack);
    sfText_setColor(INV->details_it[1].txt, sfBlack);
    sfText_setColor(INV->details_it[2].txt, sfBlack);
    sfText_setCharacterSize(INV->details_it[0].txt, 20);
    sfText_setCharacterSize(INV->details_it[1].txt, 17);
    sfText_setCharacterSize(INV->details_it[2].txt, 20);
}
