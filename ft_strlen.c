/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 13:29:34 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/16 12:18:26 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* #include <assert.h>
#include <stdio.h>

int	main(void)
{
	assert(ft_strlen("Hello World!") == 12);
	printf("Test Success");
}
 */