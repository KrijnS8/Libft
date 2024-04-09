/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_arr_fd.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/04 14:32:23 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/04/09 14:23:37 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_arr_fd(char **arr, char sep, int fd)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		ft_putstr_fd(arr[i], fd);
		if (arr[i + 1])
			ft_putchar_fd(sep, fd);
		i++;
	}
}
