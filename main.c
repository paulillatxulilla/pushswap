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

int	main (int argc, char *argv)
{
	t_list	a;
	char	**result;
	if (argc < 2)
	{
		ft_printf ("Error\n");
		return (0);
	}
	result = ft_split(argv, " ");
	ft_parse_digit (result)

}