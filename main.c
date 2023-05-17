#include "ft_printf.h"
#include <stdio.h>

int main(int ac, char **av)
{
	if (!ac)
		return 0;
	if (av[1][0] == 'f')
		ft_printf("ma ft : (%s)", 500);
	else
		printf("printf : (%s)", 500);
	return 0;
}