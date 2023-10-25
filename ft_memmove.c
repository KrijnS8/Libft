/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 14:04:19 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/25 16:57:09 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_move(char *d, char *s, size_t n)
{
	int	i;

	if (s < d && (s + n) >= d)
	{
		i = (int)(n - 1);
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int) n)
		{
			d[i] = s[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d == s)
		return (d);
	ft_move(d, s, n);
	return (d);
}

/* #include <assert.h>
#include <stdio.h>

int main()
{
    char str[] = "1234567890";
	ft_memmove(str + 4, str + 3, 3); // copies from [4, 5, 6] to [5, 6, 7]
	assert(ft_strncmp(str, "1234456890", 10) == 0);
	printf("Test Success");
}
 */