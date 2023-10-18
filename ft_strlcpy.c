/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 14:43:51 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/16 12:30:42 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* #include <assert.h>
#include <stdio.h>

int main(void)
{
	char		dst[10];
	const char	*src = "Hello World!";
	size_t 		result = ft_strlcpy(dst, src, sizeof(dst));

	assert(ft_strncmp(dst, "Hello Wo", 8) == 0);
	assert(result == 12);

	printf("Tests Success");
}
 */