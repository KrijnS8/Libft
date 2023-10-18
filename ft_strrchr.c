/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:49:43 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/16 12:30:25 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (NULL);
}

/* #include <assert.h>
#include <stdio.h>

int main(void)
{
	const char	*s = "Hello World!";

	assert(ft_strncmp(ft_strrchr(s, 'o'), "orld!", 5) == 0);
	assert(ft_strchr(s, 'z') == NULL);

	printf("Test Success");
}
 */