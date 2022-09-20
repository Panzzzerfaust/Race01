#include "header.h"

int mx_countofq(char **argv) {
    int qmark = 0;
    for (int a = 0; argv[1][a] != '\0'; a++)
        if(argv[1][a] == '?')
            qmark++;
    for (int a = 0; argv[3][a] != '\0'; a++)
        if(argv[3][a] == '?')
            qmark++;
    for (int a = 0; argv[4][a] != '\0'; a++)
        if(argv[4][a] == '?')
            qmark++;
    return qmark;
}

