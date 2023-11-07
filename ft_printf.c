/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 17:11:25 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/11/07 12:15:24 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

int	ft_format(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_putuint(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_putuint_base(va_arg(args, int), BASE_16_LOWERCASE));
	if (c == 'X')
		return (ft_putuint_base(va_arg(args, int), BASE_16_UPPERCASE));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		p_len;
	int		i;

	i = 0;
	p_len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			p_len += ft_format(args, str[i + 1]);
			i++;
		}
		else
			p_len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (p_len);
}

#include <stdio.h>

int main(void)
{
	//char *s = NULL;
    //void *p = NULL;
    //int i = -2;
	ft_printf("%s", "NULL");
	//printf("\nasdfsdf%");
}
