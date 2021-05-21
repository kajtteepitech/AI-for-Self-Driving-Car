/*
** PROJECT, 2021
** main
** File description:
** ai main
*/

#include "ai.h"

void ai(void)
{
    char **sep;
    while (1) {
        sep = get_cmnd(sep);
        if (sep == NULL)
            break;
        get_speed(sep);
        sep = get_cmnd(sep);
        if (sep == NULL)
            break;
        get_turn(sep);
        sep = get_cmnd(sep);
        if (sep == NULL)
            break;
    }
    my_free(sep);
}

int main(int ac, char **av)
{
    long size = 10;
    char *buf = malloc(sizeof(char) * 10);

    if (ac != 1) {
        free(buf);
        return (84);
    }
    else {
        my_putstr("START_SIMULATION\n");
        getline(&buf, &size, stdin);
        ai();
    }
    free(buf);
    return (0);
}
