#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int count_words(char *str);
int word_len(char *str);
char **cut_str(char *str, int word_count);
#endif
