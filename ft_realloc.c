/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/11 12:28:41 by krijn         #+#    #+#                 */
/*   Updated: 2023/11/11 12:47:29 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;
	size_t	old_size;
	char	*temp;

	if (ptr == NULL)
		return (malloc(size));
	new_ptr = malloc(size);
	if (new_ptr == NULL)
		return (NULL);
	old_size = 0;
	temp = (char *)ptr;
	while (*temp++)
		old_size++;
	if (size > old_size)
		size = old_size;
	ft_memmove(new_ptr, ptr, size);
	free(ptr);
	return (new_ptr);
}
