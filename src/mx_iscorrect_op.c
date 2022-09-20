#include "header.h"

bool mx_iscorrect_op(char *str) {
    int status = 1;
    for (int a = 0; str[a] != '\0'; a++) {
        if (status == 1) {
            if (!mx_isspace(str[a])) {
                status = 2;
                if (str[a] == '+'
                    || str[a] == '-'
                    || str[a] == '/'
                    || str[a] == '*'
                    || str[a] == '?')
                    continue;
                else
                    return false;
            }
        }
        if (status == 2)
            if (!mx_isspace(str[a]))
                return false;
    }
    return true;
}

