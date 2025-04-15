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
	t_list	*aux2;
	t_list	*aux3;

	len = ft_lstsize((*a));
	aux = a;
	aux3 = a;
	if (len = 2)
	{
		aux3 = aux3->next;
		aux3->next = aux;
		aux->next = aux3;
	}
	if (len > 2)
	{	
		aux3 = aux3->next;
		aux2 = aux3;
		aux3 = aux3->next;
		aux2->next = aux;
		aux->next = aux3;
	}
}

void	ft_swap_b(t_list **b)//sb
{
	int		len;
	t_list	*aux;
	t_list	*aux2;
	t_list	*aux3;

	len = ft_lstsize((*b));
	aux = b;
	aux3 = b;
	if (len = 2)
	{
		aux3 = aux3->next;
		aux3->next = aux;
		aux->next = aux3;
	}
	if (len > 2)
	{	
		aux3 = aux3->next;
		aux2 = aux3;
		aux3 = aux3->next;
		aux2->next = aux;
		aux->next = aux3;
	}
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
}
