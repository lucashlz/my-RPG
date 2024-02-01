/*
** EPITECH PROJECT, 2022
** my_rpg_struct.h
** File description:
** my_rpg_struct
*/

#include "my_rpg_enum.h"
#include "my_rpg_set_text_game.h"
#include "my_rpg_smoke.h"
#include "my_rpg_transition.h"
#include "my_rpg_quest.h"
#include "my_rpg_money_struct.h"

#ifndef MY_RPG_STRUCT_H_
    #define MY_RPG_STRUCT_H_

typedef struct st_event {
    sfVector2f mouse_cord;
    sfKeyCode key;
} event_t;

typedef struct st_players {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock_bako;
    sfTime time;
    float sec;
} players_t;

typedef struct st_spell {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float sec;
} spell_t;

typedef struct st_backgroud {
    sfClock *clock;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfClock *clock_background;
    sfIntRect rect;
    sfTime time;
    float sec;
} background_t;

typedef struct st_png_above_map {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfClock *clock_background;
    sfTime time;
    sfIntRect rect;
    float sec;
} above_map_t;

typedef struct st_particle {
    sfRectangleShape *rect;
    sfClock *orientation_clock;
    sfVector2f pos;
    sfColor color;
    int speed;
    int direction;
} particle_t;

typedef struct mob_s {
    int HP;
    int speed;
    int damage;
    int direction;
    float sec;
    int atk_cooldown_time;
    sfBool is_attacked;
    sfBool is_attacking;
    sfBool can_attack;
    sfTime time;
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f pos;
    sfClock *clock;
    sfClock *move_clock;
    sfClock *attacked_clock;
    sfClock *attack_clock;
    sfClock *attack_cooldown;
} mob_t;

typedef struct mob_gestion_s {
    int nb_mobs;
    mob_t *mob;
    sfVector2f *spawns;
    sfClock *spawn_clock;
} mob_gestion_t;

typedef struct st_obj {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f scale;
    struct st_obj *next;
} obj_t;

typedef struct button_s {
    int type;
    sfSound *sound;
    sfSoundBuffer *sound_buffer;
    sfTexture *text;
    sfSprite *sprite;
    sfTexture *tr_text;
    sfSprite *tr_sprite;
    sfVector2f pos;
    sfVector2f resize;
    sfSprite *actual_sprite;
    sfTexture *actual_text;
    sfIntRect rect;
} button_t;

typedef struct game_text_s {
        sfTexture *map_text;
    sfTexture *start_tp;
    sfTexture *end_tp;
} game_text_t;

typedef struct menu_s {
    int nb_buttons;
    char *name;
    char *name_text_path;
    char *menu_text_path;
    sfTexture *name_text;
    sfTexture *back_text;
    sfTexture *menu_text;
    sfSprite *back_sprite;
    sfSprite *name_sprite;
    sfSprite *menu_sprite;
    sfVector2f name_pos;
    sfVector2f menu_pos;
    sfVector2f name_resize;
    sfIntRect name_rect;
    sfBool is_active;
    sfBool have_a_back_text;
    button_t *buttons;
    sfEvent events;
    sfMusic *music;
} menu_t;

typedef struct st_help_menu {
    obj_t *obj;
    button_t *button;
    button_t *exit_help;
} help_menu_t;

typedef struct st_ingame {
    sfClock *clock;
} ingame_t;

typedef struct st_utils {
    enum_state_t state;
} utils_t;

typedef struct st_option {
    sfVideoMode video;
} option_t;

typedef struct st_tools {
    sfView *view;
    sfVector2f map_size;
} tools_t;

typedef struct st_font {
    sfFont *font;
} font_t;

typedef struct st_music {
    sfClock *clock_step;
    sfTime time;
    sfMusic *step;
    sfMusic *coll_item;
    sfMusic *die;
    sfMusic *discussion;
    sfMusic *switch_item;
    sfMusic *voice_win;
    sfMusic *speech_start;
    sfMusic *music_in_game;
    sfMusic *thunder;
    sfMusic *ail;
    sfMusic *kenett_1;
    sfMusic *kenett_2;
    sfMusic *kenett_3;
    sfMusic *kenett_4;
    sfMusic *kenett_5;
} music_t;

typedef struct st_cap_invis {
    int duration;
    int cooldown_val;
    int step;
    sfBool is_invisible;
    sfBool can_be_invi;
    sfClock *time_left;
    sfClock *cooldown;
    sfClock *set_tr;
    sfColor opacity;
    sfBool drinked_potion;
    sfBool can_get_potion;
} cap_invis_t;

typedef struct st_sound {
    sfSound *kenett_wings;
    sfSoundBuffer *kenett_wings_buff;
} sound_t;

