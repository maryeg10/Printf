#include "../ft_printf.h"

int	ft_put_ptr(void *ptr)
{
	unsigned long long	address;
	int					i;

	i = 0;
	address = (unsigned long long)ptr;
	if (address == 0)
	{
		i = i + ft_putstr("(nil)");
		return (i);
	}
	i = i + ft_putstr("0x");
	i = i + ft_put_hex_lower_64(address);
	return (i);
}
