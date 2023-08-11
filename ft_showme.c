
#include "ft_push_swap.h"

void	showme(t_list *list)
{
	int	x;

	x = 0;
	printf ("Este es el resultado del depurador.\n");
	while (list->next != NULL)
	{
		printf ("MODULO %d, cont= [%d] y apunta a [%d]\n", x, list->cont, list->next->cont);

		list = list->next;
		x++;
	}
	printf ("Aqui se acaba el resultado del depurador.\n");
}