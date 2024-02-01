/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** tp_gestion
*/

#include "my_rpg.h"

void my_aim_cursor(rpg_t *rpg)
{
    sfVector2i coo = sfMouse_getPositionRenderWindow(BASE->window);

    GAME->capacity->tp->cursor_sprite = sfSprite_create();
    sfSprite_setTexture(GAME->capacity->tp->cursor_sprite,
    GAME->capacity->tp->cursor_texture, sfFalse);
        sfSprite_setPosition(GAME->capacity->tp->cursor_sprite,
        (sfVector2f){(coo.x / 2 + (GAME_VAR->p_pos.x -
        GAME_VAR->p_in_screen.x) + 370), coo.y / 2 + (GAME_VAR->p_pos.y -
        GAME_VAR->p_in_screen.y) + 288});
    sfRenderWindow_drawSprite(BASE->window,
    GAME->capacity->tp->cursor_sprite, sfFalse);
}

static void move_elec_rect(rpg_t *rpg)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
    GAME->capacity->tp->clock_rect_start)) >= 25) {
        if (GAME->capacity->tp->elec_rect.left < 772)
            GAME->capacity->tp->elec_rect.left += 193;
        else {
            if (GAME->capacity->tp->step == 1)
            GAME_VAR->p_pos = sfSprite_getPosition
            (GAME->capacity->tp->cursor_sprite);
            GAME->capacity->tp->step++;
            GAME->capacity->tp->elec_rect.left = 0;
        }
        sfClock_restart(GAME->capacity->tp->clock_rect_start);
    }
}

void tp_bako(rpg_t *rpg)
{
    if (GAME->capacity->tp->step == 1)
        GAME->capacity->tp->elec_texture =
        sfTexture_createFromFile(START_TP, sfFalse);
    else if (GAME->capacity->tp->step == 2)
        GAME->capacity->tp->elec_texture =
        sfTexture_createFromFile(END_TP, sfFalse);
    move_elec_rect(rpg);
    sfSprite_setTextureRect(GAME->capacity->tp->elec_sprite,
    GAME->capacity->tp->elec_rect);
    sfSprite_setTexture(GAME->capacity->tp->elec_sprite,
    GAME->capacity->tp->elec_texture, sfFalse);
    sfSprite_setPosition(GAME->capacity->tp->elec_sprite,
    (sfVector2f){GAME_VAR->p_pos.x - 100, GAME_VAR->p_pos.y});
    sfRenderWindow_drawSprite(BASE->window,
    GAME->capacity->tp->elec_sprite, sfFalse);
    if (GAME->capacity->tp->step == 3) {
        sfRenderWindow_setMouseCursorVisible(BASE->window, sfTrue);
        sfClock_restart(TP->cooldown);
        TP->step = 0;
    }
}

void tp_gestion(rpg_t *rpg)
{
    if (GAME_VAR->curr_type != elec)
        return;
    if (GAME->capacity->tp->is_aiming)
        my_aim_cursor(rpg);
    if (GAME->capacity->tp->step > 0 && GAME->capacity->tp->step < 3) {
        GAME->capacity->tp->is_aiming = sfFalse;
        tp_bako(rpg);
    }
}