/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 00:46:14 by didos-re          #+#    #+#             */
/*   Updated: 2022/02/18 22:49:49 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int	ascii;

	if (nb < 0)
	{
		ft_putchar('-');
		ascii = nb * -1;
	}
	else
	{
		ascii = nb;
	}
	if (ascii >= 10)
	{
		ft_putnbr(ascii / 10);
	}
	ft_putchar(ascii % 10 + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
