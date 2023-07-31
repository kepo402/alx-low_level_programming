#include <stddef.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        int num = h->n;
        int digits = 0;
        int divisor = 1;

        /* Count the number of digits in the number */
        while (num / divisor != 0)
        {
            digits++;
            divisor *= 10;
        }

        /* Handle negative numbers */
        if (h->n < 0)
            digits++;

        /* Account for 0 */
        if (h->n == 0)
            digits = 1;

        /* Allocate memory for a string representation of the number */
        char *num_str = malloc((digits + 1) * sizeof(char));
        if (num_str == NULL)
            exit(1);

        /* Convert the number to a string */
        if (h->n == 0)
            num_str[0] = '0';
        else if (h->n < 0)
        {
            num_str[0] = '-';
            num_str[digits] = '\0';
            num = -num;
        }
        else
            num_str[digits - 1] = '\0';

        while (num != 0)
        {
            digits--;
            num_str[digits] = num % 10 + '0';
            num /= 10;
        }

        /* Print the number using _putchar */
        int i = 0;
        while (num_str[i] != '\0')
        {
            _putchar(num_str[i]);
            i++;
        }
        _putchar('\n');

        free(num_str);
        h = h->next;
        node_count++;
    }

    return node_count;
}

