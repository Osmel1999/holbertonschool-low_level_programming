#include "holberton.h"
/**
 * print_chessboard - check the code for Holberton School students.
 * @matrix: pointer array
 **/
void print_chessboard(char (*matrix)[8])
{
int i;
int j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(*(*(matrix + i) + j));
}
_putchar('\n');
}
}
