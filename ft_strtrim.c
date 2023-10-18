/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 15:24:06 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/16 15:52:57 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

static bool	ft_check_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (true);
		i++;
	}
	return (false);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	while (ft_check_char(s1[start], set) && s1[start] != '\0')
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_check_char(s1[end], set) && end > start)
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

/* #include <assert.h>
#include <string.h>
#include <stdio.h>

void	assert_str_eq(char *s1, char *s2)
{
	assert(strcmp(s1, s2) == 0);
}

int	main()
{
	assert_str_eq(
		ft_strtrim("   +hello --- abc +  ", " +"),
		"hello --- abc"
	);
	assert_str_eq(
		ft_strtrim("   +++   +", " +"),
		""
	);
	assert_str_eq(
		ft_strtrim("", "+"),
		""
	);
	assert_str_eq(
		ft_strtrim("abc", ""),
		"abc"
	);
	// Whenever the string is not on the sides
	// but rather in the middle
	assert_str_eq(
		ft_strtrim("123abc321", "abc"),
		"123abc321"
	);
	printf("Test Success");
}
 */