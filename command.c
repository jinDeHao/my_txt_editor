#include "omar.h"
/*move the commands to here*/
char *process_string(char **process, char *string)
{
    char *stringAfterProcess = NULL;

    if (strcmp(process[0], "no") == 0)
    {
        if (strcmp(process[1], "sp") == 0)
            stringAfterProcess = no_char(string, ' ');
        else
            stringAfterProcess = no_char(string, *process[1]);
    }
    else if (strcmp(process[0], "rp") == 0)
    {
        if (strcmp(process[1], "sp") == 0)
            stringAfterProcess = char_to_char(string, ' ', *process[2]);
        else
            stringAfterProcess = char_to_char(string, *process[1], *process[2]);
    }
    else if (strcmp(process[0], "upcase") == 0)
        stringAfterProcess  = forget_uppercase(string);
    
    return (stringAfterProcess);
}