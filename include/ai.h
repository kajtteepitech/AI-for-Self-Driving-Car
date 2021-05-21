/*
** EPITECH PROJECT, 2020
** include.h
** File description:
** test
*/

#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ncurses.h>
#include <stddef.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdarg.h>

void my_putchar(char c);
int my_strcmp(char const *str1, char const *str2);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);

char **get_cmnd(char **sep);
void my_free(char **str);
void get_speed(char **sep);
void get_turn(char **sep);