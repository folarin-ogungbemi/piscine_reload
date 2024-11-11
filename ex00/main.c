#include "ft_print.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
		return (0);
	i = 1;
	while (i <= (ac - 1))
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
