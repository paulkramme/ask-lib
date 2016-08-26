#ifndef ASKLIB_H_INCLUDED
#define ASKLIB_H_INCLUDED

#include"getch.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ask(char question[256]);
int ask_long(char question[256]);
int ask_for_quit(void);

#endif
