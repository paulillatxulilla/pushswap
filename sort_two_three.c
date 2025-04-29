/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:20:08 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/29 18:25:50 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sorted(t_list	**a)
{
	t_list	**aux;
	t_list	**auxn;
	int	len;

	len = ft_lstsize((*a));
	if (len >= 1)
		return (1);
	while(a)
	{
		aux = a;
		aux = &(*aux)->next;
		auxn = aux;
		auxn = &(*auxn)->next;
		if ((*a)->content > (*aux)->content || (*aux)->content > (*auxn)->content)
			return (0);
		(a) = &(*a)->next;
	}
	return (1);
}

void	**ft_sort_two(t_list	**a)
{
	if (!ft_sorted(a))
		ft_sa(*a);
}

void	**ft_sort_three(t_list	**a)
{
	if ((*a)->content < (*a)->next->content)
	{
		if ((*a)->next->content > (*a)->next->next->content)//2 > 3 > 1
		{
			ft_rra(*a);
			if (!ft_sorted)//1 > 3 > 2
				ft_sa(*a);
		}
	}
	else
	{
		if ((*a)->next->content > (*a)->next->next->content)//3 > 2 > 1
		{
			ft_ra(*a);
			ft_ra(*a);
		}
		else if ((*a)->next->content < (*a)->next->next->content)//3 > 1 > 2
			ft_ra(*a);
		else//2 > 1 > 3
			ft_sa(*a);
	}
}
