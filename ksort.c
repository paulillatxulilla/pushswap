/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:41:53 by padan-pe          #+#    #+#             */
/*   Updated: 2025/05/19 19:02:22 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_smallest(t_list	**a, t_list	**b, int i)
{
	t_list	*aux;
	int		len;

	aux = ft_lstmovie((*a), i);
	len = ft_lstsize(*a);
	while (aux->position != 1)
	{
		if (aux->position > ((len / 2) + 1))
			ft_rra(a);
		else if (aux->position <= ((len / 2) + 1))
			ft_ra(a);
		ft_set_position(a);
		aux = ft_lstmovie((*a), i);
	}
	ft_pb(a, b);
}

void	ft_ksort(t_list	**a, t_list	**b)
{
	int	lena;

	lena = ft_lstsize(*a);
	ft_push_smallest(a, b, 1);
	ft_ksort_1(a, b, lena);
	ft_ksort_2(a, b);
}

void	ft_ksort_1(t_list **a, t_list **b, int lena)
{
	int	lenb;
	int	k;

	lenb = ft_lstsize((*b));
	k = (ft_root(lena) * 1.4);
	while (*a)
	{
		if ((*a)->index <= (lenb))
			ft_pb(a, b);
		else if ((*a)->index <= (lenb + k))
		{
			ft_pb(a, b);
			ft_rb(b);
		}
		else if ((*a)->index > (lenb + k))
			ft_ra(a);
		lenb = ft_lstsize((*b));
	}
}

t_list	*ft_find_bigg_int(t_list	**b)
{
	t_list	*aux;
	t_list	*reference;
	int		min;

	aux = *b;
	reference = NULL;
	min = (__INT_MAX__ * -1) - 1;
	while (aux)
	{
		if (min < aux->content)
		{
			min = aux->content;
			reference = aux;
		}
		aux = aux->next;
	}
	return (reference);
}

void	ft_ksort_2(t_list	**a, t_list	**b)
{
	t_list	*big;
	t_list	*aux;
	int		len;

	while (*b)
	{
		aux = *b;
		len = ft_lstsize(*b);
		big = ft_find_bigg_int(b);
		if (aux->content == big->content)
			ft_pa(a, b);
		else
		{
			if (big->position > (len / 2) + 1)
				ft_rrb(b);
			if (big->position <= (len / 2) + 1)
				ft_rb(b);
		}
		ft_set_position(b);
	}
	ft_set_position(a);
}
