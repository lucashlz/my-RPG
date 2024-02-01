/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** attack_capacity_events
*/

#include "my_rpg.h"

void change_type(rpg_t *rpg)
{
    GAME->curr_style->can_use_fire && sfKeyboard_isKeyPressed(sfKeyF)
    ? GAME_VAR->curr_type = fire,
    sfRenderWindow_setMouseCursorVisible(BASE->window, sfTrue),
    TP->is_aiming = sfFalse : 0;
    GAME->curr_style->can_use_elec && sfKeyboard_isKeyPressed(sfKeyE)
    ? GAME_VAR->curr_type = elec,
    sfRenderWindow_setMouseCursorVisible(BASE->window, sfTrue),
    TP->is_aiming = sfFalse : 0;
    GAME->curr_style->can_use_water && sfKeyboard_isKeyPressed(sfKeyW)
    ? GAME_VAR->curr_type = water,
    sfRenderWindow_setMouseCursorVisible(BASE->window, sfTrue),
    TP->is_aiming = sfFalse : 0;
    GAME->curr_style->can_use_fire || GAME->curr_style->can_use_water ||
    GAME->curr_style->can_use_elec ? GAME_VAR->can_attack = sfTrue : 0;
}

void check_attack_event(rpg_t *rpg)
{
    sfBool left = sfMouse_isButtonPressed(sfMouseLeft);
    sfBool right = sfMouse_isButtonPressed(sfMouseRight);

    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (BASIC_ATTK->cooldown_clock)) >= BASIC_ATTK->cooldown &&
    GAME_VAR->is_attacking < 0 && GAME_VAR->can_attack) {
        if (left && GAME_VAR->curr_type == water)
            BASIC_ATTK->atk_resize = (sfVector2f){1, 0.4};
        if (right && GAME_VAR->curr_type == water)
            BASIC_ATTK->atk_resize = (sfVector2f){0.4, 1};
        if ((right || left) && !TP->is_aiming)
            attack_setup(rpg);
    }
    change_type(rpg);
}
