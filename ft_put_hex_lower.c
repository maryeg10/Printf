#include "../ft_printf.h"

int	ft_put_hex_lower(unsigned int n)
{
	char	*hex_digits;
	int		digit;
	int		count;

	count = 0;
	if (n >= 16)
		count += ft_put_hex_lower(n / 16);
	hex_digits = "0123456789abcdef";
	digit = hex_digits[n % 16];
	count += write(1, &digit, 1);
	return (count);
}
