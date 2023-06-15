#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Doubly linked list node structure */
typedef struct dlistint_s
{
    int n;                      /* Data */
    struct dlistint_s *prev;    /* Pointer to previous node */
    struct dlistint_s *next;    /* Pointer to next node */
} dlistint_t;

/* Function prototypes */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */

