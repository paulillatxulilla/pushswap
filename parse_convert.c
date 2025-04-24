/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:44:16 by paula             #+#    #+#             */
/*   Updated: 2025/04/24 17:58:44 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**ft_parse_convert(char **result, t_list **a)
{
	if (ft_check_digit(result))
	{
		ft_atot(result, a);
		if (ft_check_repeat(a) && ft_check_long(a))
			return (a);
	}
	else
	{
		ft_printf("Error\n");
		return (NULL);
	}
}

int	ft_check_digit(char **result)
{
	int	i;
	int	j;

	i = 0;
	while (result[i])
	{
		j = 0;
		if (result[i][j] == "-" || result [i][j] == "+")
			j++;
		if (!result[i][j])
			return (0);
		while (result[i][j])
		{
			if (!ft_isdigit(result[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

t_list	**ft_atot(char **result, t_list *a)
{
	int	i;

	i = 0;
	while (result[i])
	{
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(result[i])));
		i++;
	}
	return (a);
}
int	ft_check_long(t_list **a)
{
	t_list	*aux;
	
	aux = (*a);
	while (aux)
	{
		if (aux->content == -2147483648 || aux->content == 2147483647)
			return (0);
		aux = aux->next;
	}
	return (1);
}

int	ft_check_repeat(t_list **a)
{
	t_list	**aux;
	t_list	**aux2;

	aux = a;
	while (aux)
	{
		aux2 = (*aux)->next;
		while (aux2)
		{
			if ((*aux)->content == (*aux2)->content)
				return (0);
			aux2 = (*aux2)->next;
		}
		aux = (*aux)->next;
	}
	return (1);
}
