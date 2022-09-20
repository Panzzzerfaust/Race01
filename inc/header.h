#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_strlen(const char *s);
void mx_printerr(int err, char *str);
bool mx_iscorrect_num(char *str);
bool mx_iscorrect_op(char *str);
bool mx_iscorrect(int argc, char **argv);
void mx_printstr(const char *s);
int mx_atoi(const char *str);
unsigned long long int mx_powten(int n);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printcorrect(int num1, char op, int num2, int result);
void mx_printresult(int qmark, char oper, char **qm, char ***argv);
char mx_getoperator(char *str);
int mx_countofq(char **argv);

#endif


