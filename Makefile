##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## Makefile
##

##====================PAHT_FOLDERS=======================##

SET_BACKGROUND_MAP	=	set_background_map/
SET_OBSTACLES	=	set_obstacles/
SET_PLAYERS	=	set_players/
SET_FONT	=	set_font/
SET_KENETT	=	set_kenett/
SET_PNJ	=	set_pnj/
SET_DAY_NIGHT	=	set_day_night/
SET_MENU_STRUCT	=	set_menu_struct/
SET_MOB	=	set_mob/
SET_MUSIC = set_music/
SET_SPELL = set_spell/
SET_IMG_KEY	=	set_img_key_for_discuss/
SET_DISCUSSION	=	set_discussion/
SET_GIRL	=	set_girl/
SET_SMOKE	=	set_smoke/
SET_CAPACITY	=	set_capacity/
SET_BARS	=	set_bars/
SET_TRANS 	=	set_transition/
SET_QUEST	=	set_quest/
SET_BOSS	=	set_boss/
SET_PARTICLES	=	set_particles/

LOOP_GAME	=	loop_game/
LOOP_WAIT	=	loop_wait_before_play/
MOOVE_PLAYERS	=	moove_players/
EVENT_IN_GAME	=	event_in_game/
DISPLAY_PLAYERS	=	display_players/
DISPLAY_BACKGROUND_MAP	=	display_background_map/
DISPLAY_GESTION	=	display_gestion/
DISPLAY_START_KEN = display_start_kenett/
PLAYER_ATTACKS	=	player_attacks/
DAY_NIGHT	=	Day_night/
MOB_GESTION	=	mob_gestion/
DISPLAY_BUBBLE = display_bubble/
DISPLAY_MONEY	=	display_money/
INVENTORY_GESTION = inventory_gestion/
DISCUSS_IN_GAME	=	Talk_Discussion_in_Game/
ANIME_KEY	=	Anime_key/
WELCOME_DISCUSS	=	1-welcome_discuss/
KENETT_DISCUSS	=	2-kenett_discuss/
HOTARU_DISCUSS	=	3-hotaru_discuss/
GIRL_DISCUSS	=	4-Girl_discuss/
MOOVIE_START_GAME	=	MOOVIE_START_GAME/
SET_INVENTORY	=	set_inventory/
CAPACITY_GESTION	=	capacity_gestion/
DISPLAY_BARS	=	display_bars/
DIE_GESTION	=	die_gestion/
TRANS	=	transition/
QUEST	=	quest/
BOSS_GESTION	=	boss_gestion/

##==================================================##
##======================PATH========================##
##==================================================##

SET_STRUCTURES	=	src/set_structures/set_rpg_struct.c	\
					src/set_structures/set_money.c	\
					src/set_structures/$(SET_MOB)set_mob_struct.c	\
					src/set_structures/$(SET_MUSIC)set_music.c	\
					src/set_structures/$(SET_MENU_STRUCT)set_buttons_struct.c	\
					src/set_structures/$(SET_MENU_STRUCT)set_menu_btns.c	\
					src/set_structures/$(SET_MENU_STRUCT)set_menus_struct.c	\
					src/set_structures/$(SET_PLAYERS)set_players.c	\
					src/set_structures/$(SET_PLAYERS)set_player_attacks.c	\
					src/set_structures/$(SET_BACKGROUND_MAP)set_background_map.c	\
					src/set_structures/$(SET_DISCUSSION)set_discussion.c	\
					src/set_structures/$(SET_DISCUSSION)set_portrait.c	\
					src/set_structures/$(SET_QUEST)set_quest.c	\
					src/set_structures/$(SET_DISCUSSION)set_portrait_hotaru.c	\
					src/set_structures/$(SET_DISCUSSION)set_portrait_kenett.c	\
					src/set_structures/$(SET_OBSTACLES)set_this_obstacle.c	\
					src/set_structures/$(SET_OBSTACLES)set_obstacles_struct.c	\
					src/set_structures/$(SET_BACKGROUND_MAP)moovie_img.c	\
					src/set_structures/$(SET_IMG_KEY)set_key_img.c	\
					src/set_structures/$(SET_TRANS)set_transition.c	\
					src/set_structures/$(SET_FONT)set_font_moovie.c	\
					src/set_structures/$(SET_FONT)set_which_text.c	\
					src/set_structures/$(SET_FONT)set_text_wait_start.c	\
					src/set_structures/$(SET_FONT)set_text_in_game/baco_text.c	\
					src/set_structures/$(SET_FONT)set_text_in_game/kenett_text.c	\
					src/set_structures/$(SET_FONT)set_text_in_game/hotaru_text.c	\
					src/set_structures/$(SET_FONT)set_text_game.c	\
					src/set_structures/$(SET_PNJ)set_pnj_struct.c	\
					src/set_structures/$(SET_GIRL)set_girl.c	\
					src/set_structures/$(SET_SMOKE)set_smoke.c	\
					src/set_structures/$(SET_SPELL)set_spell.c	\
					src/set_structures/$(SET_INVENTORY)set_inventory.c	\
					src/set_structures/$(SET_INVENTORY)set_weapon.c	\
					src/set_structures/$(SET_INVENTORY)set_caches.c	\
					src/set_structures/$(SET_INVENTORY)set_grab_items.c	\
					src/set_structures/$(SET_KENETT)set_kenett.c	\
					src/set_structures/$(SET_DAY_NIGHT)set_day_night_struct.c	\
					src/set_structures/$(SET_CAPACITY)set_capacity.c	\
					src/set_structures/$(SET_BARS)set_bars.c	\
					src/set_structures/$(SET_BOSS)set_boss.c	\
					src/set_structures/$(SET_PARTICLES)set_fireflyes.c	\
					src/set_structures/$(SET_PARTICLES)set_fire_spark.c	\

