#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char chavar;
int invar;
long linvar;
double l2invar;
float flovar;
printf("Size of a char: %ld byte(s)\n", sizeof(chavar));
printf("Size of an int: %ld byte(s)\n", sizeof(invar));
printf("Size of a long int: %ld byte(s)\n", sizeof(linvar));
printf("Size of a long long int: %ld byte(s)\n", sizeof(l2invar));
printf("Size of a float: %ld byte(s)\n", sizeof(flovar));
return (0);
}
