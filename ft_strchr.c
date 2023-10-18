/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:30:14 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/12 17:04:21 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (i <= (int)ft_strlen(s))
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