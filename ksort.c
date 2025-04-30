/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:41:53 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/30 17:07:32 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_pivot(t_list	**a)
{
	int len;
	int	result;
	t_list	**mid;
	t_list	**last;

	mid = NULL;
	last = NULL;
	len = ft_lstsize(*a);
	(*mid) = ft_lstmoven(*a, len / 2);
	(*last) = ft_lstlast(*a);
	
	(*a)->next = (*mid);
	(*mid)->next = (*last);
	ft_sort_three (a);
	result = (*mid)->content;
	return (result);
}
/* void	ft_ksort(t_list	**a, t_list	**b, int pivot)
{
	
} */
