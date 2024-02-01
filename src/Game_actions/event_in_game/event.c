/*
** EPITECH PROJECT, 2022
** stock
** File description:
** close_window
*/

#include "my_rpg.h"

static void close_window(rpg_t *rpg)
{
    if (GAME_VAR->events.type == sfEvtClosed)
        sfRenderWindow_close(BASE->window);
}

static void check_pos_to_talk(rpg_t *rpg)
{
    if (TALK_GUNSMITH)
        if (GAME_VAR->events.type == sfEvtKeyPressed &&
        GAME_VAR->events.key.code == sfKeyLShift &&
        rpg->game->inv->open == 0)
            TALK->hotaru->key_pressed = 1;
    if (TALK_KENNET)
        if (GAME_VAR->events.type == sfEvtKeyPressed &&
        GAME_VAR->events.key.code == sfKeyLShift &&
        rpg->game->inv->open == 0)
            TALK->kenett->key_pressed = 1;
    if (TALK_GIRL)
        if (GAME_VAR->events.type == sfEvtKeyPressed &&
        GAME_VAR->events.key.code == sfKeyLShift &&
        rpg->game->inv->open == 0)
            TALK->kenett->key_pressed = 1;
    if (TALK_GIRL_FACE)
        if (GAME_VAR->events.type == sfEvtKeyPressed &&
        GAME_VAR->events.key.code == sfKeyLShift &&
        rpg->game->inv->open == 0)
            TALK->kenett->key_pressed = 1;
}

static void check_inv(rpg_t *rpg)
{
    if (GAME_VAR->events.type == sfEvtKeyPressed &&
    GAME_VAR->events.key.code == sfKeyI && rpg->game->inv->open == 1) {
        rpg->game->inv->open = 0;
        return;
    }
    if (GAME_VAR->events.type == sfEvtKeyPressed &&
    GAME_VAR->events.key.code == sfKeyI && rpg->game->inv->open == 0) {
        rpg->game->inv->open = 1;
        return;
    }
}

void check_quest(rpg_t *rpg)
{
    if (GAME_VAR->quest == 0 && GAME_VAR->events.type == sfEvtKeyPressed &&
    sfKeyboard_isKeyPressed(sfKeyK)) {
        GAME_VAR->quest = 1;
    } else if (GAME_VAR->quest == 1 && GAME_VAR->events.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyK) ) {
        GAME_VAR->quest = 0;
    }
}

void check_event_game(rpg_t *rpg)
{
    boss_events(rpg);
    check_pos_to_talk(rpg);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        MENUS[m_paused].back_text = sfTexture_createFromFile(MAP, sfFalse);
        my_specific_menus(rpg, MENUS[m_paused]);
    }
    if (GAME_VAR->events.type == sfEvtKeyPressed)
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            DISCUSS += 1;
            return;
        }
    check_attack_event(rpg);
    sfKeyboard_isKeyPressed(sfKeyLAlt) && GAME->capacity->invi->can_be_invi &&
    GAME->capacity->invi->drinked_potion ? GAME->capacity->invi->is_invisible
    = sfTrue : 0;
    check_tp(rpg);
    check_inv(rpg);
    check_window(rpg);
    close_window(rpg);
    check_quest(rpg);
    return;
}
