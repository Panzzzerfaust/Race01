#include "header.h"

unsigned long long int mx_powten(int n) {
    unsigned long long int result = 1;
    for (int a = 0; a < n; a++) {
        result *= 10;
    }
    return result;
}

