#include "header.h"

int main(int argc, char **argv) {
    if(!mx_iscorrect(argc, argv))
        return 0;
    char *qm[mx_countofq(argv)];
    int qmark = 0;
    for (int a = 0; argv[1][a] != '\0'; a++)
        if (argv[1][a] == '?')
            qm[qmark++] = &argv[1][a];
    for (int a = 0; argv[3][a] != '\0'; a++)
        if (argv[3][a] == '?')
            qm[qmark++] = &argv[3][a];
    for (int a = 0; argv[4][a] != '\0'; a++)
        if (argv[4][a] == '?')
            qm[qmark++] = &argv[4][a];
    if(mx_getoperator(argv[2]) == '?') {
        mx_printresult(qmark, '+', qm, &argv);
        mx_printresult(qmark, '-', qm, &argv);
        mx_printresult(qmark, '*', qm, &argv);
        mx_printresult(qmark, '/', qm, &argv);
    }
    else
        mx_printresult(qmark, mx_getoperator(argv[2]), qm, &argv);
    return 0;
}

