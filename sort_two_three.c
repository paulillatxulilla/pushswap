/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:20:08 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/24 17:51:10 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sorted(t_list	*a)
{
	t_list	*aux;
	t_list	*auxn;
	t_list	*ref;
	int	len;

	len = ft_lstsize((*a));
	if (len >= 1)
		return (0);
	ref = (*a);
	while(a)
	{
		aux = (*a);
		aux = aux->next;
		auxn = aux;
		auxn = auxn->next;
		if ((*a)->content > aux->content || aux->content > auxn->content)
		{
			a = ref;
			return (0);
		}
		(*a) = (*a)->next;
	}
	a = ref;
	return (1);
}


t_list	**ft_sort_two(t_list	**a)
{
	if (ft_sorted(a))
		return (a);
	else
	{
		ft_sa(a);
		return (a);
	}
}

t_list	**ft_sort_three(t_list	**a)
{
	t_list	*aux;
	t_list	*auxn;
	
	aux = (*a);
	if (ft_sorted(a))
		return (a);
	else
	{
		aux = aux->next;
		auxn = aux;
		auxn = auxn->next;
		if 
	}
}
