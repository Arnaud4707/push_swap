/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:26:43 by amugisha          #+#    #+#             */
/*   Updated: 2025/01/27 03:04:47 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

typedef struct s_vars {
	int	*taba;
	int	*tabb;
	int	sizea;
	int	sizeb;
	int	op;
}		t_vars;

int		ft_atoi(const char *nptr, int *error);
int		len_tab(char **tab);
int		is_trie(t_vars *vars);
char	**ft_split(char const *s, char c);
void	verif(int arg, char **argv, int *error, char **join);
char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_free(char **str);
int		*dou_tab(char *str, int *error, int *size);
char	**tb(char *str, int *error);
void	sa(t_vars *vars);
void	sb(t_vars *vars);
void	ss(t_vars *vars);
void	pa(t_vars *vars);
void	pafnca(t_vars *vars, int *tmpa);
void	pafncb(t_vars *vars, int *tmpb);
void	pb(t_vars *vars);
void	pbfncb(t_vars *vars, int *tmpb);
void	pbfnca(t_vars *vars, int *tmpa);
void	ra(t_vars *vars);
void	rb(t_vars *vars);
void	rr(t_vars *vars);
void	rra(t_vars *vars);
void	rrb(t_vars *vars);
void	rrr(t_vars *vars);
void	print_sa(t_vars *vars);
void	print_sb(t_vars *vars);
void	print_ss(t_vars *vars);
void	print_pa(t_vars *vars);
void	print_pb(t_vars *vars);
void	print_ra(t_vars *vars);
void	print_rb(t_vars *vars);
void	print_rr(t_vars *vars);
void	print_rra(t_vars *vars);
void	print_rrb(t_vars *vars);
void	print_rrr(t_vars *vars);
void	printtab(t_vars *vars);
void	action(t_vars *vars);
void	small_number_3(t_vars *vars);
void	small_number_4_5(t_vars *vars);
void	pull_b(t_vars *vars, int size);
void	pull_a(t_vars *vars);
void	calcule_b(t_vars *vars);
void	calcule_a(t_vars *vars);
void	b_delta(t_vars *vars, int *tmp, int i);
void	calcule_b_part2(t_vars *vars, int *tmp, int id, int p);
void	big_number(t_vars *vars);
void	my_big_number(t_vars *vars);
void	get_id(t_vars *vars);

#endif
