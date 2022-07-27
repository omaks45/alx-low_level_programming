#!bin/bash
gcc -Wall -Wextra -pedantic -c *.c
ar rc liballa.a *.o
