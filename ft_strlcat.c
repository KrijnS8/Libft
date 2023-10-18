/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 14:55:05 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/18 15:24:28 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	len;

	i = 0;
	dst_size = ft_strlen(dst);
	if (size <= 0 || dst_size >= size)
		len = ft_strlen(src) + size;
	else
		len = dst_size + ft_strlen(src);
	while (src[i] != '\0' && i + dst_size + 1 < size)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	if (size > 0 && size > dst_size)
		dst[dst_size + i] = '\0';
	return (len);
}

/* #include <assert.h>
#include <stdio.h>

int main(void)
{
	char		dst[20] = "Hello ";
	const char	*src = "World!";
	size_t		result = ft_strlcat(dst, src, sizeof(dst));

	assert(ft_strncmp(dst, "Hello World!", 12) == 0);
	assert(result == 12);

	printf("Tests Success");
}
 */