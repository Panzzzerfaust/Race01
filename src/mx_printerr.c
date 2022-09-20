#include "header.h"

void mx_printerr(int err, char *str) {
    if (err == 0) {
        write(2, "usage: ", 7);
        write(2, str, mx_strlen(str));
        write(2, " [operand1] [operation] [operand2] [result]\n", 44);
    }
    else if (err == 1) {
        write(2, "Invalid operand: ", 17);
        write(2, str, mx_strlen(str));
        write(2, "\n", 1);
    }
    else if (err == 2) {
        write(2, "Invalid operation: ", 19);
        write(2, str, mx_strlen(str));
        write(2, "\n", 1);
    }
    else if (err == 3) {
        write(2, "Invalid result: ", 16);
        write(2, str, mx_strlen(str));
        write(2, "\n", 1);
    }
}

