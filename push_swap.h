/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:25:11 by marvin            #+#    #+#             */
/*   Updated: 2025/04/10 22:25:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft++/libft.h"
# include <stddef.h>
# include <stdarg.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdbool.h>

void	ft_parse_convert(char **result, t_list **a);
int		ft_check_digit(char **result);
int		ft_check_repeat(t_list **a);
void	ft_atot(char **result, t_list **a);
void	ft_sa(t_list **a);
void	ft_sb(t_list **b);
void	ft_ss(t_list	**a, t_list	**b);
void	ft_pa(t_list	**a, t_list	**b);
void	ft_pb(t_list	**a, t_list	**b);
void	ft_ra(t_list	**a);
void	ft_rb(t_list	**b);
void	ft_rr(t_list	**a, t_list	**b);
void	ft_rra(t_list	**a);
void	ft_rrb(t_list	**b);
void	ft_rrr(t_list	**a, t_list	**b);
t_list	*ft_lstmoven(t_list *lst, int n);
void	ft_sort(t_list	**a, t_list **b);
int		ft_sorted(t_list	**a);
void	ft_sort_three(t_list	**a);
void	ft_tprint(t_list	**a);
int		ft_find_small_int(t_list	**a);
void	ft_setindex(t_list	**a);
t_list	*ft_lstmovie(t_list *lst, int ind);
void	ft_set_position(t_list	**a);
void	ft_index_and_position (t_list	**a);
int	    ft_root(int	n);
void	ft_ksort_1(t_list **a, t_list **b, int lena);
void	ft_ksort_2(t_list	**a, t_list	**b);
t_list	*ft_find_bigg_int(t_list	**b);
void	ft_ksort(t_list	**a, t_list	**b);
void	ft_push_smallest(t_list	**a, t_list	**b, int i);
void	ft_sortf_our_ive(t_list	**a, t_list **b, int len);
#endif