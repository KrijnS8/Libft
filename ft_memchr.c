/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:57:36 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/12 13:33:01 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}

/* #include <assert.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "Hello World!";

	assert((char *)ft_memchr(str, 'W', 12) - &str[6] == 0);
	assert(ft_memchr(str, 'b', 12) == NULL);
	assert(ft_memchr(NULL, 'H', 0) == NULL);
	printf("Test Success");
}
 */