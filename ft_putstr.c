#include "../ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		i += ft_putstr("(null)");
		return (i);
	}
	while (*str)
	{
		i += ft_putchar(*str);
		str++;
	}
	return (i);
}
