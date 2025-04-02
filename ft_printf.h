#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		ft_print_arg(char c, va_list args);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putunsigned(unsigned int n);
int		ft_put_hex_lower(unsigned int n);
int		ft_put_hex_upper(unsigned int n);
int		ft_put_hex_lower_64(unsigned long long n);
int		ft_put_ptr(void *ptr);

#endif