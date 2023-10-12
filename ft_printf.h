#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

typedef struct s_data
{
	int		count;
	int		value;
	va_list	ap;
}	t_data;

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_strlen(char *format);
int		ft_putstr(char *format);
int		ft_putnbr(int nb);
int		ft_type_u(unsigned int n);
int		ft_type_x(unsigned long long nbr, char format);
int		ft_type_p(void *nbr, char format);
void	ft_cursor(char *format, t_data *data);

#endif
