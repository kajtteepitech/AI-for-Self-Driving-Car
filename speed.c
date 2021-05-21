/*
** PROJECT, 2021
** speed
** File description:
** speed gesture
*/

#include "ai.h"

void gest_slow(int mid)
{
    if (mid < 1000 && mid >= 500)
        my_putstr("CAR_FORWARD:0.4\n");
    else if (mid < 500 && mid >= 100)
        my_putstr("CAR_FORWARD:0.2\n");
    else if (mid < 100)
        my_putstr("CAR_FORWARD:0.1\n");
}

void get_speed(char **sep)
{
    long size = 10;
    int mid = atoi(sep[15]);
    char *buf = malloc(sizeof(char) * 10);

    if (mid >= 2000)
        my_putstr("CAR_FORWARD:0.7\n");
    else if (mid < 2000 && mid >= 1500)
        my_putstr("CAR_FORWARD:0.6\n");
    else if (mid < 1500 && mid >= 1000)
        my_putstr("CAR_FORWARD:0.5\n");
    gest_slow(mid);
    getline(&buf, &size, stdin);
    free(buf);
}