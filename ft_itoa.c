/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 13:15:00 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/12 16:39:44 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

static int	ft_count_digits(int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		c++;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

static char	*ft_strrev(char	*s)
{
	size_t	i;
	size_t	strlen;
	char	temp;

	i = 0;
	strlen = ft_strlen(s);
	while (i < strlen / 2)
	{
		temp = s[i];
		s[i] = s[strlen - i - 1];
		s[strlen - i - 1] = temp;
		i++;
	}
	return (s);
}

static bool	ft_add_to_str(char *str, char c, size_t max_len)
{
	size_t	i;

	i = 0;
	while (i < max_len)
	{
		if (str[i] == '\0')
		{
			str[i] = c;
			return (true);
		}
		i++;
	}
	return (false);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		sign;

	sign = 1;
	len = ft_count_digits(n);
	str = (char *) ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		ft_add_to_str(str, '0', len);
		return (str);
	}
	if (n < 0)
		sign = -sign;
	while (n != 0)
	{
		ft_add_to_str(str, ft_abs(n % 10) + '0', len);
		n /= 10;
	}
	if (sign < 0)
		ft_add_to_str(str, '-', len);
	str = ft_strrev(str);
	return (str);
}

/* #include <assert.h>
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	assert(ft_strncmp(ft_itoa(123), "123", 3) == 0);
	assert(ft_strncmp(ft_itoa(-123), "-123", 4) == 0);
	assert(ft_strncmp(ft_itoa(INT_MAX), "2147483647", 10) == 0);
	assert(ft_strncmp(ft_itoa(INT_MIN), "-2147483648", 11) == 0);
	printf("Test Success");
}
 */