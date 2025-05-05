/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:26:11 by paula             #+#    #+#             */
/*   Updated: 2025/05/05 18:53:54 by padan-pe         ###   ########.fr       */
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
void	ft_tprint(t_list	**a)
{
	while (*a)
	{
		ft_printf("%d\n", (*a)->content);
		(a) = &(*a)->next;
	}
}
/* void	ft_setindex(t_list	**a)
{
	t_list	*aux;
	t_list	*ref;

	int	i;
	
	i = 1;
	
	while (a)
	{
		aux = (*a);
		aux = aux->next;
		while (aux)
		{
			if ((*a)->content < aux->content)
				aux = aux->next;
			if ((*a)->content > aux->content && !(aux->index))
			{
				(*a) = aux;
			}
			if (aux->next == NULL)
			{
				(*a)->index = i;
				i++;
			}
			aux = aux->next;
		}
		
	}
} */

int	ft_find_smallest_node(t_list	**a)
{
	t_list	*temp;
	int		aux;
	
	temp = *a;
	temp = temp->next;
	while (temp)
	{
		if ((*a)->content < temp->content)
		{
			aux = (*a)->content;
			temp = temp->next;
		}
		else
		{
			aux = temp->content;
			temp = temp->next;
		}
	}
	ft_printf("%d\n", aux);
	return (aux);
}

