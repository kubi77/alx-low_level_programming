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
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
#endif /* LISTS_H */

