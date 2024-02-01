/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_rpg_struct
*/

#include "my_rpg.h"
#include <stdlib.h>
#include <stdio.h>

menu_base_t set_menu_base_struct(void)
{
    menu_base_t menu_b;

    menu_b.curr_back_text = sfTexture_createFromFile(WLCM_MENU_PATH, sfFalse);
    menu_b.should_respawn = sfFalse;
    menu_b.menu_clock = sfClock_create();
    menu_b.play_trans_sprite = sfSprite_create();
    menu_b.play_trans_text =
        sfTexture_createFromFile(TRANSITION_TEXT, sfFalse);
    menu_b.trans_rect = (sfIntRect){0, 0, 1920, 1080};
    return (menu_b);
}

base_t *set_base_struct(void)
{
    base_t *base = malloc(sizeof(base_t));
    sfVideoMode videomode = {1920, 1080, 60};

    base->window_size = 0;
    base->menu_base = set_menu_base_struct();
    base->window = sfRenderWindow_create(videomode,
    "Bako's Adventure", sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(base->window, 60);
    base->is_in_game = sfFalse;
    base->music_is_on = sfTrue;
    base->sound_is_on = sfTrue;
    return (base);
}

static void set_variables_struct(rpg_t *rpg)
{
    GAME_VAR->is_taking_damage = sfFalse;
    GAME_VAR->obs_str = extract_str(OBS_TXT, OBS_TXT_SIZE);
    GAME_VAR->nb_obs = 0;
    GAME_VAR->input_key_p = 0;
    GAME_VAR->input_key_m = 2;
    GAME_VAR->steps_game_talk = 0;
    GAME_VAR->p_pos = (sfVector2f){2040, 2776};
    GAME_VAR->p_in_screen = (sfVector2f){860, 540};
    GAME_VAR->curr_type = water;
    GAME_VAR->is_attacking = -1;
    GAME->curr_style = malloc(sizeof(attacks_t));
    GAME->curr_style->can_use_water = sfFalse;
    GAME->curr_style->can_use_fire = sfFalse;
    GAME->curr_style->can_use_elec = sfFalse;
    BASIC_ATTK = malloc(sizeof(base_attacks_t));
    GAME_VAR->bako_life = 100;
    GAME_VAR->original_bako_pos = (sfVector2f){2020, 2820};
    GAME_VAR->view = sfView_createFromRect((sfFloatRect){0, 0, 1920, 1080});
    GAME_VAR->kenett_start_view = sfView_createFromRect((sfFloatRect)
    {0, 0, 1920, 1080});
    GAME_VAR->can_attack = sfFalse;
    sfView_setCenter(GAME_VAR->view, GAME_VAR->p_pos);
    sfView_zoom(GAME_VAR->kenett_start_view, 0.45);
    sfView_zoom(GAME_VAR->view, 0.55);
}

static void set_talk(rpg_t *rpg)
{
    TALK = malloc(sizeof(talk_t));
    TALK->t_key = malloc(sizeof(talk_key_t));
    TALK->hotaru = malloc(sizeof(discuss_pnj_t));
    TALK->kenett = malloc(sizeof(discuss_pnj_t));
    TALK->kenett->valid_discuss = 0;
    TALK->kenett->valid_transition = 0;
    TALK->kenett->key_pressed = 0;
    TALK->kenett->state = f_meet;
    TALK->kenett->wich_dialogue = NULL;
    TALK->hotaru->key_pressed = 0;
    TALK->hotaru->state = f_meet;
    TALK->hotaru->wich_dialogue = NULL;
    TALK->t_key->sprite = sfSprite_create();
    TALK->t_key->texture = sfTexture_createFromFile(BAKO_TALK, NULL);
    TALK->t_key->scale = (sfVector2f){0.8, 0.8};
    sfSprite_setTexture(TALK->t_key->sprite, TALK->t_key->texture, sfTrue);
    sfSprite_setScale(TALK->t_key->sprite, TALK->t_key->scale);
}

static void set_mob_direct(rpg_t *rpg)
{
    GAME->mob_direct[north].sprite = sfSprite_create();
    GAME->mob_direct[north].texture = sfTexture_createFromFile(MOB_TOP, NULL);
    GAME->mob_direct[north].scale = (sfVector2f){0.3, 0.3};
    sfSprite_setTexture(GAME->mob_direct[north].sprite,
    GAME->mob_direct[north].texture, sfTrue);
    sfSprite_setScale(GAME->mob_direct[north].sprite,
    GAME->mob_direct[north].scale);
    GAME->mob_direct[south].sprite = sfSprite_create();
    GAME->mob_direct[south].texture = sfTexture_createFromFile(MOB_BOT, NULL);
    GAME->mob_direct[south].scale = (sfVector2f){0.3, 0.3};
    sfSprite_setTexture(GAME->mob_direct[south].sprite,
    GAME->mob_direct[south].texture, sfTrue);
    sfSprite_setScale(GAME->mob_direct[south].sprite,
    GAME->mob_direct[south].scale);
    GAME->mob_direct[east].sprite = sfSprite_create();
    GAME->mob_direct[east].texture = sfTexture_createFromFile(MOB_LEFT, NULL);
    GAME->mob_direct[east].scale = (sfVector2f){0.3, 0.3};
    sfSprite_setTexture(GAME->mob_direct[east].sprite,
    GAME->mob_direct[east].texture, sfTrue);
    sfSprite_setScale(GAME->mob_direct[east].sprite,
    GAME->mob_direct[east].scale);
    GAME->mob_direct[west].sprite = sfSprite_create();
    GAME->mob_direct[west].texture = sfTexture_createFromFile(MOB_RIGHT, NULL);
    GAME->mob_direct[west].scale = (sfVector2f){0.3, 0.3};
    sfSprite_setTexture(GAME->mob_direct[west].sprite,
    GAME->mob_direct[west].texture, sfTrue);
    sfSprite_setScale(GAME->mob_direct[west].sprite,
    GAME->mob_direct[west].scale);
}

static void set_struct_game(rpg_t *rpg)
{
    set_variables_struct(rpg);
    set_obstacles_struct(rpg);
    set_players(rpg);
    set_background_map(rpg);
    set_music(rpg);
    set_discuss(rpg);
    set_portraits_bako(rpg);
    set_portraits_hotaru(rpg);
    set_portraits_kenett(rpg);
    set_key_img(rpg);
    set_moovie_img(rpg);
    set_kenett(rpg);
    set_pnj(rpg);
    set_style(rpg);
    set_font(rpg);
    set_day_night(rpg);
    set_inventory(rpg);
    set_weapon(rpg);
    set_item_inv(rpg);
    set_talk(rpg);
    set_mob_struct(rpg);
    set_spell(rpg);
    set_text_wait(rpg);
    set_text_game(rpg);
    set_grab_items(rpg);
    set_smoke(rpg);
    set_capacity(rpg);
    set_bars(rpg);
    set_transition(rpg);
    set_quest(rpg);
    set_caches(rpg);
    set_details_items(rpg);
    set_boss(rpg);
    set_fireflyes(rpg);
    set_fire_spark(rpg);
    set_money(rpg);
    set_mob_direct(rpg);
    set_girl(rpg);
}

rpg_t *set_rpg_struct(rpg_t *rpg)
{
    rpg = malloc(sizeof(rpg_t));
    rpg->game = malloc(sizeof(game_t));
    rpg->game_var = malloc(sizeof(game_var_t));
    rpg->kent = malloc(sizeof(game_start_var_kenett_t));
    rpg->game->text_game = malloc(sizeof(set_text_game_t));
    rpg->game->trans = malloc(sizeof(transition_t));
    rpg->base = set_base_struct();
    rpg->menus[m_welcome] = set_wlcm_menu_struct();
    rpg->menus[m_settings] = set_settings_menu_struct();
    rpg->menus[m_paused] = set_pause_menu_struct();
    rpg->menus[m_died] = set_died_menu_struct();
    set_struct_game(rpg);
    return (rpg);
}
