/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_invisiblility
*/

#include "my_rpg.h"
#include <stdlib.h>

static cap_tp_t *set_tp(void)
{
    cap_tp_t *tp = malloc(sizeof(cap_tp_t));

    tp->cooldown = sfClock_create();
    tp->clock_rect_start = sfClock_create();
    tp->cursor_sprite = sfSprite_create();
    tp->keyA_clock = sfClock_create();
    tp->cursor_texture = sfTexture_createFromFile(IS_AIMING, sfFalse);
    tp->elec_rect = (sfIntRect){0, 0, 192, 43};
    tp->elec_sprite = sfSprite_create();
    tp->elec_texture = sfTexture_createFromFile(START_TP, sfFalse);
    tp->is_aiming = sfFalse;
    tp->step = 0;
    return (tp);
}

static cap_invis_t *set_invisibility(void)
{
    cap_invis_t *invi = malloc(sizeof(cap_invis_t));

    invi->cooldown = sfClock_create();
    invi->time_left = sfClock_create();
    invi->set_tr = sfClock_create();
    invi->duration = 12000;
    invi->cooldown_val = 80000;
    invi->opacity = sfColor_fromRGBA(255, 255, 255, 255);
    invi->is_invisible = sfFalse;
    invi->can_be_invi = sfTrue;
    invi->step = 0;
    invi->drinked_potion = sfFalse;
    invi->can_get_potion = sfFalse;
    return (invi);
}

void set_capacity(rpg_t *rpg)
{
    GAME->capacity = malloc(sizeof(capacity_t));

    GAME->capacity->invi = set_invisibility();
    GAME->capacity->tp = set_tp();
}