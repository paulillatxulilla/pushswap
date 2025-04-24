/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:26:11 by paula             #+#    #+#             */
/*   Updated: 2025/04/24 16:19:22 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* 
char    *push_swap(t_list **a, t_list **b)
{
    
} */

t_list	*ft_lstmoven(t_list *lst, int n)
{
	int	i;

	i = 0;
	if (!lst)
		return (NULL);
	while (lst->next != NULL && i < n)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
