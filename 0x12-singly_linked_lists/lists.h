#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Define the list_t structure here */

/* Function prototypes */
size_t print_list(const list_t *h);
int _putchar(char c); /* Add the _putchar prototype */
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
