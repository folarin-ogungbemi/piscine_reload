#ifndef FT_PRINT_H
# define FT_PRINT_H

// Define used library
# include <unistd.h>

// Define header functions
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
#endif
