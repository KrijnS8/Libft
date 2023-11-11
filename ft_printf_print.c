/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_print.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 13:27:48 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/11/11 12:55:03 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>
#include "ft_printf.h"
#include "libft.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	s_len;

	if (s == NULL)
		return (write(1, "(null)", 6));
	s_len = ft_strlen(s);
	write(1, s, s_len);
	return (s_len);
}

int	ft_putnbr(int n)
{
	char	c;
	int		n_len;

	n_len = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n_len++;
	}
	if (n > 9 || n < -9)
		n_len += ft_putnbr(ft_abs((n / 10)));
	c = ft_abs(n % 10) + '0';
	write(1, &c, 1);
	n_len++;
	return (n_len);
}

int	ft_putuint_base(unsigned int n, char *base)
{
	unsigned int	base_system;
	int				n_len;
	char			c;

	base_system = ft_strlen(base);
	n_len = 0;
	if (n >= base_system)
		n_len += ft_putuint_base(n / base_system, base);
	c = base[n % base_system];
	write(1, &c, 1);
	n_len++;
	return (n_len);
}

int	ft_putptr(void *ptr)
{
	unsigned long int	p;
	int					p_len;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	p = (unsigned long int)ptr;
	p_len = 0;
	p_len += ft_putstr("0x");
	p_len += ft_putulint_base(p, BASE_16_LOWERCASE);
	return (p_len);
}
