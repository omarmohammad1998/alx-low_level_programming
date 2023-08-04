#!/bin/bash
gcc -wall -pedantic -werrer -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
