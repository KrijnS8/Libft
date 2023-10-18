/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 13:34:34 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/12 16:38:18 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

/* #include <assert.h>
#include <stdio.h>

int	main(void)
{
	char	*ptr;
	char	*str = "AAAAAAAAAA";

	ptr = (char *)ft_calloc(11, sizeof(char));
	ft_memset(ptr, 'A', 10);
	assert(ft_strncmp(ptr, str, 10) == 0);
	free(ptr);
	printf("Test Success");	
}
 */