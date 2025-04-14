/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:44:16 by paula             #+#    #+#             */
/*   Updated: 2025/04/14 13:17:07 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_digit(char **result)
{
	int i;
    int	len;

	i = 0;
	len = ft_strlen(result);
	while (result[i])
	{
		if ((result[i] == "-" || result [i] == "+") && i != len)
			i++;
		if (!ft_isdigit(result[i]))
			return (1);
		i++;
    }
	return (0);
}

t_list	**ft_atot(char	**result, t_list **a)
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
	
	while (a)
	{
		aux = a;
		while (a = (*a)->next)
			{
				a = (*a)->next;
				if ((*a)->content == (*aux)->content)
					return (1);
			}
		a = aux;
		a = (*a)->next;
	}
	return (0);
}
