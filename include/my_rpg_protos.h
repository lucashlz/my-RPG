/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_rpg_includes
*/

#ifndef MY_RPG_INCLUDES_H_
    #define MY_RPG_INCLUDES_H_

void set_quest(rpg_t *rpg);
void display_quest(rpg_t *rpg);
void dark_trans_special_text(rpg_t *rpg, int type);
void dark_trans_special_text_teleportation(rpg_t *rpg);
void find_the_girl(rpg_t *rpg);
void check_item_potion(rpg_t *rpg);
void retrieve_girl_talk_kenett(rpg_t *rpg);
void display_kenett_talk(rpg_t *rpg, sfVector2f pos);
void display_money(rpg_t *rpg);
void talk_girl_help(rpg_t *rpg);
void talk_hotaru_new_sword(rpg_t *rpg);

void set_money(rpg_t *rpg);
void set_transition(rpg_t *rpg);
void dark_trans(rpg_t *rpg, int type);

void set_smoke(rpg_t *rpg);
void display_smoke(rpg_t *rpg);

void set_girl(rpg_t *rpg);
void display_girl(rpg_t *rpg);

void baco_text(rpg_t *rpg);
void kenett_text(rpg_t *rpg);
void hotaru_text(rpg_t *rpg);
void write_text_kenett(rpg_t *rpg, int which, int x, int y);
void write_text_bako(rpg_t *rpg, int which, int x, int y);
void write_text_hotaru(rpg_t *rpg, int which, int x, int y);

void moove_smoke_kenett(rpg_t *rpg, int which);
void new_view_start_kennet(rpg_t *rpg);
void advance_kenett(rpg_t *rpg);
void display_mob_kenett(rpg_t *rpg);
void my_clock_spell(rpg_t *rpg, int which);
void moove_spell(rpg_t *rpg, int which, sfVector2f pos);
void advance_kenett(rpg_t *rpg);

char **text(char *path, int nbr_char);
void display_transition_start_kenett(rpg_t *rpg);
void wait_to_press_enter(rpg_t *rpg);
void set_text_wait(rpg_t *rpg);
void set_text_game(rpg_t *rpg);

void set_music(rpg_t *rpg);
void stop_music(sfMusic *music);
void set_spell(rpg_t *rpg);

void dialogue_kenett(rpg_t *rpg);
void dialogue_hotaru(rpg_t *rpg);
void display_key(rpg_t *rpg, sfVector2f pos);
void display_bubble(rpg_t *rpg, sfVector2f pos, int key_enter);
void set_portraits_kenett(rpg_t *rpg);

void clock_speech_zero(rpg_t *rpg);
void set_which_text_is(rpg_t *rpg);
void display_key_enter(rpg_t *rpg, sfVector2f pos);
void check_event_game(rpg_t *rpg);
void set_portraits_bako(rpg_t *rpg);
void set_portraits_hotaru(rpg_t *rpg);
void set_kenett(rpg_t *rpg);
void display_start_kenett(rpg_t *rpg);
void display_steps(rpg_t *rpg, int i, int pos);
void new_view_start_kennet(rpg_t *rpg);
void display_kenett(rpg_t *rpg);

void talk_hotaru(rpg_t *rpg);
void talk_kenett(rpg_t *rpg);

void set_pnj(rpg_t *rpg);
void set_pnj_animals(rpg_t *rpg);

void set_key_img(rpg_t *);
void set_font(rpg_t *);
void set_moovie_img(rpg_t *);
void set_discuss(rpg_t *);
void loop_moovie(rpg_t *);
void display_image(rpg_t *, int);
void color_background(rpg_t *, int);
void my_clock_moovie(rpg_t *, int);
void display_key_enter(rpg_t *, sfVector2f);
void display_png(rpg_t *);

void set_players(rpg_t *);
void moove_players(rpg_t *, int);
void my_clock_players(rpg_t *, int);

void display_player_moove_top(rpg_t *, obstacles_t *, int);
void display_player_moove_bottom(rpg_t *, obstacles_t *, int);
void display_player_moove_right(rpg_t *, obstacles_t *, int);
void display_player_moove_left(rpg_t *, obstacles_t *, int);

void display_player_motionless_top(rpg_t *);
void display_player_motionless_bottom(rpg_t *);
void display_player_motionless_right(rpg_t *);
void display_player_motionless_left(rpg_t *);

void set_background_map(rpg_t *);

void display_bako(rpg_t *);
void conditions_bako(rpg_t *, obstacles_t *, int);
void moove_bako(rpg_t *);
void display_map_anime(rpg_t *);
void display_map(rpg_t *);
void close_window_in_game(rpg_t *);

void set_item_inv(rpg_t *rpg);
void set_inventory(rpg_t *rpg);
void display_inventory(rpg_t *rpg);
void check_items(rpg_t *rpg);
void set_grab_items(rpg_t *rpg);
void select_item_from_inv(rpg_t *rpg);
void place_item_inv(items_t *it, int idx, char item, grab_wich_item_t *g);
void disp_caches(obj_map_t *omap, rpg_t *rpg);
void set_caches(rpg_t *rpg);
void set_weapon(rpg_t *rpg);
void disp_weapon(rpg_t *rpg);
void check_window(rpg_t *rpg);
void set_details_items(rpg_t *rpg);
void display_bubble_actions(rpg_t *rpg, int check, sfVector2f coof,
sfVector2f coof_key);
void display_bubble1(rpg_t *rpg, sfVector2f pos, sfVector2f scale,
int key_enter);
void disp_eat_drink(rpg_t *rpg, sfVector2f coof, int choice);


void display_talk(rpg_t *rpg);

void my_game(rpg_t *);


button_t set_this_button(int button_type, sfVector2f pos);

