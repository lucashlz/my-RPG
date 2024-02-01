/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** transition
*/

#include "my_rpg.h"

void dark_trans_special_text_teleportation(rpg_t *rpg)
{
    if (TALK->kenett->valid_transition == 0 && GAME->trans->color.a <= 255) {
        GAME->trans->color.a == 255 ? TALK->kenett->valid_transition = 1,
        GAME_VAR->p_pos.x = TEL_X, GAME_VAR->p_pos.y = TEL_Y, 
        GAME->girl[0].pos.x = TEL_X + 30, GAME->girl[0].pos.y = TEL_Y - 164 : 0;
        GAME->trans->color.a += 5;
    }
    if (TALK->kenett->valid_transition == 1 && GAME->trans->color.a >= 0) {
        if (GAME->trans->color.a == 0) {
            STEPS_TALK++;
            return;
        }
        GAME->trans->color.a -= 5;
    }
    sfRectangleShape_setFillColor(GAME->trans->rect, GAME->trans->color);
    sfRenderWindow_drawRectangleShape
    (BASE->window, GAME->trans->rect, NULL);
}

void dark_trans_special_text(rpg_t *rpg, int type)
{
    (void)type;
    if (TALK->kenett->valid_transition == 0 && GAME->trans->color.a <= 255) {
        if (GAME->trans->color.a == 255)
            TALK->kenett->valid_transition = 1;
        GAME->trans->color.a += 5;
    }
    if (TALK->kenett->valid_transition == 1 && GAME->trans->color.a >= 0) {
        if (GAME->trans->color.a == 0) {
            STEPS_TALK++;
            return;
        }
        GAME->trans->color.a -= 5;
    }
    sfRectangleShape_setFillColor(GAME->trans->rect, GAME->trans->color);
    sfRenderWindow_drawRectangleShape
    (BASE->window, GAME->trans->rect, NULL);
}

void dark_trans(rpg_t *rpg, int type)
{
    (void)type;
    if (TALK->kenett->valid_transition == 0 && GAME->trans->color.a <= 255) {
        if (GAME->trans->color.a == 255)
            TALK->kenett->valid_transition = 1;
        GAME->trans->color.a += 5;
    }
    if (TALK->kenett->valid_transition == 1 && GAME->trans->color.a > 0) {
        if (GAME->trans->color.a == 0)
            return;
        GAME->trans->color.a -= 5;
    }
    sfRectangleShape_setFillColor(GAME->trans->rect, GAME->trans->color);
    sfRenderWindow_drawRectangleShape
    (BASE->window, GAME->trans->rect, NULL);
}
