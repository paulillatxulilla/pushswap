/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:44:16 by paula             #+#    #+#             */
/*   Updated: 2025/05/19 19:05:43 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_parse_convert(char **result, t_list **a)
{
	if (ft_check_digit(result))
	{
		ft_atot(result, a);
		if (!ft_check_repeat(a))
		{
			ft_printf("Errooor\n");
			exit (0);
			return ;
		}
	}
	else
	{
		ft_printf("Error\n");
		exit (0);
	}
}

int	ft_check_digit(char **result)
{
	int	i;
	int	j;

	i = 1;
	while (result[i])
	{
		j = 0;
		if (result[i][j] == '-' || result [i][j] == '+')
		{
			j++;
			if (!result[i][j])
				return (0);
		}
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

void	ft_atot(char **result, t_list **a)
{
	int		i;
	int		aux;
	t_list	*temp;

	i = 1;
	while (result[i])
	{
		aux = ft_atoi(result[i]);
		temp = ft_lstnew(aux);
		ft_lstadd_back(a, temp);
		i++;
	}
}

int	ft_check_repeat(t_list **a)
{
	t_list	*aux;
	t_list	*aux2;

	aux = (*a);
	while (aux)
	{
		aux2 = aux->next;
		while (aux2)
		{
			if (aux->content == aux2->content)
				return (0);
			aux2 = aux2->next;
		}
		aux = aux->next;
	}
	return (1);
}
