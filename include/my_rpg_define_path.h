/*
** EPITECH PROJECT, 2022
** my_rpg_define.h
** File description:
** my_rpg_define
*/

#ifndef MY_RPG_DEFINE_H_
    #define MY_RPG_DEFINE_H_
    #define BASE rpg->base
    #define MENUS rpg->menus
    #define MENU_BASE rpg->base->menu_base
    #define TALK  rpg->game->talk
    #define DISCUSS GAME_VAR->which_discuss
    #define STEPS_TALK GAME_VAR->steps_game_talk
    #define SOUND rpg->game->sound
    #define TEXT_WAIT rpg->game->text_wait
    #define GAME rpg->game
    #define GAME_VAR rpg->game_var
    #define GAME_KENT rpg->kent
    #define GAME_TEXT GAME->text_game
    #define NB_MENUS 3
    #define DIED_MENU_PATH "assets/PNG/menus/died_menu.png"
    #define DIED_NAME_PATH "assets/PNG/menus/died_name.png"
    #define PRESSED_SOUND_PATH "assets/Sound_effects/button_pressed.ogg"
    #define MAP_BTN "assets/PNG/btn/map_btn.png"
    #define TR_MAP_BTN "assets/PNG/btn/tr_map_btn.png"
    #define BIG_SIGN_MENU_PATH "assets/PNG/menus/big_sign.png"
    #define TRANSITION_TEXT "assets/PNG/menus/sprite_bg.png"
    #define SETTINGS_NAME_PATH "assets/PNG/menus/setting_name.png"
    #define PAUSE_NAME_PATH "assets/PNG/menus/pause_name.png"
    #define WLCM_MENU_PATH "assets/PNG/menus/welcome_menu_flou.png"
    #define WLCM_NAME_PATH "assets/PNG/menus/game_logo.png"
    #define MUSIC_OFF_PATH "assets/PNG/btn/music_off.png"
    #define TR_MUSIC_OFF_PATH "assets/PNG/btn/tr_music_off.png"
    #define MUSIC_BTN_PATH "assets/PNG/btn/music.png"
    #define TR_MUSIC_BTN_PATH "assets/PNG/btn/tr_music.png"
    #define SOUND_OFF_PATH "assets/PNG/btn/sound_off.png"
    #define TR_SOUND_OFF_PATH "assets/PNG/btn/tr_sound_off.png"
    #define SOUND_BTN_PATH "assets/PNG/btn/sound.png"
    #define TR_SOUND_BTN_PATH "assets/PNG/btn/tr_sound.png"
    #define CLOSE_PATH "assets/PNG/btn/close.png"
    #define TR_CLOSE_PATH "assets/PNG/btn/tr_close.png"
    #define RESTART_PATH "assets/PNG/btn/restart.png"
    #define TR_RESTART_PATH "assets/PNG/btn/tr_restart.png"
    #define SETTINGS_PATH "assets/PNG/btn/settings.png"
    #define TR_SETTINGS_PATH "assets/PNG/btn/tr_settings.png"
    #define PLAY_PATH "assets/PNG/btn/play.png"
    #define TR_PLAY_PATH "assets/PNG/btn/tr_play.png"
    #define MENU_MUSIC "assets/Music/menu_music.ogg"
    #define GIRL_KENETT "assets/ALL_WORLD/kenett/girl.png"

    #define ARENA "assets/ALL_WORLD/map_background/RPG_boss_map.png"
    #define BOSS_GEST GAME->boss_gest
    #define FILE_CAVE "boss_obstacles.txt"
    #define AKAZA "assets/ALL_WORLD/monsters/boss.png"
    #define AKA_LIFE_BAR "assets/bars/akaza_life.png"
    #define AKA_BACK_BAR "assets/bars/akaza_bar_back.png"
    #define AKAZA_BAR_POS (sfVector2f)\
    {GAME_VAR->p_pos.x - 200, GAME_VAR->p_pos.y - 300}

    #define BAKO_MV_TOP_PATH "assets/ALL_WORLD/Bako_sprites/moove/moove_top.png"
    #define BAKO_MV_BOT_PATH "assets/ALL_WORLD/Bako_sprites/moove/moove_bottom.png"
    #define BAKO_MV_RIGHT_PATH "assets/ALL_WORLD/Bako_sprites/moove/moove_right.png"
    #define BAKO_MV_LEFT_PATH "assets/ALL_WORLD/Bako_sprites/moove/moove_left.png"
    #define BAKO_TOP_PATH "assets/ALL_WORLD/Bako_sprites/motionless/motionless_top.png"
    #define BAKO_BOT_PATH "assets/ALL_WORLD/Bako_sprites/motionless/motionless_bottom.png"
    #define BAKO_RIGHT_PATH "assets/ALL_WORLD/Bako_sprites/motionless/motionless_right.png"
    #define BAKO_LEFT_PATH "assets/ALL_WORLD/Bako_sprites/motionless/motionless_left.png"
    #define BAKO_INV "assets/inventory/inventory.png"
    #define BAKO_TALK "assets/talk/maj.png"

    #define KENETT_FACE "assets/ALL_WORLD/kenett/kenett_face.png"
    #define KENETT_RUN "assets/ALL_WORLD/kenett/kenett_run.png"
    #define KENETT_FLY "assets/ALL_WORLD/kenett/kenett_fly.png"
    #define KENETT_ALW_FLY "assets/ALL_WORLD/kenett/kenett_always_fly.png"
    #define KENETT_TAP "assets/ALL_WORLD/kenett/kenett_double_tap.png"
    #define KENETT_SMOKE "assets/ALL_WORLD/kenett/smoke__1.png"
    #define KENETT_SPELL "assets/ALL_WORLD/kenett/spell.png"

    #define MAP "assets/ALL_WORLD/map_background/RPG_map.png"
    #define SCREEN_MAP "assets/ALL_WORLD/map_background/screen_save.png"
    #define OBSTACLES "assets/ALL_WORLD/map_background/RPG_map_obstacles.png"
    #define NIGHT "assets/ALL_WORLD/map_background/night.png"
    #define REV_NIGHT "assets/ALL_WORLD/map_background/rev_night.png"
    #define OBS_TXT "obstacles.txt"
    #define ANIME_MAP_1 "assets/ALL_WORLD/map_background/anim_1.png"
    #define ANIME_MAP_2 "assets/ALL_WORLD/map_background/RPG_map_entry_new.png"
    #define ANIME_MAP_3 "assets/ALL_WORLD/map_background/anim3.png"

    #define BUBBLE "assets/ALL_WORLD/bubble/bubble.png"
    #define OPACITY_BAR 255
    #define HERO_PORTRAIT "assets/ALL_WORLD/Character_Portraits/3x/hero_portrait.png"
    #define GUNSMITH_PORTRAIT "assets/ALL_WORLD/Character_Portraits/3x/Armurier_portrait.png"
    #define BAR_DISCUSS "assets/ALL_WORLD/Character_Portraits/3x/discuss.png"
    #define KEY_ENTER "assets/ALL_WORLD/history_start_game_background/key_enter.png"
    #define IMG_1 "assets/ALL_WORLD/history_start_game_background/image_2.jpg"
    #define IMG_2 "assets/ALL_WORLD/history_start_game_background/image_3.jpg"
    #define IMG_3 "assets/ALL_WORLD/history_start_game_background/image_6.jpg"
    #define IMG_4 "assets/ALL_WORLD/history_start_game_background/image_7.jpg"
    #define IMG_5 "assets/ALL_WORLD/history_start_game_background/image_8.jpg"
    #define IMG_6 "assets/ALL_WORLD/history_start_game_background/image_9.jpg"
    #define IMG_7 "assets/ALL_WORLD/history_start_game_background/black.png"

    #define SUBTITLE "assets/font/pixelmix.ttf"
    #define BOLT "assets/font/Bold_2.ttf"

    #define COLLECT_ITEM_SOUND "assets/Sound_effects/collect_item.ogg"
    #define DIE_SOUND "assets/Sound_effects/die.ogg"
    #define DISCUSSION_SOUND "assets/Sound_effects/discussion.ogg"
    #define STEP_SOUND "assets/Sound_effects/step1.ogg"
    #define SWITCH_ITEM_SOUND "assets/Sound_effects/switch_item.ogg"
    #define WIN_VOICE_SOUND "assets/Sound_effects/voice_win.ogg"
    #define SPEECH_START_SOUND "assets/Sound_effects/speech_start.ogg"
    #define MORN_SOUND "assets/Sound_effects/morning.ogg"
    #define NIGHT_SOUND "assets/Sound_effects/night.ogg"
    #define KENETT_WINGS_SOUND "assets/Sound_effects/kenett_wings.ogg"
    #define MUSIC_IN_GAME "assets/Sound_effects/music_in_game.ogg"
    #define KENETT_START_1 "assets/Sound_effects/start_talk_kenett_1.ogg"
    #define KENETT_START_2 "assets/Sound_effects/start_talk_kenett_2.ogg"
    #define KENETT_START_3_FT "assets/Sound_effects/start_talk_kenett_3foot_step.ogg"
    #define KENETT_START_RESPI "assets/Sound_effects/respiration_kenett.ogg"
    #define KENETT_START_FIRE "assets/Sound_effects/fire_noise.ogg"
    #define THUNDER_SOUND "assets/Sound_effects/Thunder.ogg"

    #define WATER_basic_ATTACK "assets/fight_system/water_basic_attack.png"
    #define FIRE_basic_ATTACK "assets/fight_system/fire_basic_attack.png"
    #define ELEC_ATTACK "assets/fight_system/light_attack.png"
    #define WATER_ATK_SOUND "assets/Sound_effects/water_basic.ogg"
    #define FIRE_ATK_SOUND "assets/Sound_effects/fire_basic.ogg"
    #define ELEC_ATK_SOUND "assets/Sound_effects/elec_attack.ogg"
    #define SPELL_FIRE "assets/ALL_WORLD/kenett/fire_kenett.png"
    #define WATER rpg->game->attacks[water]
    #define FIRE rpg->game->attacks[fire]
    #define ELEC rpg->game->attacks[elec]
    #define BASIC_ATTK rpg->game->curr_style->basic
    #define ATTACK_RECT_SIZE 84
    #define IS_AIMING "assets/fight_system/is_aiming.png"
    #define END_TP "assets/fight_system/rev_light_ground.png"
    #define START_TP "assets/fight_system/rev_light_ground.png"
    #define TP rpg->game->capacity->tp

    #define PAUSE_SIGN_X (GAME_VAR->p_pos.x - 320)
    #define PAUSE_SIGN_Y (GAME_VAR->p_pos.y - 250)

    #define MOB_TOP "assets/ALL_WORLD/monsters/mob_top.png"
    #define MOB_BOT "assets/ALL_WORLD/monsters/mob_bot.png"
    #define MOB_RIGHT "assets/ALL_WORLD/monsters/mob_right.png"
    #define MOB_LEFT "assets/ALL_WORLD/monsters/mob_left.png"

    #define INV rpg->game->inv
    #define BAR_LIFE "assets/inventory/bar_life.png"
    #define BAR_BG "assets/inventory/bar_bg.png"

    #define LIFE_BAR "assets/bars/bar_life.png"
    #define BACK_BAR "assets/bars/bar_back.png"

    #define PX GAME_VAR->p_pos.x
    #define PY GAME_VAR->p_pos.y
    #define TALK_KENNET PY > 2355 && PY < 2469 && PX > 1085 && PX < 1255
    #define TALK_GIRL PY > 989 && PY < 1045 && PX > 2226 && PX < 2508
    #define TALK_GIRL_FACE PY > 710 && PY < 810 && PX > 2308 && PX < 2384
    #define TALK_GUNSMITH PY > 831 && PY < 1023 && PX > 700 && PX < 883
    #define INV rpg->game->inv
    #define BAR_LIFE "assets/inventory/bar_life.png"
    #define BAR_BG "assets/inventory/bar_bg.png"
    #define APPLE "assets/inventory/apple.png"
    #define BAI "assets/inventory/bai.png"
    #define CHEESE "assets/inventory/cheese.png"
    #define FISH_O "assets/inventory/fish_orange.png"
    #define FISH_P "assets/inventory/fish_purple.png"
    #define MUSH_O "assets/inventory/mush_orange.png"
    #define MUSH_P "assets/inventory/mush_purple.png"
    #define ORANGE "assets/inventory/orange.png"
    #define PO_GREEN "assets/inventory/po_green.png"
    #define PO_PURPLE "assets/inventory/po_purple.png"
    #define ROPE "assets/inventory/rope.png"
