#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o use_putchar \
    use_putchar.c -L. -lmy
./use_putchar