SET_MENU_GESTION	=	src/menus_gestion/menus_gestion.c	\
						src/menus_gestion/menus_display.c	\
						src/menus_gestion/my_specific_menus.c	\
						src/menus_gestion/set_menus_text_pos.c	\

SET_BUTTON_GESTION	=	src/button_gestion/button_effect_gestion.c	\
						src/button_gestion/button_effect_gestion2.c	\
						src/button_gestion/set_buttons_text_pos.c	\

SET_DISPLAY_GESTION	=	src/$(DISPLAY_GESTION)/display_transition.c	\
						src/$(DISPLAY_GESTION)/display_transition_start_kenett.c	\

SET_GAME_ACTION	=	src/Game_actions/music_sound_gestion/music_sound_gestion.c	\
					src/Game_actions/$(LOOP_GAME)loop_game.c	\
					src/Game_actions/$(LOOP_WAIT)wait_press_enter.c	\
					src/Game_actions/$(LOOP_WAIT)display_background.c	\
					src/Game_actions/$(LOOP_WAIT)display_bako_wait.c	\
					src/Game_actions/$(LOOP_WAIT)display_logo_wait.c	\
					src/Game_actions/$(MOOVE_PLAYERS)moove_players.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)display_mooves_players.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)display_motionless.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)display_bako.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)check_entity_colisions.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)display_png.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)features_kenett.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)display_kenett.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)display_girl.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)display_smoke.c	\
					src/Game_actions/$(QUEST)display_quest.c	\
					src/Game_actions/check_item_potion.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)is_a_pnj_here.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)$(DISPLAY_START_KEN)display_start_kenett.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)$(DISPLAY_START_KEN)step_start_kenett.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)$(DISPLAY_START_KEN)spell_wait.c	\
					src/Game_actions/$(DISPLAY_PLAYERS)$(DISPLAY_START_KEN)advance_kenett_wait.c	\
					src/Game_actions/$(DISPLAY_BACKGROUND_MAP)display_map.c	\
					src/Game_actions/$(DISPLAY_BUBBLE)display_bubble.c	\
					src/Game_actions/$(DISPLAY_MONEY)display_money.c	\
					src/Game_actions/$(EVENT_IN_GAME)moove_bako.c	\
					src/Game_actions/$(EVENT_IN_GAME)boss_events.c	\
					src/Game_actions/$(EVENT_IN_GAME)event.c	\
					src/Game_actions/$(EVENT_IN_GAME)window_size.c	\
					src/Game_actions/$(EVENT_IN_GAME)attack_capacity_events.c	\
					src/Game_actions/$(DISCUSS_IN_GAME)talk_discuss.c	\
					src/Game_actions/$(DISCUSS_IN_GAME)$(WELCOME_DISCUSS)welcom.c	\
					src/Game_actions/$(DISCUSS_IN_GAME)$(KENETT_DISCUSS)kenett_discuss.c	\
					src/Game_actions/$(DISCUSS_IN_GAME)$(KENETT_DISCUSS)next_kenett_discuss.c	\
					src/Game_actions/$(DISCUSS_IN_GAME)$(HOTARU_DISCUSS)hotaru_discuss.c	\
					src/Game_actions/$(DISCUSS_IN_GAME)$(GIRL_DISCUSS)girl_discuss.c	\
					src/Game_actions/$(DISCUSS_IN_GAME)display_discuss.c	\
					src/Game_actions/$(DISCUSS_IN_GAME)$(ANIME_KEY)anime_key.c	\
					src/Game_actions/$(DISCUSS_IN_GAME)talk_pnj.c	\
					src/Game_actions/$(DISCUSS_IN_GAME)talk_girl_kenett.c	\
					src/Game_actions/$(MOOVIE_START_GAME)moovie_loop.c	\
					src/Game_actions/$(MOOVIE_START_GAME)display_image.c	\
					src/Game_actions/$(MOOVIE_START_GAME)clock_for_speech.c	\
					src/Game_actions/$(PLAYER_ATTACKS)players_attacks.c	\
					src/Game_actions/$(PLAYER_ATTACKS)attack_setup.c	\
					src/Game_actions/$(PLAYER_ATTACKS)basic_attacks.c	\
					src/Game_actions/$(PLAYER_ATTACKS)fire_attack.c	\
					src/Game_actions/$(PLAYER_ATTACKS)elec_attack.c	\
					src/Game_actions/$(PLAYER_ATTACKS)random_water_attack.c	\
					src/Game_actions/$(PLAYER_ATTACKS)water_colision_gestion.c	\
					src/Game_actions/$(PLAYER_ATTACKS)fire_colision_gestion.c	\
					src/Game_actions/$(PLAYER_ATTACKS)elec_colision_gestion.c	\
					src/Game_actions/$(PLAYER_ATTACKS)elec_basic_atk.c	\
					src/Game_actions/$(PLAYER_ATTACKS)damage_gestion.c	\
					src/Game_actions/$(PLAYER_ATTACKS)mob_attack_colision.c	\
					src/Game_actions/$(PLAYER_ATTACKS)check_attack_colision.c	\
					src/Game_actions/$(DAY_NIGHT)day_night_gestion.c	\
					src/Game_actions/$(MOB_GESTION)add_a_mob.c	\
					src/Game_actions/$(MOB_GESTION)mob_display.c	\
					src/Game_actions/$(MOB_GESTION)mob_is_stuck.c	\
					src/Game_actions/$(MOB_GESTION)refresh_mob_struct.c	\
					src/Game_actions/$(MOB_GESTION)mob_motion.c	\
					src/Game_actions/$(MOB_GESTION)attacked_mob_gestion.c	\
					src/Game_actions/$(INVENTORY_GESTION)display_gestion.c	\
					src/Game_actions/$(INVENTORY_GESTION)disp_bubble_inv.c	\
					src/Game_actions/$(INVENTORY_GESTION)item_gestion.c	\
					src/Game_actions/$(INVENTORY_GESTION)select_inv.c	\
					src/Game_actions/$(INVENTORY_GESTION)item_inv_choice.c	\
					src/Game_actions/$(INVENTORY_GESTION)disp_caches.c	\
					src/Game_actions/$(INVENTORY_GESTION)disp_weapons.c	\
					src/Game_actions/$(CAPACITY_GESTION)invisibility_gestion.c	\
					src/Game_actions/$(CAPACITY_GESTION)tp_gestion.c	\
					src/Game_actions/$(DISPLAY_BARS)display_bars.c	\
					src/Game_actions/$(DIE_GESTION)my_respawn.c	\
					src/Game_actions/$(TRANS)transition.c	\
					src/Game_actions/$(BOSS_GESTION)boss_gestion.c	\
					src/Game_actions/$(BOSS_GESTION)boss_fight.c	\

SRC	=	src/main.c	\
		src/my_rpg.c	\
		$(SET_STRUCTURES)	\
		$(SET_MENU_GESTION)	\
		$(SET_BUTTON_GESTION)	\
		$(SET_DISPLAY_GESTION)	\
		$(SET_GAME_ACTION)	\

##==================================================##
##==================================================##
##==================================================##

NAME	=	my_rpg

CFLAGS	+= 	-I ./include/ -W -Wall -Wextra

LFLAGS 	= 	-L ./lib/ -lmy

OBJ	=	$(SRC:.c=.o)

RMO	=	$(RM) src/*.o *~

MAKE	=	make

CSFML = -lcsfml-audio -lcsfml-window -lcsfml-system -lcsfml-graphics

all: $(NAME)

unzip:
	unzip rpg_game.zip

build_lib :
	$(MAKE) -C ./lib/

$(NAME): build_lib $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(CSFML) $(LFLAGS) -o $(NAME)

debug: MAKE += -E CFLAGS+=-g3
debug: CFLAGS += -g3
debug: $(NAME)

clean:
	$(RM) *~ \#*\#*
	rm -f $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RMO)
	make fclean -C ./lib/

re: fclean all

.PHONY: all build_lib debug clean fclean re unzip