typedef struct menu_base_s {
    sfBool should_respawn;
    sfTexture *curr_back_text;
    sfClock *menu_clock;
    sfTexture *play_trans_text;
    sfSprite *play_trans_sprite;
    sfIntRect trans_rect;
} menu_base_t;

typedef struct st_base {
    int window_size;
    sfBool sound_is_on;
    sfBool music_is_on;
    sfBool is_in_game;
    sfRenderWindow *window;
    menu_base_t menu_base;
} base_t;

typedef struct obstacles_s {
    sfVector2f pos;
    sfVector2f col_rect;
    char type;
} obstacles_t;

typedef struct st_discussion {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock_discuss;
    sfTime time;
    float sec;
    int opacity;
} discussion_t;

typedef struct st_portrait {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock_bako;
    sfTime time;
    int opacity;
} portrait_t;

typedef struct st_kenett {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock_bako;
    sfTime time;
    sfClock *clock;
    float sec;
    int display;
    int valid;
} kenett_t;

typedef struct st_pnj {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float sec;
    sfColor opacity;
} pnj_t;

typedef struct st_animals {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float sec;
    int opacity;
} animals_t;

typedef struct st_key_img {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    int zoom;
    float sec;
    int opacity;
} key_img_t;

typedef struct base_attacks_s {
    sfIntRect atk_rect;
    sfSprite *atk_sprite;
    sfTexture *atk_texture;
    sfClock *move_rect;
    sfClock *cooldown_clock;
    sfVector2f atk_pos;
    sfVector2f atk_resize;
    sfVector2f *hit_points;
    sfClock *damage_cooldown;
    int direction;
    float knockback;
    int damage_cooldown_val;
    int damage_left;
    int nb_hit_points;
    float atk_rotate;
    int damage;
    int atk_cost;
    int attack_speed;
    int attack_max;
    char *cost_type;
    int cooldown;
    sfSound *atck_sound;
    sfSoundBuffer *atk_sound_buff;
} base_attacks_t;

typedef struct bars_s {
    sfSprite *bar_sprite;
    sfTexture *bar_texture;
    sfSprite *back_bar_sprite;
    sfTexture *back_bar_texture;
    sfVector2f bar_pos;
    sfIntRect bar_rect;
} bars_t;

typedef struct attacks_s {
    base_attacks_t *basic;
    sfBool can_use_water;
    sfBool can_use_fire;
    sfBool can_use_elec;
} attacks_t;

typedef struct st_moovie_img {
    int zoom;
    float sec;
    float opacity;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
} moovie_img_t;

typedef struct st_day_night {
    sfTexture *night_text;
    sfSprite *night_sprite;
    sfTexture *rev_night_text;
    sfSprite *rev_night_sprite;
    sfRectangleShape *rect;
    sfColor obscurity;
    sfClock *time_clock;
    sfClock *seconds;
    sfSound *morning;
    sfSound *night;
    sfSoundBuffer *morning_buff;
    sfSoundBuffer *night_buff;
    int int_time;
} day_night_t;

typedef struct st_text {
    sfText *txt;
    sfFont *Font;
    sfVector2f pos;
    sfVector2f scale;
    sfClock *clock;
    sfTime time;
    int max_sec;
    float sec;
    float opacity;
} text_t;

typedef struct obj_inv_s {
    sfSprite *sprite;
    sfTexture *texture;
} obj_inv_t;

typedef struct txt_inv_s {
    sfText *txt;
    sfFont *Font;
    sfVector2f pos;
    sfVector2f scale;
} txt_inv_t;

typedef enum item_e {
    apple,
    baie,
    cheese,
    fish_orange,
    mush_orange,
    mush_purple,
    orange,
    po_green,
    po_purple,
    rope,
    karrot,
} item_e;

typedef enum weapon_e {
    fire_w,
    thunder_w,
    water_w,
} weapon_e;

typedef struct items_s {
    int used;
    char *name;
    int idx_case;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
} items_t;

typedef struct obj_map_s {
    sfVector2f pos;
    sfVector2f col_rect;
    char type;
    sfBool can_pick;
} obj_map_t;

typedef struct grab_wich_item_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
} grab_wich_item_t;

typedef struct grab_item_s {
    grab_wich_item_t gw[12];
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
} grab_item_t;

typedef struct caches_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
} caches_t;

typedef struct boss_s {
    mob_gestion_t *minions_gest;
    sfVector2f pos;
    sfSprite *boss_sprite;
    sfTexture *boss_texture;
    sfVector2f scale;
    sfClock *boss_clock;
    sfIntRect rect;
    int life;
    bars_t life_bar;
} boss_t;

