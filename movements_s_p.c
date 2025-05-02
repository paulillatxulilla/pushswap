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

void	ft_sa(t_list **a)
{
	int		len;
	t_list	*aux;

	aux = (*a);
	len = ft_lstsize(*a);
	if (len < 2)
		return ;
	(*a) = (*a)->next;
	aux->next = (*a)->next;
	(*a)->next = aux;
	ft_printf("sa\n");
}

void	ft_sb(t_list **b)
{
	int		len;
	t_list	*aux;

	aux = (*b);
	len = ft_lstsize(*b);
	if (len < 2)
		return ;
	(*b) = (*b)->next;
	aux->next = (*b)->next;
	(*b)->next = aux;
	ft_printf("sb\n");
}

void	ft_ss(t_list	**a, t_list	**b)
{
	int	len1;
	int	len2;

	len1 = ft_lstsize(*a);
	len2 = ft_lstsize(*b);
	if (len1 >= 2 && len2 >= 2)
	{
		ft_sa(a);
		ft_sb(b);
		ft_printf("ss\n");
	}
	else
		return ;
}

void	ft_pa(t_list	**a, t_list	**b)
{
	t_list	*aux;

	aux = (*b);
	if (!b)
		return ;
	aux->next = NULL;
	ft_lstadd_front(a, aux);
	aux = aux->next;
	(*b) = (*b)->next;
	ft_printf("pa\n");
}

void	ft_pb(t_list	**a, t_list	**b)
{
	t_list	*aux;

	aux = (*a);
	if (!a)
		return ;
	aux->next = NULL;
	ft_lstadd_front(b, aux);
	(*a) = (*a)->next;
	ft_printf("pb\n");
}
