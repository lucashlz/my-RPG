/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_player_attacks
*/

#include "my_rpg.h"
#include <stdlib.h>

void set_global_basic_attack(rpg_t *rpg)
{
    BASIC_ATTK->atk_pos = (sfVector2f){0, 0};
    BASIC_ATTK->atk_rect = (sfIntRect){0, 0, 84, 84};
    BASIC_ATTK->atk_rotate = 0.0;
    BASIC_ATTK->atk_sprite = sfSprite_create();
    BASIC_ATTK->move_rect = sfClock_create();
    BASIC_ATTK->cooldown_clock = sfClock_create();
    BASIC_ATTK->atck_sound = sfSound_create();
    BASIC_ATTK->damage_cooldown = sfClock_create();
    BASIC_ATTK->hit_points = NULL;
}

static void set_water_stat(rpg_t *rpg)
{
    BASIC_ATTK->atk_texture =
    sfTexture_createFromFile(WATER_basic_ATTACK, sfFalse);
    BASIC_ATTK->atk_cost = 0;
    BASIC_ATTK->cooldown = 350;
    BASIC_ATTK->cost_type = NULL;
    BASIC_ATTK->damage = 25;
    BASIC_ATTK->attack_max = 336;
    BASIC_ATTK->attack_speed = 2.5;
    BASIC_ATTK->atk_sound_buff = sfSoundBuffer_createFromFile
    (WATER_ATK_SOUND);
    BASIC_ATTK->knockback = 0.2;
    BASIC_ATTK->damage_cooldown_val = 0;
    BASIC_ATTK->damage_left = 1;
    BASIC_ATTK->nb_hit_points = 6;
}

static void set_fire_stat(rpg_t *rpg)
{
    BASIC_ATTK->atk_texture =
    sfTexture_createFromFile(FIRE_basic_ATTACK, sfFalse);
    BASIC_ATTK->atk_cost = 0;
    BASIC_ATTK->cooldown = 1600;
    BASIC_ATTK->cost_type = NULL;
    BASIC_ATTK->damage = 40;
    BASIC_ATTK->attack_max = 840;
    BASIC_ATTK->attack_speed = 4;
    BASIC_ATTK->atk_sound_buff = sfSoundBuffer_createFromFile
    (FIRE_ATK_SOUND);
    BASIC_ATTK->knockback = 2.0;
    BASIC_ATTK->damage_cooldown_val = 150;
    BASIC_ATTK->damage_left = 2;
    BASIC_ATTK->nb_hit_points = 7;
}

static void set_elec_stat(rpg_t *rpg)
{
    BASIC_ATTK->atk_texture =
    sfTexture_createFromFile(ELEC_ATTACK, sfFalse);
    BASIC_ATTK->atk_cost = 0;
    BASIC_ATTK->cooldown = 500;
    BASIC_ATTK->cost_type = NULL;
    BASIC_ATTK->damage = 20;
    BASIC_ATTK->attack_max = 588;
    BASIC_ATTK->attack_speed = 1;
    BASIC_ATTK->atk_sound_buff = sfSoundBuffer_createFromFile
    (ELEC_ATK_SOUND);
    BASIC_ATTK->knockback = 0;
    BASIC_ATTK->damage_cooldown_val = 0;
    BASIC_ATTK->damage_left = 1;
    BASIC_ATTK->nb_hit_points = 5;
}

void set_style(rpg_t *rpg)
{
    set_global_basic_attack(rpg);
    GAME_VAR->curr_type == water ? set_water_stat(rpg) : 0;
    GAME_VAR->curr_type == fire ? set_fire_stat(rpg) : 0;
    GAME_VAR->curr_type == elec ? set_elec_stat(rpg) : 0;
    sfSprite_setTexture(BASIC_ATTK->atk_sprite,
    BASIC_ATTK->atk_texture, sfFalse);
}