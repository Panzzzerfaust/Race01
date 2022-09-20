#include "header.h"

bool mx_iscorrect_num(char *str) {
    int status = 1;
    for (int a = 0; str[a] != '\0'; a++) {
        if (status == 1) {
            if (!mx_isspace(str[a])) {
                status = 2;
                if (str[a] == '-')
                    continue;
            }
        }
        if (status == 2)
            if (!(mx_isdigit(str[a]) || str[a] == '?'))
                status = 3;
        if (status == 3)
            if (!mx_isspace(str[a]))
                return false;
    }
    return true;
}

