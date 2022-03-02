#!/bin/bash
gcc -Wall -pedantic .Werror _Wextra -c *.c
ar -rc liball.a *.o
