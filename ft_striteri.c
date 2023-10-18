/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 15:35:37 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/10/12 17:28:54 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include <unistd.h>

void	ft_putchar(unsigned int i, char *c)
{
	write(1, c, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	char	*str = "Hello World!";
	
	ft_striteri(str, &ft_putchar);
} */