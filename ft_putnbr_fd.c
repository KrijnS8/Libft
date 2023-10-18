/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 15:53:35 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/04 16:33:01 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	output;

	if (n < 0)
		write(fd, "-", 1);
	if (n > 9 || n < -9)
		ft_putnbr_fd(ft_abs(n / 10), fd);
	output = ft_abs(n % 10) + '0';
	write (fd, &output, 1);
}

/* int main()
{
	ft_putnbr_fd(-2147483647, 1);
}
 */