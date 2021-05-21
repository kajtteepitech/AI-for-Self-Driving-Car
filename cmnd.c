/*
** PROJECT, 2021
** cmnd gesture
** File description:
** cmnd functions
*/

#include "ai.h"

static int get_nbr_info(char *buff, char sep)
{
    int nbr = 1;

    for (int i = 0; buff[i] != '\0'; i++)
        if (buff[i] == sep)
            nbr++;
    return (nbr);
}

char **separate(char *buff)
{
    int nbr = get_nbr_info(buff, ':');
    char **split = malloc(sizeof(char *) * nbr);
    int u = 0;

    for (int i = 0; i != nbr; i++)
        split[i] = malloc(sizeof(char) * 20);
    for (u = 2; buff[u] < '0' || buff[u] > '9'; u++);
    for (int i = u, j = 0, z = 0; buff[i] != '\0'; i++, z++) {
        if (buff[i] == ':') {
            split[j][z + 1] = '\0';
            i++;
            j++;
            z = 0;
        }
        split[j][z] = buff[i];
    }
    split[33] = NULL;
    return (split);
}

int processing(char **sep)
{
    long size = 10;
    char *buf = malloc(sizeof(char) * 10);

    for (int i = 0; sep[i] != NULL; i++) {
        if (strcmp(sep[i], "Track Cleared") == 0) {
            my_putstr("CAR_FORWARD:0\n");
            getline(&buf, &size, stdin);
            my_putstr("CYCLE_WAIT:20\n");
            getline(&buf, &size, stdin);
            my_putstr("STOP_SIMULATION\n");
            getline(&buf, &size, stdin);
            return (1);
        }
    }
    return (0);
}

char **get_cmnd(char **sep)
{
    long size = 10;
    char *buf = malloc(sizeof(char) * 10);

    my_putstr("GET_INFO_LIDAR\n");
    getline(&buf, &size, stdin);
    sep = separate(buf);
    if (processing(sep) == 1)
        return (NULL);
    return (sep);
}