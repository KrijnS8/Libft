/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:53:59 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/16 12:30:32 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] == '\0' || str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/* #include <assert.h>
#include <stdio.h>

int main(void)
{
	const char	*s1 = "Hello";
	const char	*s2 = "Helli";

	assert(ft_strncmp(s1, s2, 4) == 0);
	assert(ft_strncmp(s1, s2, 5) > 0);

	printf("Test Success");
}
 */