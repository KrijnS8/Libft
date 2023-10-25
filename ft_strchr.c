/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:30:14 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/25 16:56:20 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	while (i <= (int)s_len)
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}

/* #include <assert.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "Hello World!";
	
	assert(ft_strchr(str, 'W') - str == 7);
	assert(ft_strchr(str, '\0') - str == ft_strlen(str));
	assert(ft_strchr(str, 'B') == NULL);
	printf("Test Success");
}
 */