/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_next_line_utils.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 15:41:22 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/11/01 16:13:13 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_get_next_line.h"

char	*ft_gnl_strdup(char *s, size_t size)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	dup = (char *)malloc((size + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len && i < size)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_gnl_strjoin(char *s1, char *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;
	size_t	i;

	if (s1 == NULL)
		return (ft_gnl_strdup(s2, ft_strlen(s2)));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		result[i] = s2[i - len1];
		i++;
	}
	result[len1 + len2] = '\0';
	return (result);
}
