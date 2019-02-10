#!/bin/bash
gcc -c vc_putstr.c
gcc -c vc_swap.c
gcc -c vc_strlen.c
gcc -c vc_strcmp.c
ar -cvq libvc.a *.o
rm -f myheader.h
echo "void vc_swap(int *a, int *b);" > myheader.h
echo "void vc_putstr(char *str);" >> myheader.h
echo "int vc_strlen(char *str);" >> myheader.h
echo "int vc_strcmp(char *s1, char *s2);" >> myheader.h