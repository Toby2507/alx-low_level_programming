#ifndef MAIN_H
#define MAIN_H

int _putchar(char);
void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));
int int_index(int *, int, int (*cmp)(int));

#endif /* MAIN_H */
