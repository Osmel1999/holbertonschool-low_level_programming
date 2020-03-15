# include  " variadic_functions.h "

/**
 * main - check the code for Holberton School students.
 * @n: constans
 * Return: Always 0.
 */
int  sum_them_all ( const  unsigned  int n, ...)
{
	unsigned  int i;
	int suma = 0 ;
	lista va_list ;

	va_start (lista, n);

	para (i = 0 ; i <n; i ++)
		sum + = va_arg (lista, int );

	va_end (lista);

	retorno (suma);
}
