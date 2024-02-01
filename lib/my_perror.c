/*
** EPITECH PROJECT, 2022
** my_putstr_e
** File description:
** display string on error exit
*/

#include "include/my.h"
#include <unistd.h>

void my_perror(char const *str)
{
    for (; *str; str++)
        write(2, &(*str), 1);
}
