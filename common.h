#ifndef COMMON_H
#define COMMON_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int strlen2(char *);
int ilen(int);
char *memset2(char *, int, int);
char *strcpy2(char *, char*);
char *nonoalnum(char *);
char *codage1(char *);
char *codage3(char *);
char *codage2(char *);

#include "common.c"
#endif

