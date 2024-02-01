/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** spell_wait
*/

#include "my_rpg.h"

void my_clock_spell(rpg_t *rpg, int which)
{
    GAME->spell[which].time = sfClock_getElapsedTime
    (GAME->spell[which].clock);
    GAME->spell[which].sec = GAME->spell[which].time.microseconds / 1000000.0;
}

void moove_spell(rpg_t *rpg, int which, sfVector2f pos)
{
    int val_max = 552;

    sfSprite_setPosition(GAME->spell[which].sprite, pos);
    sfSprite_setScale(GAME->spell[which].sprite, GAME->spell[which].scale);
    sfSprite_setTextureRect(GAME->spell[which].sprite, GAME->spell[which].rect);
    color(rpg, which);
    sfRenderWindow_drawSprite(BASE->window, GAME->spell[which].sprite, NULL);
    if (GAME->spell[which].sec > 0.11) {
        if (GAME->spell[which].rect.left >= val_max - 68)
            GAME->spell[which].rect.left = 0;
        else
            GAME->spell[which].rect.left += 68;
        sfClock_restart(GAME->spell[which].clock);
    }
}
