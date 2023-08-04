#!/bin/bash
gcc -Wall -pedantic -Werrer -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
