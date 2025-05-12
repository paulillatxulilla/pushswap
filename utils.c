/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:26:11 by paula             #+#    #+#             */
/*   Updated: 2025/05/12 16:34:08 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstmoven(t_list *lst, int n)
{
	int	i;

	i = 1;
	if (!lst)
		return (NULL);
	while (lst->next != NULL && i < n)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}

t_list	*ft_lstmovie(t_list *lst, int ind)
{
	int	i;
	
	i = 1;
	if (!lst)
		return (NULL);
	while (lst->next != NULL && lst->index != ind)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}

void	ft_tprint(t_list	**a)
{
	while (*a)
	{
		ft_printf("Num: %d,   ", (*a)->content);
		ft_printf("pos: %d,  ", (*a)->position);
		ft_printf("idx: %d\n", (*a)->index);
		(a) = &(*a)->next;
	}
}

int	ft_root(int	n)
{
	int	result;

	result = 1;
	while (result * result < n)
		result++;
	ft_printf("%d", result);
	return (result);
}
