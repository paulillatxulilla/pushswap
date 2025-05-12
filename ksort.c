/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:41:53 by padan-pe          #+#    #+#             */
/*   Updated: 2025/05/12 19:27:54 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	ft_push_smallest(t_list	**a, t_list	**b)
{
	t_list	*aux;
	int		len;

	aux = ft_lstmovie((*a), 1);
	len = ft_lstsize(*a);
	while (aux->position != 1)
	{
		if (aux->position > ((len / 2) + 1))
			ft_rra(a);
		if (aux->position <= ((len / 2) + 1))
			ft_ra(a);
		ft_set_position(a);
		aux = ft_lstmovie((*a), 1);
		ft_tprint(a);
	}
	ft_pb(a, b);
} */

void	ft_ksort_1(t_list **a, t_list **b)
{
	int	lena;
	int	lenb;
	int	k;
	
	lena = ft_lstsize((*a));
	lenb = ft_lstsize((*b));
	k = (ft_root(lena) * 1.4);
	while (a)
	{
		if ((*a)->index <= lenb/2)
		{
			ft_pb(a, b);
			lenb = ft_lstsize((*b));
		}
		if ((*a)->index <= (lenb/2) + k)
		{
			ft_pb(a, b);
			ft_rb(b);
			lenb = ft_lstsize((*b));
		}
		else if ((*a)->index > (lenb/2) + k)
			ft_ra(a);	
	}
}

t_list	*ft_find_bigg_int(t_list	**b)
{
	t_list	*temp;
	t_list	*reference;
	
	temp = *b;
	reference->content = (__INT_MAX__ * -1) - 1;
	while (temp)
	{
		if (reference->content < temp->content)
			reference = temp;
		temp = temp->next;
	}
	return (reference);
}

void	ft_ksort_2(t_list	**a, t_list	**b)
{
	t_list	*big;
	int	len;

	while (b)
	{
		len = ft_lstsize(b);
		big = ft_find_bigg_int(b);
		if ((*b)->content = big->content)
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
}