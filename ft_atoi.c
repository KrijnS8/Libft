/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 17:05:08 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/03/08 11:50:44 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] != '\0')
	{
		if (!ft_isdigit(nptr[i]))
			return (result * sign);
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/* #include <assert.h>
#include <stdio.h>

int	main(void)
{
	assert(ft_atoi("123") == 123);
	assert(ft_atoi("-123") == -123);
	assert(ft_atoi("+123") == 123);
	assert(ft_atoi("  -123") == -123);
	assert(ft_atoi("    --123") == 0);
	assert(ft_atoi("123askdfjsk") == 123);
	printf("Test Success");
}
 */