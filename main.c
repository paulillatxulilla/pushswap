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

int	main (int argc, char *argv)
{
	t_list	**a;
	char	**result;
	if (argc < 2)
	{
		ft_printf ("Error\n");
		return (0);
	}
	result = ft_split(argv, " ");
	ft_check_digit(result);
	ft_atot(result, a);
	ft_check_repeat(a);//meter a funcion push_swap

}