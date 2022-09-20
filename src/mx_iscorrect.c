#include "header.h"

bool mx_iscorrect(int argc, char **argv) {
    if (argc != 5) {
        mx_printerr(0, argv[0]);
        return false;
    }
    if (!mx_iscorrect_op(argv[2]))
        mx_printerr(2, argv[2]);
    else if (!mx_iscorrect_num(argv[1]))
        mx_printerr(1, argv[1]);
    else if (!mx_iscorrect_num(argv[3]))
        mx_printerr(1, argv[3]);
    else if (!mx_iscorrect_num(argv[4]))
        mx_printerr(3, argv[4]);
    else
        return true;
    return false;
}

