/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:44:16 by paula             #+#    #+#             */
/*   Updated: 2025/04/13 20:00:21 by paula            ###   ########.fr       */
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
	void	*aux;
	int		i;
	
	i = 0;
	while (a)
	{
		aux = (*a)->content;
		while ((*a)->next)
			{
				a = (*a)->next;
				if ((*a)->content == aux)
					return (1);
			}
		a = (*a)->next;
	}
	return (0);
}

t_list	*ft_lstlastn(t_list *lst, size_t n)
{
	int	i;
	if (!lst)
		return (NULL);
	while (lst->next && i <= n)
	{
		lst = lst->next;
		i++;
	}	
	return (lst);
}