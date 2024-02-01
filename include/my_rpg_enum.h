/*
** EPITECH PROJECT, 2022
** My_rpg
** File description:
** my_rpg_enum
*/

#ifndef MY_RPG_ENUM_H_
    #define MY_RPG_ENUM_H_

typedef enum discuss_e {
    f_meet,
    s_meet,
    t_meet,
    fo_meet,
}discuss_e;

typedef enum st_enum_state {
    m_welcome,
    m_settings,
    m_paused,
    m_died,
} enum_state_t;

typedef enum st_enum_direction {
    north,
    south,
    east,
    west,
} enum_direction_t;

typedef enum st_enum_bako {
    bako_mv_top,
    bako_mv_bot,
    bako_mv_right,
    bako_mv_left,
    bako_place_top,
    bako_place_bottom,
    bako_place_right,
    bako_place_left,
} enum_bako_t;

typedef enum st_enum_background {
    map,
    obstacles,
    animations,
    before_game,
} enum_background_t;

typedef enum st_enum_entity {
    bako_e,
    mob_e,
} enum_entity_t;

typedef enum st_enum_styles {
    water,
    fire,
    elec,
} enum_styles_t;

typedef enum st_enum_attacks {
    basic,
    projectile,
    special,
} enum_attacks_t;

typedef enum st_enum_discuss {
    box_1,
    box_2,
} enum_discuss;

typedef enum st_enum_portrait {
    port_1,
    port_2,
    port_3,
    port_4,
    port_5,
    port_6,
    port_7,
    port_8,
} enum_portrait_t;

typedef enum st_enum_button {
    b_play,
    b_resume,
    b_back,
    b_quit,
    b_volume,
    b_restart,
    b_settings,
    b_sound,
    b_map,
} enum_button_t;

typedef enum st_key_img_enum {
    key_enter,
    bubble,
} enum_key_img_t;

typedef enum st_moovie_img_enum {
    img_1,
    img_2,
    img_3,
    img_4,
    img_5,
    img_6,
    img_7,
} enum_moovie_img_t;

#endif /* !MY_RPG_ENUM_H_ */
