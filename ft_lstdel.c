/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 15:16:34 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/03/22 15:26:46 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **list, t_list *to_del, void (*del)(void*))
{
	t_list	*previous;
	t_list	*current;

	if (list == NULL || to_del == NULL || del == NULL)
		return ;
	current = *list;
	previous = NULL;
	while (current)
	{
		if (current == to_del)
		{
			if (previous == NULL)
			{
				*list = current->next;
				del(current);
				return ;
			}
			previous->next = current->next;
			del(current);
			return ;
		}
		previous = current;
		current = current->next;
	}
}
