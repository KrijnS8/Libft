/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:30:52 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/16 12:36:12 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	if (s_len < (size_t)start)
		return (ft_calloc(1, sizeof(char)));
	if (start + len > s_len)
		len = s_len - start;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}

/* #include <assert.h>
#include <stdio.h>

int main(void)
{
	const char		*s = "Hello World!";
	unsigned int	start = 6;
	size_t			len = 6;

	assert(ft_strncmp(ft_substr(s, start, len), "World!", 6) == 0);

	printf("Test Success");
}
 */