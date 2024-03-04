/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_arr_fd.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/04 14:32:23 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/03/04 14:43:13 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_arr_fd(char **arr, int size, char sep, int fd)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putstr_fd(arr[i], fd);
		if (i < size - 1)
			ft_putchar_fd(sep, fd);
		i++;
	}
}
