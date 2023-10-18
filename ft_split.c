/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 12:43:16 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/18 15:21:54 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char sep)
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

static size_t	ft_word_length(const char *s, char sep, int index)
{
	int	len;

	len = 0;
	while (s[index + len] != '\0')
	{
		if (s[index + len] == sep)
			return (len);
		len++;
	}
	return (len);
}

void	*ft_free_arr(char **arr, size_t size)
{
	int	i;

	i = 0;
	while (i < (int)size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	size_t	size;
	int		i;
	int		index;

	size = ft_count_words(s, c);
	arr = (char **)ft_calloc(size + 1, sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	index = 0;
	while (index < (int)size && s[i] != '\0')
	{
		if (s[i] != c)
		{
			arr[index] = ft_substr(s, i, ft_word_length(s, c, i));
			if (arr[index] == NULL)
				return (ft_free_arr(arr, size));
			i += ft_word_length(s, c, i);
			index++;
		}
		i++;
	}
	return (arr);
}

/* #include <assert.h>
#include <stdio.h>

int	main(void)
{
	const char	*str = "Hello,world,this,is,a,test";
	char		**result = ft_split(str, ',');

	assert(ft_strncmp(result[0], "Hello", 5) == 0);
    assert(ft_strncmp(result[1], "world", 5) == 0);
    assert(ft_strncmp(result[2], "this", 4) == 0);
    assert(ft_strncmp(result[3], "is", 2) == 0);
    assert(ft_strncmp(result[4], "a", 1) == 0);
    assert(ft_strncmp(result[5], "test", 4) == 0);
	assert(result[6] == NULL);
	ft_free_arr(result, 7);
	printf("Test Success");
}
 */