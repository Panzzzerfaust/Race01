#include "header.h"

char mx_getoperator(char *str) {
    char result = 0;
    int spases = 0;
    for (int a = 0; str[a] != '\0' ; a++) {
        if (spases == 0 && !mx_isspace(str[a])) {
            if (str[a] == '+'
                || str[a] == '-'
                || str[a] == '*'
                || str[a] == '/'
                || str[a] == '?') {
                result = str[a];
                spases = 1;
                continue;
            }
        }
        if (spases != 0)
            if (!mx_isspace(str[a]))
                result = 0;
    }
    return result;
}

