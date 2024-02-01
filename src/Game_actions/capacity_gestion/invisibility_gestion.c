/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** invisibility_gestion
*/

#include "my_rpg.h"

static void become_invisible(rpg_t *rpg)
{
    if (GAME->capacity->invi->opacity.a > 55) {
        GAME->capacity->invi->opacity.a--;
        sfClock_restart(GAME->capacity->invi->set_tr);
        sfClock_restart(GAME->capacity->invi->time_left);
    }
    GAME->capacity->invi->opacity.a <= 55 ? GAME->capacity->invi->step = 1 : 0;
}

static void is_invisible(rpg_t *rpg)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (GAME->capacity->invi->time_left)) > GAME->capacity->invi->duration)
        GAME->capacity->invi->step = 2;
}

static void become_visible(rpg_t *rpg)
{
    if (GAME->capacity->invi->opacity.a <= 254) {
        GAME->capacity->invi->opacity.a++;
        sfClock_restart(GAME->capacity->invi->set_tr);
    }
    GAME->capacity->invi->opacity.a > 254 ?
    GAME->capacity->invi->step = 3 : 0;
}

void invisibility_gestion(rpg_t *rpg)
{
    sfSprite_setColor(GAME_VAR->curr_bako_sprite,
    GAME->capacity->invi->opacity);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
    GAME->capacity->invi->cooldown)) >=
    GAME->capacity->invi->cooldown_val)
        GAME->capacity->invi->can_be_invi = sfTrue;
    if (GAME->capacity->invi->is_invisible) {
        GAME->capacity->invi->step == 0 ? become_invisible(rpg) : 0;
        GAME->capacity->invi->step == 1 ? is_invisible(rpg) : 0;
        GAME->capacity->invi->step == 2 ? become_visible(rpg) : 0;
        if (GAME->capacity->invi->step == 3) {
            sfClock_restart(GAME->capacity->invi->time_left);
            sfClock_restart(GAME->capacity->invi->cooldown);
            GAME->capacity->invi->is_invisible = sfFalse;
            GAME->capacity->invi->can_be_invi = sfFalse;
            GAME->capacity->invi->step = 0;
        }
    }
}