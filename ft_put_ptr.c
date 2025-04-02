#include "../ft_printf.h"

int	ft_put_ptr(void *ptr)
{
	unsigned long long	address;
	int					i;

	i = 0;
	address = (unsigned long long)ptr;
	if (address == 0)
	{
		i += ft_putstr("(nil)");
		return (i);
	}
	i += ft_putstr("0x");
	i += ft_put_hex_lower_64(address);
	return (i);
}
