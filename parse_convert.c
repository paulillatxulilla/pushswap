/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:44:16 by paula             #+#    #+#             */
/*   Updated: 2025/04/13 19:06:16 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_parse_digit(char **result)
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

int	ft_parse_repeat(t_list **a)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	
	while (a[i])
	{
		
	}
}