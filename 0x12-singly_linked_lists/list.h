# ifndef LISTAS_H
# define  LISTAS_H

/ * *
 * struct list_s - lista individualmente vinculada
 * @str: string - (cadena mal asignada)
 * @len: longitud de la cadena
 * @next: apunta al siguiente nodo
 * *
 * Descripción: estructura de nodo de lista individualmente vinculada
 * para el proyecto Holberton
 * /
typedef  struct list_s
{
	char * str;
	unsigned  int len;
	struct list_s * next;
} list_t ;

size_t  print_list ( const  list_t * h);
size_t  list_len ( const  list_t * h);
list_t * add_node ( list_t ** head, const  char * str);
list_t * add_node_end ( list_t ** head, const  char * str);
void  free_list ( list_t * head);

# endif
