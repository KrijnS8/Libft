/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 14:15:25 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/16 12:11:46 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_memcpy(str + ft_strlen(s1), s2, ft_strlen(s2));
	return (str);
}

/* #include <assert.h>
#include <stdio.h>

int	main(void)
{
	const char	*s1 = "Hello ";
	const char	*s2 = "World!";
	assert(ft_strncmp(ft_strjoin(s1, s2), "Hello World!", 12) == 0);
	printf("Test Success");
}
 */