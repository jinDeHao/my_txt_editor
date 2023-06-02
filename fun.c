#include "omar.h"

/**
 * prompt - the prompt
 * @time: number of loops
*/
void prompt(int time)
{
    if (time == 0)
        write(STDOUT_FILENO, "enter your string plz : ", 24);
    else if (time > 6)
        write(STDOUT_FILENO, "you didn't done yet ahhhhh!\n just give me the string : ", 55);
    else
        write(STDOUT_FILENO, "enter your string again : ", 26);
}

/**
 * char_to_char - replace character to character
 * @str: the string
 * @rep: the old char
 * @to: the new char
 * Return: the new string
*/
char *char_to_char(char *str, char rep, char to)
{
    int i = 0;
    char *buff = str/*strdup(str)*/;

    while (buff[i] != '\0')
    {
        if (buff[i] == rep)
            buff[i] = to;
        i++;
    }
    return(buff);
}
char *no_char(char *str, char del)
{
    int i = 0, j = 0;
    char *sbuff, *buff = str/*malloc(strlen(str) + 1)*/;
    sbuff = str;

    while (buff[i] != '\0')
    {
        buff[i] = sbuff[j];
        if (buff[i] != del)
            i++;
        j++;
    }
    return(buff);
}
