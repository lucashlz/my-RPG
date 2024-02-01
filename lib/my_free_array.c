/*
** EPITECH PROJECT, 2022
** my_free_array
** File description:
** my_free_array
*/

#include "include/my.h"
#include <stdlib.h>

void my_free_array(char **array)
{
    for (int i = 0; array[i]; i++)
        free(array[i]);
    free(array);
}
