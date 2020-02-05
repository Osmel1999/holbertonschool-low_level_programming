#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void);
{
char chavar;
int invar;
long int linvar;
long long int l2invar;
float flovar;
printf("Size of char:  %ld byte\n", sizeof(chavar));
printf("Size of int:  %ld bytes\n", sizeof(invar));
printf("Size of long int:  %ld bytes\n", sizeof(linvar));
printf("Size of long long int:  %ld bytes\n", sizeof(l2invar));
printf("Size of float:  %ld bytes\n", sizeof(flovar));
return (0);
}
