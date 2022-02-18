/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 05:58:34 by didos-re          #+#    #+#             */
/*   Updated: 2022/02/14 20:16:52 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;
	int	e;
	int	f;

	c = *a;
	d = *b;
	e = c / d;
	f = c % d;
	*a = e;
	*b = f;
}