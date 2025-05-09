/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:41:53 by padan-pe          #+#    #+#             */
/*   Updated: 2025/05/09 17:06:05 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* int	ft_find_pivot (t_list **a)
{
	t_list	*aux;
	int	len;

	len = ft_lstsize(*a);
	aux = ft_lstmovie((*a), (len / 2) + 1);
	ft_printf("%d\n", aux->content);
	return (aux->content);
} */
void	ft_ksort(t_list	**a, t_list	**b)
{
	t_list	*aux;
	int		len;

	aux = ft_lstmovie((*a), 1);
	len = ft_lstsize(*a);
	while (aux->position != 1)
	{
		if (aux->position > ((len / 2) + 1))
			ft_rra(a);
		if (aux->position <= ((len / 2) + 1))
			ft_ra(a);
		ft_set_position(a);
		aux = ft_lstmovie((*a), 1);
		ft_tprint(a);
	}
	ft_pb(a, b);
}
 