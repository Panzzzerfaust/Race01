#include "header.h"

void mx_printcorrect(int num1, char op, int num2, int result) {
    bool f = false;
    if (op == '+' && num1 + num2 == result)
        f = true;
    if (op == '-' && num1 - num2 == result)
        f = true;
    if (op == '*' && num1 * num2 == result)
        f = true;
    if (op == '/' && num2 != 0)
        if (num1 / num2 == result)
            f = true;
    if (f) {
        mx_printint(num1);
        mx_printchar(' ');
        mx_printchar(op);
        mx_printchar(' ');
        mx_printint(num2);
        mx_printstr(" = ");
        mx_printint(result);
        mx_printchar('\n');
    }
}

