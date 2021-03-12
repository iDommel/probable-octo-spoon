/*
** EPITECH PROJECT, 2021
** probable-octo-spoon
** File description:
** main
*/

#include "stdio.h"

int main(int argc, char **argv) {
    if (argc == 1)
        printf("hello world\n");
    else if (argc == 2)
        printf("Hi, %s\n", argv[1]);
    else {
        printf("Sorry, I didn't quite get that !\n");
        return (84);
    }
    return (0);
}