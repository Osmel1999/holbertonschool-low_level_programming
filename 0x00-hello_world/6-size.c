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
printf("Size of char:  %ld byte(s)\n", sizeof(chavar));
printf("Size of int:  %ld byte(s)\n", sizeof(invar));
printf("Size of long int:  %ld byte(s)\n", sizeof(linvar));
printf("Size of long long int:  %ld byte(s)\n", sizeof(l2invar));
printf("Size of float:  %ld byte(s)\n", sizeof(flovar));
return (0);
}
