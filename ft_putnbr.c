#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i = i + ft_putchar('-');
		i = i + ft_putchar('2');
		i = i + ft_putnbr(147483648);
		return (i);
	}
	if (n < 0)
	{
		i = i + ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		i = i + ft_putnbr(n / 10);
	i = i + ft_putchar(n % 10 + '0');
	return (i);
}
