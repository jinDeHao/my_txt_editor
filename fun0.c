#include "omar.h"
char **cMc(char *cmdLine)
{
    char **rooms = NULL, *use = NULL, *delimiter = ":";
    int i = 0;
    size_t num = howMany(cmdLine, ':'); /*to count a num of char in the string*/
    num++;
    rooms = malloc((num + 1)* sizeof(char *));
    if(!rooms)
        return(NULL);
    use = strtok(cmdLine, delimiter);
    while (use)
    {
        rooms[i] = strdup(use);
        use = strtok(NULL, delimiter);
        i++;
    }
    rooms[i] = NULL;
    return (rooms);
}

void free2D(char **buff)
{
    int i = 0;

    if (buff)
    {
        while (buff[i] != NULL)
        {
            free(buff[i]);
            i++;
        }
        free(buff);
    }
}