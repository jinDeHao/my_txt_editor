#include "omar.h"

int main(void)
{
    size_t len;
    char *string, op[LINE_SIZE], *res, **cmd;
    int nr, i = 0;

    signal(SIGINT, SIG_IGN);
    while (1)
    {
        cmd = NULL;
        string = NULL;
        res = NULL;
        prompt(i);
        nr = getline(&string, &len, stdin);
        if (nr < 0)
        {
            free(string);
            free2D(cmd);
            break;
        }
        string[nr - 1] = '\0';
        if (strcmp(string, ":q!") == 0)
        {
            free(string);
            free2D(cmd);
            exit(0);
        }
        write(STDOUT_FILENO, "which opiration do you want: ", 29);
        if ((nr = read(STDIN_FILENO, op, LINE_SIZE)) != -1)
        {
            op[nr - 1] = '\0';
            char *pop = op;
            cmd = cMc(pop); /*cMc is a function that creats multipe commands*/
            res = process_string(cmd, string);
        }
        if (res == NULL)
            printf("**%s$$command not found$$\ndo you mean \":q!\"\n", cmd[0]);
        else
            printf("this's your string after opiration : %s\n", res);
        free(string);
        if (res != NULL)
            free(res);
        free2D(cmd);
        i++;
    }
    return (0);
}