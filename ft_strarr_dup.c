/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strarr_dup.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/15 15:17:23 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/12/15 15:30:32 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_arr_size(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}

static void	ft_free_strarr(char **arr)
{
	int	i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_strarr_dup(char **arr)
{
	char	**result;
	int		size;
	int		i;

	size = ft_arr_size(arr);
	result = (char **)ft_calloc(size + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = ft_strdup(arr[i]);
		if (!result[i])
			return (ft_free_strarr(result), NULL);
		i++;
	}
	return (result);
}

/* void	print_strarr(char **arr)
{
	int	i = 0;
	
	while (arr[i] != NULL)
	{
		ft_putendl_fd(arr[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char **arr;

	arr = ft_strarr_dup(argv);
	print_strarr(arr);
	ft_free_strarr(arr);
}
 */