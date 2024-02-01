/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_quest
*/

#include "my_rpg.h"

void my_free_array(char **array);

static quest_t set_quest_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    quest_t quest;

    quest.clock = sfClock_create();
    quest.sprite = sfSprite_create();
    quest.texture = sfTexture_createFromFile(path, NULL);
    quest.rect = rect;
    quest.pos = pos;
    quest.scale = scale;
    sfSprite_setTexture(quest.sprite, quest.texture, sfTrue);
    sfSprite_setTextureRect(quest.sprite, quest.rect);
    sfSprite_setPosition(quest.sprite, quest.pos);
    return (quest);
}

static quest_text_t set_text_quest_struct(char *Font,
sfVector2f pos, const char *text, int size)
{
    quest_text_t quest_text;

    quest_text.clock = sfClock_create();
    quest_text.txt = sfText_create();
    quest_text.Font = sfFont_createFromFile(Font);
    quest_text.sec = 0;
    quest_text.max_sec = 0;
    quest_text.opacity = 0;
    sfText_setString(quest_text.txt, text);
    sfText_setFont(quest_text.txt, quest_text.Font);
    sfText_setCharacterSize(quest_text.txt, size);
    sfText_setPosition(quest_text.txt, pos);
    return (quest_text);
}

void set_text_quest(rpg_t *rpg)
{
    char **array = text("src/set_structures/set_quest/quest", 390);

    GAME->q_text[0] = set_text_quest_struct(SUBTITLE,
    (sfVector2f){GAME_VAR->p_pos.x - 40, GAME_VAR->p_pos.y - 30}, "QUEST", 20);
    GAME->q_text[1] = set_text_quest_struct(SUBTITLE,
    (sfVector2f){GAME_VAR->p_pos.x - 40, GAME_VAR->p_pos.y - 30}, array[0], 16);
    GAME->q_text[2] = set_text_quest_struct(SUBTITLE,
    (sfVector2f){GAME_VAR->p_pos.x - 40, GAME_VAR->p_pos.y - 30}, array[1], 13);
    GAME->q_text[3] = set_text_quest_struct(SUBTITLE,
    (sfVector2f){GAME_VAR->p_pos.x - 40, GAME_VAR->p_pos.y - 30}, array[2], 13);
    GAME->q_text[4] = set_text_quest_struct(SUBTITLE,
    (sfVector2f){GAME_VAR->p_pos.x - 40, GAME_VAR->p_pos.y - 30}, array[3], 13);
    GAME->q_text[5] = set_text_quest_struct(SUBTITLE,
    (sfVector2f){GAME_VAR->p_pos.x - 40, GAME_VAR->p_pos.y - 30}, array[4], 13);
    GAME->q_text[6] = set_text_quest_struct(SUBTITLE,
    (sfVector2f){GAME_VAR->p_pos.x - 40, GAME_VAR->p_pos.y - 30}, array[5], 13);
    GAME->q_text[7] = set_text_quest_struct(SUBTITLE,
    (sfVector2f){GAME_VAR->p_pos.x - 40, GAME_VAR->p_pos.y - 30}, array[6], 13);
    my_free_array(array);
}

void set_quest(rpg_t *rpg)
{
    GAME_VAR->quest = 0;
    GAME_VAR->txt = 1;
    GAME_VAR->potion = sfFalse;

    GAME->quest[0] = set_quest_struct(BAR_DISCUSS, (sfVector2f){1899, 250},
    (sfIntRect){0, 0, 316, 77}, (sfVector2f){1.6, 1.9});
    GAME->quest[1] = set_quest_struct(WLCM_NAME_PATH, (sfVector2f){1899, 250},
    (sfIntRect){0, 0, 500, 208}, (sfVector2f){0.5, 0.5});
    set_text_quest(rpg);
}
