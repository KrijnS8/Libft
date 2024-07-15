/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:06:23 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/07/15 14:33:15 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	if (!s)
		return (NULL);
	ptr = (char *) ft_calloc ((ft_strlen(s) + 1), sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s, ft_strlen(s));
	return (ptr);
}

/* #include <assert.h>
#include <stdio.h>

int	main(void)
{
	char	*ptr;
	char	*str = "Hello World!";

	ptr = ft_strdup(str);
	assert(ft_strncmp(str, ptr, 12) == 0);
	assert(ptr - str != 0);
	free(ptr);
	printf("Test Success");
}
 */