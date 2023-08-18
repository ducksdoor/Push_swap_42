
#include "ft_push_swap.h"

//busqueda por internet de ideas//

void	printBinary(int num) 
{
	int	size;
	int	i;

	size = sizeof(int) * 8;
	i = size - 1;
	while (i >= 0)
	{
		int bit = (num >> i) & 1;
		printf("%d", bit);
		i--;
	}
	printf("\n");
}



void	showme(t_list_plus *list, char *a)
{
	int	x;

	x = 0;
	ft_putstr(a);
	printf ("Este es el resultado del depurador.\n");
	while (list != NULL)
	{
		
		if (list->next != NULL)
		{
			printf ("este es el binario de [%d] =", list->inde);
			printBinary(list->inde);
			printf("MODULO %d, contenido= [%d], indice= [%d] y apunta a [%d]\n", x, list->cont, list->inde, list->next->cont);
		}
		else
		{
			printf ("este es el binario de [%d] =", list->inde);
			printBinary(list->inde);
			printf("MODULO %d, contenido= [%d], indice= [%d] y apunta a [NULL]\n", x, list->cont, list->inde);
		}
		list = list->next;
		x++;
	}
	printf ("Aqui se acaba el resultado del depurador.\n\n");
}