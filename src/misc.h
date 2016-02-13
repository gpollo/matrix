#ifndef MISC_INCLUDE_H
#define MISC_INCLUDE_H

#include <ncurses.h>

int int_add(int a, int b, int max);
int concatenate_int(int a, int b);
void wprint_center(WINDOW* window, char* string);
void wcenter(WINDOW* window, char* string);
void wnewline(WINDOW* window);

#endif