/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_s_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:57:06 by marvin            #+#    #+#             */
/*   Updated: 2025/04/12 12:57:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_list **a)//sa
{
	int		len;
	t_list	*aux;

	aux = a;
	len = ft_lstsize((*a));
	if (len < 2)
		return ;
	a = a->next;
	aux->next = a->next;
	a->next = aux;
}

void	ft_swap_b(t_list **b)//sb
{
	int		len;
	t_list	*aux;

	aux = b;
	len = ft_lstsize((*b));
	if (len < 2)
		return ;
	b = b->next;
	aux->next = b->next;
	b->next = aux;
}

void	ft_swap_ss(t_list	**a, t_list	**b)//ss
{
	int	len1;
	int	len2;

	len1 = ft_lstsize((*a));
	len2 = ft_lstsize((*b));
	if(len1 >= 2 && len2 >= 2)
	{
		ft_swap_a(a);
		ft_swap_b(b);
	}
	else
		return ;
}

void	ft_push_a(t_list	**a, t_list	**b)
{
	t_list	*aux;
	aux = b;

	if (!b)
		return ;
	ft_lstadd_front
}

