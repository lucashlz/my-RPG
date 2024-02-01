/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** boss_events
*/

#include "my_rpg.h"

void exit_from_arena(rpg_t *rpg)
{
    BOSS_GEST->is_in_arena = sfFalse;
    sfView_reset(GAME_VAR->view, (sfFloatRect){0, 0, 1920, 1080});
    sfView_setCenter(GAME_VAR->view, GAME_VAR->p_pos);
    sfView_zoom(GAME_VAR->view, 0.55);
    sfRenderWindow_setView(BASE->window, GAME_VAR->view);
}

void boss_events(rpg_t *rpg)
{
    if (BOSS_GEST->is_in_arena && sfKeyboard_isKeyPressed(sfKeyM)) {
        GAME_VAR->p_pos = (sfVector2f){2640, 1680};
        BOSS_GEST->is_in_arena = sfFalse;
    }
    if (bako_is_on_entry(rpg) && sfKeyboard_isKeyPressed(sfKeyEnter) &&
    !BOSS_GEST->is_in_arena) {
        BOSS_GEST->is_in_arena = sfTrue;
        GAME_VAR->p_pos = (sfVector2f){1310, 1752};
        sfView_zoom(GAME_VAR->view, 1.15);
        add_mobs(rpg, 1, BOSS_GEST->akaza->minions_gest);
        boss_fight(rpg);
        exit_from_arena(rpg);
    }
}

void check_tp(rpg_t *rpg)
{
    sfVector2f coo = sfSprite_getPosition(TP->cursor_sprite);

    if (GAME_VAR->curr_type != elec)
        return;
    if (GAME_VAR->curr_type == elec && sfKeyboard_isKeyPressed(sfKeyA) &&
    sfTime_asMilliseconds(sfClock_getElapsedTime(TP->keyA_clock)) > 250 &&
    sfTime_asMilliseconds(sfClock_getElapsedTime(TP->cooldown)) > 5000) {
        if (!TP->is_aiming) {
            sfRenderWindow_setMouseCursorVisible(BASE->window, sfFalse);
            TP->is_aiming = sfTrue;
        } else {
            TP->is_aiming = sfFalse;
            sfRenderWindow_setMouseCursorVisible(BASE->window, sfTrue);
        }
        sfClock_restart(TP->keyA_clock);
    }
    if (TP->is_aiming && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (!is_an_obstacle_here(rpg, coo) && coo.x > 613 && coo.x < 4477 &&
        coo.y < 2841 && coo.y > 580)
            TP->step = 1;
    }
}
