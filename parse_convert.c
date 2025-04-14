/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:44:16 by paula             #+#    #+#             */
/*   Updated: 2025/04/14 15:47:16 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_parse_convert(char **result, t_list **a)
{
	if (ft_check_digit(result))
	{
		ft_atot(result, a);
		if (ft_check_repeat(a))
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
	int i;
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

t_list	**ft_atot(char **result, t_list **a)
{
	int	i;

	i = 0;
	while (result[i])
	{
		if (i == 0)
		{
			(*a)->content = result[i];
		}
		else
			ft_lstadd_back(a, ft_lstnew(result[i]));
		i++;
	}
	return (a);
}

int	ft_check_repeat(t_list **a)
{
	t_list	**aux;
	t_list	**aux2;
	
	aux = a;
	while (aux)
	{
		aux2 = aux;
		aux2 = (*aux2) ->next;
		while (aux2)
			{
				if (*(int *)(*aux)->content == *(int *)(*aux2)->content)//content es solo un void *. Y no puedes hacer operaciones directamente sobre un void *
					return (0);
				aux2 = (*aux2)->next;
			}
		aux = (*aux)->next;
	}
	return (1);
}
