/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_strarr.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/09 14:11:45 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/04/09 14:14:56 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_strarr(char **arr)
{
	int	i;

	i = 0;
	if (!*arr)
		return ;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