menu_t set_wlcm_menu_struct(void);

rpg_t *set_rpg_struct(rpg_t *rpg);

void gestion_music(rpg_t *rpg, int choice);

void my_play(rpg_t *rpg, menu_t *menu);

void my_quit(rpg_t *rpg);

void my_resume(rpg_t *rpg, menu_t *menu);

void my_back(rpg_t *rpg, menu_t *menu);

void my_volume(rpg_t *rpg, menu_t *menu);

void my_restart(rpg_t *rpg, menu_t *menu);

void my_settings(rpg_t *rpg);

void set_button_text_pos(button_t *button, sfBool is_in_game);

void display_menu(rpg_t *rpg, menu_t menu);

void menu_gestion(rpg_t *rpg, menu_t menu);

void my_rpg(rpg_t *rpg);

void my_specific_menus(rpg_t *rpg, menu_t menu);

menu_t set_settings_menu_struct(void);

void set_menus_text_pos(rpg_t *rpg);

menu_t set_pause_menu_struct(void);

void display_transition(rpg_t *rpg);

void set_this_obs(rpg_t *rpg, char type, sfVector2f coo, int id);

void set_obstacles_struct6(rpg_t *rpg);

void display_obstacles(rpg_t *rpg);

void display_player_moove(rpg_t *rpg, int dir);

void set_initial_p_pos(rpg_t *rpg);

void set_obstacles_struct(rpg_t *rpg);

int north_entity_colision_gestion(sfVector2f pos,
obstacles_t *obs, int nb_obs);

int east_entity_colision_gestion(sfVector2f pos,
obstacles_t *obs, int nb_obs);

int west_entity_colision_gestion(sfVector2f pos,
obstacles_t *obs, int nb_obs);

int south_entity_colision_gestion(sfVector2f pos,
obstacles_t *obs, int nb_obs);

void my_basic_attack(rpg_t *rpg);

void set_style(rpg_t *rpg);

void players_attacks(rpg_t *rpg);

void set_global_basic_attack(rpg_t *rpg);

void attack_setup(rpg_t *rpg);

void set_attack_rota_pos(rpg_t *rpg);

void water_setup(rpg_t *rpg);

void fire_setup(rpg_t *rpg);

void elec_setup(rpg_t *rpg);

void in_game_menu_btns(rpg_t *rpg, menu_t menu);

void set_day_night(rpg_t *rpg);

void day_night_gestion(rpg_t *rpg);

void play_sound(rpg_t *rpg, sfSound *sound, sfSoundBuffer *sound_buff);

void play_music(rpg_t *rpg, sfMusic *music);

void music_gestion(rpg_t *rpg);

void my_sound(rpg_t *rpg, menu_t *menu);

button_t *set_settings_btns(int nb_btns);

button_t *set_pause_btns(int nb_btns);

button_t *set_welcome_btns(int nb_btns);

void add_mobs(rpg_t *rpg, int mobs_to_add, mob_gestion_t *mob_gest);

void set_mob_struct(rpg_t *rpg);

void display_mobs(rpg_t *rpg, mob_gestion_t *mob_gest,
obstacles_t *obs, int nb_obs);

void mob_orientation_gestion(rpg_t *rpg, mob_t *mob,
obstacles_t *obs, int nb_obs);

void move_mob(mob_t *mob, int direction, int move_speed);

void move_mob_rect(mob_t *mob);

sfVector2f hit_points(rpg_t *rpg, int x_gap, int y_gap);

void water_hit_points(rpg_t *rpg);

void fire_hit_points(rpg_t *rpg);

void elec_hit_points(rpg_t *rpg);

void damage_gestion(rpg_t *rpg, mob_gestion_t *mob_gest);

int north_attack_colision_gestion(sfVector2f pos,
obstacles_t *obs, int nb_obs);

int south_attack_colision_gestion(sfVector2f pos,
obstacles_t *obs, int nb_obs);

int west_attack_colision_gestion(sfVector2f pos,
obstacles_t *obs, int nb_obs);

int east_attack_colision_gestion(sfVector2f pos,
obstacles_t *obs, int nb_obs);

int is_a_pnj_here(rpg_t *rpg, sfVector2f coo);

void invisibility_gestion(rpg_t *rpg);

sfBool is_stuck_by_p(rpg_t *rpg, sfVector2f pos, int direction);

void set_bars(rpg_t *rpg);

void set_capacity(rpg_t *rpg);

void display_bars(rpg_t *rpg);

menu_t set_died_menu_struct(void);

button_t *set_died_btns(int nb_btns);

void my_respawn(rpg_t *rpg);

void elec_basic_attack(rpg_t *rpg);

void refresh_mob_struct(rpg_t *rpg, mob_gestion_t *mob_gestion);

void check_attack_event(rpg_t *rpg);

void check_tp(rpg_t *rpg);

void switch_type(rpg_t *rpg);

int damage_hitted_mobs(rpg_t *rpg, mob_t *mob);

int mob_is_attacked(rpg_t *rpg, mob_t *mob);

sfBool bako_is_detectable(rpg_t *rpg, mob_t *mob);

void tp_gestion(rpg_t *rpg);

sfBool is_an_obstacle_here(rpg_t *rpg, sfVector2f coo);

void set_boss(rpg_t *rpg);

void boss_gestion(rpg_t *rpg);

sfBool bako_is_on_entry(rpg_t *rpg);

void boss_fight(rpg_t *rpg);

void boss_events(rpg_t *rpg);

void damage_boss(rpg_t *rpg);

void display_fire_spark(rpg_t *rpg);

void set_fire_spark(rpg_t *rpg);

void exit_from_arena(rpg_t *rpg);

void set_fireflyes(rpg_t *rpg);

#endif
