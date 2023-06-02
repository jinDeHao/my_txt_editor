#include "omar.h"

int main(void)
{
    size_t len;
    char *string, op[13], *p_t_op, *res;
    int nr, i = 0;

    signal(SIGINT, SIG_IGN);
    while (1)
    {
        string = NULL;
        res = NULL;
        prompt(i);
        nr = getline(&string, &len, stdin);
        if (nr < 0)
        {
            free(string);
            break;
        }
        string[nr - 1] = '\0';
        if (strcmp(string, ":q!") == 0)
        {
            free(string);
            exit(0);
        }
        write(STDOUT_FILENO, "which opiration do you want: ", 29);
        nr = read(STDIN_FILENO, op, 13);
        op[nr - 1] = '\0';
        if (strncmp(op, "no", 2) == 0)
        {
            p_t_op = op;
            p_t_op -= -3;
            if (strncmp(p_t_op, "sp", 2) == 0)
                res = no_char(string, ' ');
            else
                res = no_char(string, op[3]);
        }
        else if (strncmp(op, "rp", 2) == 0)
        {
            p_t_op = op;
            p_t_op -= -3;
            if (strncmp(p_t_op, "sp", 2) == 0)
                res = char_to_char(string, ' ', op[6]);
            else
                res = char_to_char(string, op[3], op[5]);
        }
        if (res == NULL)
            printf("**%s$$command not found$$\ndo you mean \":q!\"\n", op);
        else
            printf("this's your string after opiration : %s\n", res);
        free(string);
        if (res != NULL)
            free(res);
        i++;
    }
    return (0);
}