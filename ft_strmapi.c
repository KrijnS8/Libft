/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 15:10:06 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/16 12:20:42 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

/* #include <assert.h>
#include <stdio.h>

char	ft_testfunc(unsigned int index, char c)
{
	return (c - 32);
}

int main(void)
{
	char	*result = ft_strmapi("helloworld", &ft_testfunc);
	
	assert(ft_strncmp(result, "HELLOWORLD", 10) == 0);
	printf("Test Success");
}
 */