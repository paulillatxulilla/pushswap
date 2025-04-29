/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:41:53 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/29 19:48:27 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_pivot(t_list	**a)
{
	int len;
	t_list	**mid;
	t_list	**last;

	len = ft_lstsize(a);
	mid = ft_lstmoven(a, len / 2);
	last = ft_lstlast(a);
	
	(*a)->next = mid;
	(*mid)->next = last;
	ft_sort_three (a);
	return ((*mid)->content);
}
void	ft_ksort(t_list	**a, t_list	**b, int pivot)
{
	
}
