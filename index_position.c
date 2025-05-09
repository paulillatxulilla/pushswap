/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_position.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:53:33 by padan-pe          #+#    #+#             */
/*   Updated: 2025/05/09 15:24:51 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index_and_position (t_list	**a)
{
	ft_setindex(a);
	ft_set_position(a);
}

void	ft_setindex(t_list	**a)
{
	t_list	*aux;
	int	ref;
	int	len;
	int i;
	
	len = ft_lstsize((*a));
	i = 1;
	aux = (*a);
	while (aux && i <= len)
	{
		ref = ft_find_small_int(a);
		if (aux->content == ref)
		{
			aux->index = i;
			i++;
		}
		aux = aux->next;
		if (aux == NULL)
			aux = (*a);
	}
}

int	ft_find_small_int(t_list	**a)
{
	t_list	*temp;
	int		reference;
	
	temp = *a;
	reference = __INT_MAX__;
	while (temp)
	{
		if (reference > temp->content && temp->index == 0)
			reference = temp->content;
		temp = temp->next;
	}
	return (reference);
}

void	ft_set_position(t_list	**a)
{
	t_list	*aux;
	int		i;

	i = 1;
	aux = (*a);
	while(aux)
	{
		aux->position = i;
		i++;
		aux = aux->next;
	}
}