/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** set_pnj_struct
*/

#include "my_rpg.h"

static pnj_t set_pnj_struct(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    pnj_t pnj;

    pnj.clock = sfClock_create();
    pnj.sprite = sfSprite_create();
    pnj.texture = sfTexture_createFromFile(path, NULL);
    pnj.rect = rect;
    pnj.pos = pos;
    pnj.scale = scale;
    pnj.opacity = sfColor_fromRGBA(255, 255, 255, 255);
    sfSprite_setTexture(pnj.sprite, pnj.texture, sfTrue);
    sfSprite_setTextureRect(pnj.sprite, pnj.rect);
    sfSprite_setPosition(pnj.sprite, pnj.pos);
    return (pnj);
}

void set_pnj(rpg_t *rpg)
{
    GAME->pnj[0] = set_pnj_struct(PNJ_GIRL_FACE, (sfVector2f){1103, 994},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[1] = set_pnj_struct(PNJ_RASTA_BACK, (sfVector2f){907, 1170},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[2] = set_pnj_struct(PNJ_CHEF_FACE, (sfVector2f){772, 860},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.1, 1.1});
    GAME->pnj[3] = set_pnj_struct(PNJ_BOUDA_RIGHT, (sfVector2f){670, 870},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[4] = set_pnj_struct(PNJ_BAZANE_LEFT, (sfVector2f){1590, 1102},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[5] = set_pnj_struct(PNJ_GIRL_RIGHT, (sfVector2f){1550, 1100},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.3, 1.3});
    GAME->pnj[6] = set_pnj_struct(PNJ_GIRL_FACE, (sfVector2f){1582, 850},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.1, 1.1});
    GAME->pnj[7] = set_pnj_struct(PNJ_RASTA_BACK, (sfVector2f){1582, 950},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.1, 1.1});
    GAME->pnj[8] = set_pnj_struct(PNJ_BOUDA_BACK, (sfVector2f){1550, 990},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[9] = set_pnj_struct(PNJ_BAZANE_BACK, (sfVector2f){1590, 1020},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[10] = set_pnj_struct(PNJ_BAZANE_FACE, (sfVector2f){1390, 1329},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[11] = set_pnj_struct(PNJ_GIRL_LEFT, (sfVector2f){1191, 1425},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.3, 1.3});
    GAME->pnj[12] = set_pnj_struct(PNJ_GIRL_FACE, (sfVector2f){762, 1521},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[13] = set_pnj_struct(PNJ_RASTA_BACK, (sfVector2f){772, 1596},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[14] = set_pnj_struct(PNJ_BOUDA_BACK, (sfVector2f){752, 1620},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.3, 1.3});
    GAME->pnj[15] = set_pnj_struct(PNJ_BAZANE_RIGHT, (sfVector2f){712, 1640},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.3, 1.3});
    GAME->pnj[16] = set_pnj_struct(PNJ_CHEF_RIGHT, (sfVector2f){675, 1620},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.3, 1.3});
    GAME->pnj[17] = set_pnj_struct(PNJ_GIRL_LEFT, (sfVector2f){1000, 2270},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.3, 1.3});
    GAME->pnj[18] = set_pnj_struct(PNJ_BOUDA_RIGHT, (sfVector2f){905, 2230},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.3, 1.3});
    GAME->pnj[19] = set_pnj_struct(PNJ_BOUDA_RIGHT, (sfVector2f){1910, 1690},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.3, 1.3});
    GAME->pnj[20] = set_pnj_struct(PNJ_BAZANE_LEFT, (sfVector2f){2010, 1670},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.3, 1.3});
    GAME->pnj[21] = set_pnj_struct(PNJ_GIRL_FACE, (sfVector2f){2251, 1558},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[22] = set_pnj_struct(PNJ_BAZANE_FACE, (sfVector2f){2311, 2146},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[23] = set_pnj_struct(PNJ_RASTA_LEFT, (sfVector2f){2830, 1890},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.3, 1.3});
    GAME->pnj[24] = set_pnj_struct(PNJ_BAZANE_FACE, (sfVector2f){2780, 1870},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.1, 1.1});
    GAME->pnj[25] = set_pnj_struct(PNJ_CHEF_BACK, (sfVector2f){2790, 1930},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[26] = set_pnj_struct(PNJ_CHEF_FACE, (sfVector2f){3410, 2236},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[27] = set_pnj_struct(PNJ_GIRL_FACE, (sfVector2f){2274, 675},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[28] = set_pnj_struct(PNJ_GIRL_LEFT, (sfVector2f){1275, 1924},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
    GAME->pnj[29] = set_pnj_struct(PNJ_GIRL_RIGHT, (sfVector2f){1275, 1924},
    (sfIntRect){0, 0, 48, 48}, (sfVector2f){1.2, 1.2});
}
