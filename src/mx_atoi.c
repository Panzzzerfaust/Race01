#include "header.h"

int mx_atoi(const char *str) {
    int result = 0;
    int spases = 0;
    for (int a = 0; str[a] != '\0' ; a++) {
        if (spases == 0) {
            if (!mx_isspace(str[a]) && str[a] != '0') {
                if (str[a] == '-') {
                    spases = -1;
                    continue;
                }
                else {
                    spases = 1;
                }
            }
        }
        if (spases != 0) {
            if (mx_isdigit(str[a]))
                result = result * 10 + (int)str[a] - 48;
            else
                break;
        }
    }
    return result * spases;
}