typedef struct boss_gest_s {
    boss_t *akaza;
    sfSprite *cave_sprite;
    sfTexture *arena_texture;
    sfMusic *fight_music;
    sfSprite *darkness_sprite;
    sfTexture *darkness_texture;
    sfColor darkness;
    sfIntRect cave_entry;
    sfVector2f cave_entry_pos;
    sfBool is_in_arena;
    obstacles_t *obs;
    int nb_obs;
} boss_gest_t;

typedef struct details_item_s {
    sfText *txt;
    sfFont *Font;
    sfVector2f pos;
    sfVector2f scale;
} details_item_t;

typedef struct inv_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f player_pose;
    sfVector2f scale;
    obj_inv_t *life;
    obj_inv_t *life_bg;
    txt_inv_t *txt_life;
    char *item_str;
    int nb_inv;
    grab_item_t *grab;
    obj_map_t *item_obj;
    items_t items[27];
    items_t equiped[5];
    caches_t caches[9];
    details_item_t details_it[3];
    int open;
} inv_t;

typedef struct cap_tp_s {
    sfSprite *cursor_sprite;
    sfTexture *cursor_texture;
    sfSprite *elec_sprite;
    sfTexture *elec_texture;
    sfClock *clock_rect_start;
    sfIntRect elec_rect;
    sfBool is_aiming;
    sfClock *keyA_clock;
    sfClock *cooldown;
    int step;
} cap_tp_t;

typedef struct st_capacity {
    cap_invis_t *invi;
    cap_tp_t *tp;
} capacity_t;

typedef struct talk_key_s {
    sfText *txt;
    sfFont *Font;
    sfVector2f pos_txt;
    sfVector2f scale_txt;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
} talk_key_t;

typedef struct discuss_pnj_s {
    int key_pressed;
    int valid_discuss;
    int valid_transition;
    int state;
    char **wich_dialogue;
} discuss_pnj_t;

typedef struct talk_s {
    talk_key_t *t_key;
    discuss_pnj_t *kenett;
    discuss_pnj_t *hotaru;
    int valid_discuss;
} talk_t;

typedef struct st_game_var {
    int input_key_p;
    int input_key_m;
    int nb_obs;
    int which_discuss;
    int which_background;
    int which_speech;
    int curr_type;
    int is_attacking;
    int valid_write;
    int transition;
    int steps_game_talk;
    int quest;
    int bako_life;
    int txt;
    sfBool potion;
    sfBool can_attack;
    char *obs_str;
    sfVector2f original_bako_pos;
    sfBool is_taking_damage;
    sfSprite *curr_bako_sprite;
    sfView *kenett_start_view;
    sfView *view;
    sfMusic *curr_music;
    sfEvent events;
    sfBool is_active;
    sfVector2f p_pos;
    sfVector2f p_in_screen;
} game_var_t;

typedef struct st_game_start_var_kenett {
    int kenett_display;
    int kenett_smoke;
    int kenett_start_anim;
    int count;
    mob_t kenett_mob_animation;
} game_start_var_kenett_t;

typedef struct st_girl {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    mob_gestion_t mobs;
    float sec;
} girl_t;

typedef struct mob_direct_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
} mob_direct_t;

typedef struct st_game {
    obstacles_t *obst;
    music_t *music;
    sound_t *sound;
    day_night_t *day_night;
    mob_gestion_t *mob_gest;
    attacks_t *curr_style;
    inv_t *inv;
    talk_t *talk;
    capacity_t *capacity;
    bars_t bars[1];
    players_t p[9];
    text_t write[21];
    background_t b[4];
    above_map_t a[1];
    discussion_t d[3];
    portrait_t port[16];
    key_img_t *key[2];
    moovie_img_t moovie[9];
    pnj_t pnj[30];
    animals_t animals[5];
    kenett_t kenett[6];
    spell_t spell[1];
    text_wait_t text_wait[1];
    set_text_game_t *text_game;
    girl_t girl[1];
    mob_direct_t mob_direct[4];
    smoke_t smoke[5];
    transition_t *trans;
    quest_t quest[2];
    quest_text_t q_text[8];
    boss_gest_t *boss_gest;
    particle_t firefly[600];
    particle_t fire_spark[100];
} game_t;

typedef struct st_rpg {
    int deplacement;
    int anim_background;
    int anim_png;
    int money;
    money_t *glod;
    utils_t *utils;
    event_t *event;
    option_t *option;
    tools_t *tools;
    menu_t menus[4];
    game_t *game;
    game_var_t *game_var;
    base_t *base;
    game_start_var_kenett_t *kent;
} rpg_t;

#endif
