/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** read_file
*/

#include "include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char *extract_str(char const *filepath, int len)
{
    char *buffer = malloc(sizeof(char) * (len + 1));
    int fd = 0;

    if (buffer == NULL) {
        my_printf("malloc failed\n");
        return (buffer);
    }
    if ((fd = open(filepath, O_RDONLY)) == -1) {
        my_printf("error openig file\n");
        return (NULL);
    }
    if ((fd = read(fd, buffer, len)) == -1) {
        my_printf("error reading file\n");
        return (NULL);
    }
    buffer[len] = '\0';
    return (buffer);
}
