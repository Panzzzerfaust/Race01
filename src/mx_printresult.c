#include "header.h"

void mx_printresult(int qmark, char oper, char **qm, char ***argv) {
    int num1;
    int num2;
    int result;
    unsigned long long int max = mx_powten(qmark);
    for (unsigned long long int i = 0; i < max; i++) {
        int n = i;
        for (int a = 0; a < qmark; a++) {
            qm[qmark - a - 1][0] = n % 10 + 48;
            n /= 10;
        }
        num1 = mx_atoi(argv[0][1]);
        num2 = mx_atoi(argv[0][3]);
        result = mx_atoi(argv[0][4]);
        mx_printcorrect(num1, oper, num2, result);
    }
}

