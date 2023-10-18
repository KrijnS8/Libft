/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 12:50:19 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/12 12:51:58 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if ((int) nmemb < 0 && (int) size < 0)
		return (NULL);
	if (nmemb * size > 4294967295)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, '\0', nmemb * size);
	return (ptr);
}

/* #include <assert.h>
#include <stdio.h>
#include <stdint.h>

void	assert_mem(void *ptr, int value, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		assert(((unsigned char *)ptr)[i++] == value);
}

int	main(void)
{
	char	*ptr;

	ptr = ft_calloc(10, sizeof(char));
	assert_mem(ptr, '\0', 10);
	free(ptr);
	ptr = ft_calloc(0, sizeof(char));
	assert(ptr != NULL);
	free(ptr);
	ptr = ft_calloc(SIZE_MAX, SIZE_MAX);
	assert(ptr == NULL);
	printf("Test Success");
}
 */