static const char *const ALL_CACHES[] = {"assets/inventory/caches/grass1.png",
"assets/inventory/caches/grass2.png", "assets/inventory/caches/market.png",
"assets/inventory/caches/fish2.png", "assets/inventory/caches/grass.png",
"assets/inventory/caches/grass3.png", "assets/inventory/caches/potion2.png",
"assets/inventory/caches/potion.png", "assets/inventory/caches/carrot.png"};
    #define LO_CASE_ONE_X coo.x > 632 && coo.x < 695
    #define LO_CASE_ONE_Y coo.y > 600 && coo.y < 670
    #define LO_CASE_ONE LO_CASE_ONE_X && LO_CASE_ONE_Y
    #define LO_CASE_TWO_X coo.x > 709 && coo.x < 774
    #define LO_CASE_TWO_Y coo.y > 600 && coo.y < 670
    #define LO_CASE_TWO LO_CASE_TWO_X && LO_CASE_TWO_Y
    #define LO_CASE_THREE_X coo.x > 787 && coo.x < 853
    #define LO_CASE_THREE_Y coo.y > 600 && coo.y < 670
    #define LO_CASE_THREE LO_CASE_THREE_X && LO_CASE_THREE_Y
    #define LO_CASE_FO_X coo.x > 865 && coo.x < 930
    #define LO_CASE_FO_Y coo.y > 600 && coo.y < 670
    #define LO_CASE_FO LO_CASE_FO_X && LO_CASE_FO_Y
    #define LO_CASE_FI_X coo.x > 944 && coo.x < 1006
    #define LO_CASE_FI_Y coo.y > 600 && coo.y < 670
    #define LO_CASE_FI LO_CASE_FI_X && LO_CASE_FI_Y
    #define LO_CASE_SI_X coo.x > 1022 && coo.x < 1085
    #define LO_CASE_SI_Y coo.y > 600 && coo.y < 670
    #define LO_CASE_SI LO_CASE_SI_X && LO_CASE_SI_Y
    #define LO_CASE_SEV_X coo.x > 1098 && coo.x < 1164
    #define LO_CASE_SEV_Y coo.y > 600 && coo.y < 670
    #define LO_CASE_SEV LO_CASE_SEV_X && LO_CASE_SEV_Y
    #define LO_CASE_EIG_X coo.x > 1179 && coo.x < 1241
    #define LO_CASE_EIG_Y coo.y > 600 && coo.y < 670
    #define LO_CASE_EIG LO_CASE_EIG_X && LO_CASE_EIG_Y
    #define LO_CASE_NI_X coo.x > 1255 && coo.x < 1322
    #define LO_CASE_NI_Y coo.y > 600 && coo.y < 670
    #define LO_CASE_NI LO_CASE_NI_X && LO_CASE_NI_Y
    #define LT_CASE_ONE_X coo.x > 632 && coo.x < 695
    #define LT_CASE_ONE_Y coo.y > 680 && coo.y < 750
    #define LT_CASE_ONE LT_CASE_ONE_X && LT_CASE_ONE_Y
    #define LT_CASE_TWO_X coo.x > 709 && coo.x < 774
    #define LT_CASE_TWO_Y coo.y > 680 && coo.y < 750
    #define LT_CASE_TWO LT_CASE_TWO_X && LT_CASE_TWO_Y
    #define LT_CASE_THREE_X coo.x > 787 && coo.x < 853
    #define LT_CASE_THREE_Y coo.y > 680 && coo.y < 750
    #define LT_CASE_THREE LT_CASE_THREE_X && LT_CASE_THREE_Y
    #define LT_CASE_FO_X coo.x > 865 && coo.x < 930
    #define LT_CASE_FO_Y coo.y > 680 && coo.y < 750
    #define LT_CASE_FO LT_CASE_FO_X && LT_CASE_FO_Y
    #define LT_CASE_FI_X coo.x > 944 && coo.x < 1006
    #define LT_CASE_FI_Y coo.y > 680 && coo.y < 750
    #define LT_CASE_FI LT_CASE_FI_X && LT_CASE_FI_Y
    #define LT_CASE_SI_X coo.x > 1022 && coo.x < 1085
    #define LT_CASE_SI_Y coo.y > 680 && coo.y < 750
    #define LT_CASE_SI LT_CASE_SI_X && LT_CASE_SI_Y
    #define LT_CASE_SEV_X coo.x > 1098 && coo.x < 1164
    #define LT_CASE_SEV_Y coo.y > 680 && coo.y < 750
    #define LT_CASE_SEV LT_CASE_SEV_X && LT_CASE_SEV_Y
    #define LT_CASE_EIG_X coo.x > 1179 && coo.x < 1241
    #define LT_CASE_EIG_Y coo.y > 680 && coo.y < 750
    #define LT_CASE_EIG LT_CASE_EIG_X && LT_CASE_EIG_Y
    #define LT_CASE_NI_X coo.x > 1255 && coo.x < 1322
    #define LT_CASE_NI_Y coo.y > 680 && coo.y < 750
    #define LT_CASE_NI LT_CASE_NI_X && LT_CASE_NI_Y
    #define LH_CASE_ONE_X coo.x > 632 && coo.x < 695
    #define LH_CASE_ONE_Y coo.y > 770 && coo.y < 840
    #define LH_CASE_ONE LH_CASE_ONE_X && LH_CASE_ONE_Y
    #define LH_CASE_TWO_X coo.x > 709 && coo.x < 774
    #define LH_CASE_TWO_Y coo.y > 770 && coo.y < 840
    #define LH_CASE_TWO LH_CASE_TWO_X && LH_CASE_TWO_Y
    #define LH_CASE_THREE_X coo.x > 787 && coo.x < 853
    #define LH_CASE_THREE_Y coo.y > 770 && coo.y < 840
    #define LH_CASE_THREE LH_CASE_THREE_X && LH_CASE_THREE_Y
    #define LH_CASE_FO_X coo.x > 865 && coo.x < 930
    #define LH_CASE_FO_Y coo.y > 770 && coo.y < 840
    #define LH_CASE_FO LH_CASE_FO_X && LH_CASE_FO_Y
    #define LH_CASE_FI_X coo.x > 944 && coo.x < 1006
    #define LH_CASE_FI_Y coo.y > 770 && coo.y < 840
    #define LH_CASE_FI LH_CASE_FI_X && LH_CASE_FI_Y
    #define LH_CASE_SI_X coo.x > 1022 && coo.x < 1085
    #define LH_CASE_SI_Y coo.y > 770 && coo.y < 840
    #define LH_CASE_SI LH_CASE_SI_X && LH_CASE_SI_Y
    #define LH_CASE_SEV_X coo.x > 1098 && coo.x < 1164
    #define LH_CASE_SEV_Y coo.y > 770 && coo.y < 840
    #define LH_CASE_SEV LH_CASE_SEV_X && LH_CASE_SEV_Y
    #define LH_CASE_EIG_X coo.x > 1179 && coo.x < 1241
    #define LH_CASE_EIG_Y coo.y > 770 && coo.y < 840
    #define LH_CASE_EIG LH_CASE_EIG_X && LH_CASE_EIG_Y
    #define LH_CASE_NI_X coo.x > 1255 && coo.x < 1322
    #define LH_CASE_NI_Y coo.y > 770 && coo.y < 840
    #define LH_CASE_NI LH_CASE_NI_X && LH_CASE_NI_Y
    #define INV_OPEN rpg->game->inv->open == 1

#endif
