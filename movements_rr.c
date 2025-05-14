/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 23:45:59 by marvin            #+#    #+#             */
/*   Updated: 2025/04/10 23:45:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list	**a)
{
	t_list	*aux;
	t_list	*auxa;
	t_list	*last;
	int		size;

	auxa = (*a);
	last = ft_lstlast(*a);
	size = ft_lstsize(*a);
	aux = ft_lstmoven(*a, size - 1);
	if (!a)
		return ;
	last->next = auxa;
	aux->next = NULL;
	(*a) = last;
	ft_printf("rra\n");
}

void	ft_rrb(t_list	**b)
{
	t_list	*aux;
	t_list	*auxb;
	t_list	*last;
	int		size;

	auxb = (*b);
	last = ft_lstlast(*b);
	size = ft_lstsize(*b);
	aux = ft_lstmoven(*b, size - 1);
	if (!b)
		return ;
	last->next = auxb;
	aux->next = NULL;
	(*b) = last;
	ft_printf("rrb\n");
}

void	ft_rrr(t_list	**a, t_list	**b)
{
	ft_rra(a);
	ft_rrb(b);
	ft_printf("rrr\n");
}
