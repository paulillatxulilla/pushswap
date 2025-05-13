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

	a = NULL;
	b = NULL;
	(void)argc;
	/* if (argc < 2)
	{
		ft_printf ("Error\n");
		return (0);
	}	 */
 	ft_parse_convert(argv, &a);
	ft_index_and_position(&a);
	ft_sort(&a, &b);
	return (0);
}