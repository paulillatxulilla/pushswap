/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:41:53 by padan-pe          #+#    #+#             */
/*   Updated: 2025/05/06 18:30:33 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	ft_find_pivot (t_list **a)
{
	t_list	*aux;
	int	len;

	len = ft_lstsize(*a);
	aux = ft_lstmovie((*a), (len / 2) + 1);
	return (aux->content);
}
/* void	ft_ksort(t_list	**a, t_list	**b)
{
	t_list	*aux;
	int		pivot;

	pivot = 

	while (a)
	{
		if ((*a)->content < pivot)
			ft_pb(a, b);
		*a = &(*a)->next;
	}
} */
 