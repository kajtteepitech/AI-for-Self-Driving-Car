/*
** PROJECT, 2021
** turn
** File description:
** turning gesture
*/

#include "ai.h"

void turn_right(int mid)
{
    if (mid >= 800)
        my_putstr("WHEELS_DIR:-0.05\n");
    else if (mid < 800 && mid >= 500)
        my_putstr("WHEELS_DIR:-0.2\n");
    else if (mid < 500 && mid >= 300)
        my_putstr("WHEELS_DIR:-0.4\n");
    else
        my_putstr("WHEELS_DIR:-0.5\n");
}

void turn_left(int mid)
{
    if (mid >= 800)
        my_putstr("WHEELS_DIR:0.05\n");
    else if (mid < 800 && mid >= 500)
        my_putstr("WHEELS_DIR:0.2\n");
    else if (mid < 500 && mid >= 300)
        my_putstr("WHEELS_DIR:0.4\n");
    else
        my_putstr("WHEELS_DIR:0.5\n");
}

void get_turn(char **sep)
{
    long size = 10;
    char *buf = malloc(sizeof(char) * 10);
    float r = atof(sep[31]);
    float l = atof(sep[0]);
    int mid = atoi(sep[15]);

    if ((r - l) > 0)
        turn_right(mid);
    else
        turn_left(mid);
    getline(&buf, &size, stdin);
    free(buf);
}