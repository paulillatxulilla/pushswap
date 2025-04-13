/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:44:16 by paula             #+#    #+#             */
/*   Updated: 2025/04/13 17:37:54 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_parse_digit(char **result)
{
	int i;
    
	while (result[i])
	{
		if ft_isdigit(result[i])
			i++;
		else
			return (1);
    }
	return (0);
}
int	ft_parse_repeated(char **result)
{
	int	i;
	int	j;
	
	i = 0;
	j = 1;
	while (result[i])
	{
		while (!ft_strncmp(result[i], result[j]) == 0)
			j++;
		if (ft_strncmp (result[i], result[j] == 0))
			return (1);
		i++;
		j = i;
		j++;
	}
	return (0);
}

t_list	**ft_atol
