/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 16:48:45 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/25 16:57:47 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0' || big == little)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			while (big[i + j] == little[j] && \
					i + j < len && big[i + j] != '\0')
				j++;
			if (little[j] == '\0')
				return (&((char *)big)[i]);
		}
		i++;
	}
	return (NULL);
}

/* #include <assert.h>
#include <stdio.h>

int main(void)
{
	const char	*big = "Hello, world!";
	const char	*little = "world";
	char		*result = ft_strnstr(big, little, ft_strlen(big));

	assert(ft_strncmp(result, "world!", 6) == 0);

	printf("Test Success");
}
 */