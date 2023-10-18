/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 13:51:28 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/12 12:35:14 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/* #include <assert.h>
#include <stdio.h>

void	assert_mem(void *ptr, int value, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		assert(((unsigned char *)ptr)[i++] == value);
}

int	main(void)
{
	char	temp[3];

	ft_bzero(temp, 3);
	assert_mem(temp, '\0', 3);
	printf("Test Success");
}
 */