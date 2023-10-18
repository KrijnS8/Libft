/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 13:56:35 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/12 16:38:36 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src < dest && (src + n) >= dest)
	{
		ft_memmove(dest, src, n);
		return (dest);
	}
	while (i < n)
	{
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dest);
}

/* #include <assert.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "Hello World!";
	char	*ptr;

	ptr = (char *)ft_calloc(ft_strlen(str), sizeof(char));
	ft_memcpy(ptr, str, ft_strlen(str));
	assert(ft_strncmp(str, ptr, ft_strlen(str)) == 0);
	free(ptr);
	printf("Test Success");
}
 */