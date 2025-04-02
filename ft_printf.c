#include "ft_printf.h"

int	ft_print_arg(char c, va_list args)
{
	int	i;

	i = 0;
	if (c == '%')
		i += ft_putchar('%');
	else if (c == 'i' || c == 'd')
		i += ft_putnbr(va_arg(args, int));
	else if (c == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (c == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (c == 'u')
		i += ft_putunsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		i += ft_put_hex_lower(va_arg(args, unsigned int));
	else if (c == 'X')
		i += ft_put_hex_upper(va_arg(args, unsigned int));
	else if (c == 'p')
		i += ft_put_ptr(va_arg(args, void *));
	return (i);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		total_len;
	int		j;

	total_len = 0;
	j = -1;
	va_start(args, str);
	while (str[++j])
	{
		if (str[j] == '%')
			total_len += ft_print_arg(str[++j], args);
		else
			total_len += ft_putchar(str[j]);
	}
	va_end(args);
	return (total_len);
}
