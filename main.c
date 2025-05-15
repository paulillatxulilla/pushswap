/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:04:12 by marvin            #+#    #+#             */
/*   Updated: 2025/04/10 21:04:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main (int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	**result;

	a = NULL;
	b = NULL;
	if (argc < 2 || argv[1][0] == 0)
		return (0);
	if (argv[1][1] == 1)
		result = ft_split(*argv, ' ');
	else
		result = argv;
 	ft_parse_convert(result, &a);
	ft_index_and_position(&a);
	ft_sort(&a, &b);
	ft_tprint(&a);
	return (0);
}