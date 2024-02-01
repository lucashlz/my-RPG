/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_spell
*/

#include "my_rpg.h"

static spell_t set_spell_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    spell_t spell;

    spell.clock = sfClock_create();
    spell.sprite = sfSprite_create();
    spell.texture = sfTexture_createFromFile(path, NULL);
    spell.rect = rect;
    spell.pos = pos;
    spell.scale = scale;
    sfSprite_setTexture(spell.sprite, spell.texture, sfTrue);
    sfSprite_setTextureRect(spell.sprite, spell.rect);
    sfSprite_setPosition(spell.sprite, spell.pos);
    return (spell);
}

void set_spell(rpg_t *rpg)
{
    GAME->spell[0] = set_spell_struct(SPELL_FIRE, (sfVector2f){0, 0},
    (sfIntRect){0, 0, 68, 229}, (sfVector2f){0.5, 0.5});
}
