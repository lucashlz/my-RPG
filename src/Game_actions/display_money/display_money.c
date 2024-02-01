/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_money
*/

#include "my_rpg.h"
#include <stdlib.h>

char *my_itoa(int nbr)
{
    int	len;
    char *score_str;
    int stock;

    stock = nbr;
    len = 0;
    while (stock > 0) {
        stock /= 10;
        len++;
    }
    score_str = malloc(sizeof(*score_str) * (len + 1));
    score_str[len] = '\0';
    while (len--) {
        score_str[len] = nbr % 10  + '0';
        nbr /= 10;
    }
    return (score_str);
}

static void my_clock_money(rpg_t *rpg, int which)
{
    rpg->glod[which].time = sfClock_getElapsedTime
    (rpg->glod[which].clock);
    rpg->glod[which].sec = rpg->glod[which].time.microseconds /
    1000000.0;
}

static void moove_money(rpg_t *rpg, int which)
{
    int val_max = 800;

    if (rpg->glod[which].sec > 0.11) {
        if (rpg->glod[which].rect.left >= val_max - 80) {
            rpg->glod[which].rect.left = 0;
        } else {
            rpg->glod[which].rect.left += 80;
        }
        sfClock_restart(rpg->glod[which].clock);
    }
}

static void display_money_sprite(rpg_t *rpg)
{
    my_clock_money(rpg, 0);
    moove_money(rpg, 0);
    sfSprite_setScale(rpg->glod[0].sprite, rpg->glod[0].scale);
    sfSprite_setPosition(rpg->glod[0].sprite, (sfVector2f)
    {(GAME_VAR->p_pos.x - 250), (GAME_VAR->p_pos.y + 249)});
    sfSprite_setTextureRect(rpg->glod[0].sprite, rpg->glod[0].rect);
    sfRenderWindow_drawSprite(BASE->window, rpg->glod[0].sprite, NULL);
}

void display_money(rpg_t *rpg)
{
    sfText *money = sfText_create();
    sfFont *font = sfFont_createFromFile(SUBTITLE);
    char *nbr_money = my_itoa(rpg->money);

    sfText_setString(money, nbr_money);
    free(nbr_money);
    sfText_setFont(money, font);
    sfText_setCharacterSize(money, 25);
    sfText_setPosition(money, (sfVector2f)
    {(GAME_VAR->p_pos.x - 175), (GAME_VAR->p_pos.y + 260)});
    sfText_setColor(money, sfBlack);
    sfRenderWindow_drawText(BASE->window, money, NULL);
    display_money_sprite(rpg);
}
