#ifndef OMAR_H
#define OMAR_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void prompt(int time);
char *char_to_char(char *str, char rep, char to);
char *no_char(char *str, char del);
size_t num_char(char *str, char c);

#endif
