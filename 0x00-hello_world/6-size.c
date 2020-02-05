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
long int linvar;
long long int l2invar;
float flovar;
printf("Size of char  %Id bytes\n", sizeof(chavar));
printf("Size of int  %Id bytes\n", sizeof(invar));
printf("Size of long int  %Id bytes\n", sizeof(linvar));
printf("Size of long long int  %Id bytes\n", sizeof(l2invar));
printf("Size of float  %Id bytes\n", sizeof(flovar));
return (0);
}
