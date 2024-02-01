/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** next_kenett_discuss
*/

#include "my_rpg.h"

static void write_text_kenett_tmp(rpg_t *rpg, int which, int x, int y)
{
    sfText *text_girl = sfText_create();
    sfFont *font = sfFont_createFromFile(BOLT);
    sfText_setString(text_girl, "Merci enormement Bako !\n"
    "Je ne pensais pas que tu aurai les epaules pour ca. Quoi qu'il\n"
    "en soit, parole d'homme. Je t'entrainerai. Va voir Hotaru, l'armurier\n"
    "du village, il te donnera ce dont tu as besoin pour commencer.");
    sfText_setFont(text_girl, font);
    sfText_setCharacterSize(text_girl, 15);

    sfText_setPosition(text_girl, (sfVector2f)
    {(GAME_VAR->p_pos.x - 400) + x, (GAME_VAR->p_pos.y + 150) + y});
    sfRenderWindow_drawText(BASE->window, text_girl, NULL);
}

static void write_text_bako_tmp(rpg_t *rpg, int which, int x, int y)
{
    sfText *text_girl = sfText_create();
    sfFont *font = sfFont_createFromFile(BOLT);
    sfText_setString(text_girl, "Ne me remerciez pas c'est normal !\n"
    "Les Juidas payeront pour ce qu'ils ont fait aux miens !");
    sfText_setFont(text_girl, font);
    sfText_setCharacterSize(text_girl, 15);

    sfText_setPosition(text_girl, (sfVector2f)
    {(GAME_VAR->p_pos.x - 90) + x, (GAME_VAR->p_pos.y - 240) + y});
    sfRenderWindow_drawText(BASE->window, text_girl, NULL);
}

static void write_text_bako_tmp_sec(rpg_t *rpg, int which, int x, int y)
{
    sfText *text_girl = sfText_create();
    sfFont *font = sfFont_createFromFile(BOLT);
    sfText_setString(text_girl, "Mais ... Comment s'appelle votre fille ?\n"
    "ELLE EST VRAIMENT SUBLIME !!!!!");
    sfText_setFont(text_girl, font);
    sfText_setCharacterSize(text_girl, 15);

    sfText_setPosition(text_girl, (sfVector2f)
    {(GAME_VAR->p_pos.x - 90) + x, (GAME_VAR->p_pos.y - 240) + y});
    sfRenderWindow_drawText(BASE->window, text_girl, NULL);
}

void retrieve_girl_talk_kenett(rpg_t *rpg)
{
    TALK->kenett->valid_discuss == 0 && DISCUSS > 0 ? DISCUSS = 0,
    TALK->kenett->valid_discuss = 1 : 0;
    DISCUSS == 0 || DISCUSS == 1 ? discuss_bar(rpg, port_2, 507, -100),
    write_text_kenett_tmp(rpg, 4, 0, 10), display_kenett_talk
    (rpg, (sfVector2f){(GAME_VAR->p_pos.x - 500), (GAME_VAR->p_pos.y + 120)}) : 0;
    DISCUSS == 0 ? key_enter_skip(rpg, 90, -240) : 0;
    DISCUSS == 1 ? discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_2, 378, 256), write_text_bako_tmp(rpg, 8, 10, 30) : 0;
    DISCUSS == 1 ? key_enter_skip(rpg, 476, 147) : 0;
    DISCUSS == 2 ? discuss_bar(rpg, port_1, 117, 284),
    portrait(rpg, 0, port_5, 378, 256),
    write_text_bako_tmp_sec(rpg, 8, 10, 30) : 0;
    DISCUSS == 2 ? key_enter_skip(rpg, 476, 147) : 0;
    DISCUSS == 3 ? STEPS_TALK += 1, DISCUSS = 0,
    TALK->kenett->key_pressed = 0, TALK->kenett->valid_discuss = 0,
    GAME_VAR->txt++ : 0;
}
