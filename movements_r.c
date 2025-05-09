/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 23:45:47 by marvin            #+#    #+#             */
/*   Updated: 2025/04/10 23:45:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list	**a)
{
	t_list	*aux;
	t_list	*last;

	aux = *a;

	last = ft_lstlast((*a));
	if (!a)
		return ;
	(*a) = (*a)->next;
	last->next = aux;
	aux->next = NULL;
	ft_printf("ra");
}

void	ft_rb(t_list	**b)
{
	t_list	*aux;
	t_list	*last;

	aux = *b;
	last = ft_lstlast((*b));
	if (!b)
		return ;
	(*b) = (*b)->next;
	last->next = aux->next;
	aux->next = NULL;
	ft_printf("rb");
}

void	ft_rr(t_list	**a, t_list	**b)
{
	ft_ra(a);
	ft_rb(b);
	ft_printf("rr");
}
