#!bin/bash
#a sript that creates a static library liball.a

gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a
