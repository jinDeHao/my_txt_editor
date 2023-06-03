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
    char *buff = strdup(str);

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
    char *sbuff, *buff;
    
    sbuff = str;
    buff = malloc(strlen(sbuff) + 1);
    if (!buff)
        return(NULL);

    while (sbuff[j] != '\0')
    {
        if (sbuff[j] != del)
        {
            buff[i] = sbuff[j];
            i++;
        }
        j++;
    }
    buff[i] = '\0';
    return(buff);
}

size_t howMany(char *str, char c)
{
    size_t num = 0, i;
    char *sstr = str;

    for (i = 0; sstr[i] != '\0'; i++)
    {
        if (sstr[i] == c)
            num++;
    }
    return (num);
}

char *no_surr_spaces(char *old_command)
{
	char *first = old_command, *end;

    while(*first == ' ')
        first++;
    end = first + strlen(first) - 1;
    while(*end == ' ')
        end--;
    *(end + 1) = '\0';
    return(first);
}