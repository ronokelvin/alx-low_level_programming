
#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

char **strtow(char *str);
int _putchar(char);
int **alloc_grid(int width, int height);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *argstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
