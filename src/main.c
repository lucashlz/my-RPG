/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include <stdio.h>
#include "my_rpg.h"
#define RETRY_HELP "./my_rpg: bad arguments: %d given, need 1.\nretry -h\n "

int help(void)
{
    int c;
    FILE *file;
    file = fopen("help.txt", "r");

    if (file)
        while ((c = getc(file)) != EOF)
            my_putchar(c);
    fclose(file);
    return (0);
}

int main(int ac, char **av)
{
    rpg_t *rpg = NULL;

    if (ac > 2) {
        my_printf(RETRY_HELP, ac);
        return (84);
    }
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        return (help());
    my_rpg(set_rpg_struct(rpg));
    return (0);
}
