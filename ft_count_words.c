/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_words.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/15 14:24:00 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/12/15 14:24:20 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(const char *s, char sep)
{
	int	c;
	int	i;
	int	j;

	c = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != sep)
		{
			while (s[i] != sep && s[i] != '\0')
			{
				j++;
				i++;
			}
			if (j > 0)
				c++;
			continue ;
		}
		i++;
	}
	return (c);
}
