#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - Print chess.
 * @a: an array of pointers of char
 */
void print_chessboard(char (*a)[8])
{
int b;
int c;
for (b = 0; b < 8; b++)
{
for (c = 0; c < 8; c++)
_putchar(a[b][c]);
_putchar('\n');
}
}
