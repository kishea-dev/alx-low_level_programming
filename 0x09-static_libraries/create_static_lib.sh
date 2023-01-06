#!/bin/bash

cc -fPIC -c *.c

ar rc liball.a 0-isupper.o
ar rc liball.a 0-memset.o
ar rc liball.a 0-strcat.o
ar rc liball.a 1-isdigit.o
ar rc liball.a 1-memcpy.o
ar rc liball.a 1-strncat.o
ar rc liball.a 100-atoi.o
ar rc liball.a 2-strchr.o
ar rc liball.a 2-strlen.o
ar rc liball.a 2-strncpy.o
ar rc liball.a 3-islower.o
ar rc liball.a 3-puts.o
ar rc liball.a 3-strcmp.o
ar rc liball.a 3-strspn.o
ar rc liball.a 4-isalpha.o
ar rc liball.a 4-strpbrk.o
ar rc liball.a 5-strstr.o
ar rc liball.a 6-abs.o
ar rc liball.a 9-strcpy.o
ar rc liball.a _putchar.o