/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:39:12 by didos-re          #+#    #+#             */
/*   Updated: 2022/02/18 22:39:14 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int number1, int number2)
{
	char	answer[5];

	answer[0] = (number1 / 10) + '0';
	answer[1] = (number1 % 10) + '0';
	answer[2] = ' ';
	answer[3] = (number2 / 10) + '0';
	answer[4] = (number2 % 10) + '0';
	write (1, answer, 5);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_number(i, j);
			if (i == 98 && j == 99)
				break ;
			write (1, ", ", 2);
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb2();
}
