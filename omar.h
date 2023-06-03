#ifndef OMAR_H
#define OMAR_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

#define LINE_SIZE 256

void prompt(int time);
char *no_surr_spaces(char *old_command);
char *char_to_char(char *str, char rep, char to);
char *no_char(char *str, char del);
size_t howMany(char *str, char c);
void free2D(char **buff);
char **cMc(char *cmdLine);

#endif
