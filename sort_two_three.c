/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:20:08 by padan-pe          #+#    #+#             */
/*   Updated: 2025/05/19 19:03:54 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_list	**a, t_list	**b)
{
	int	len;

	len = ft_lstsize(*a);
	if (!ft_sorted(a))
	{
		if (len == 2)
			ft_sa(a);
		if (len == 3)
			ft_sort_three(a);
		if (len == 4 || len == 5)
			ft_sortf_our_ive(a, b, len);
		if (len > 5)
			ft_ksort(a, b);
	}
	else
		exit(0);
}

int	ft_sorted(t_list	**a)
{
	t_list	*aux;
	int		len;

	len = ft_lstsize(*a);
	if (len == 1)
		return (1);
	while (a)
	{
		aux = (*a);
		aux = aux->next;
		if (!aux)
			return (1);
		if ((*a)->content > aux->content)
			return (0);
		(a) = &(*a)->next;
	}
	return (1);
}

void	ft_sort_three(t_list	**a)
{
	if ((*a)->content < (*a)->next->content)
	{
		if ((*a)->next->content > (*a)->next->next->content)
		{
			ft_rra(a);
			if (!ft_sorted(a))
				ft_sa(a);
		}
	}
	else
	{
		if ((*a)->next->content > (*a)->next->next->content)
		{
			ft_ra(a);
			ft_sa(a);
		}
		else if ((*a)->content > (*a)->next->next->content)
			ft_ra(a);
		else
			ft_sa(a);
	}
}

void	ft_sortf_our_ive(t_list	**a, t_list **b, int len)
{
	if (len == 4)
	{
		ft_push_smallest(a, b, 1);
		ft_sort_three(a);
		ft_pa(a, b);
	}
	if (len == 5)
	{
		ft_push_smallest(a, b, 1);
		ft_push_smallest(a, b, 2);
		ft_sort_three(a);
		ft_pa(a, b);
		ft_pa(a, b);
		ft_set_position(a);
	}
}
