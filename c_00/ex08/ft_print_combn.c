/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:39:41 by didos-re          #+#    #+#             */
/*   Updated: 2022/02/18 22:40:14 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print(int answer[], int n)
{
	int		i;
	char	c;

	c = '0';
	i = 0;
	while (i <= n)
	{
		c = ((answer[i] + '0'));
		write(1, &c, 1);
		i++;
	}
}

void	case_1(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		if (i != '9')
			write(1, ", ", 2);
		i++;
	}
}

void	execution2(int answer[], int *n, int *pivot)
{
	answer[(*n - 1)] = (answer[(*n - 1)] + 1);
	if ((answer[*n] - answer[(*n - 1)]) != 1)
	{
		while (*pivot > 0)
		{
			answer[*n] = (answer[(*n - 1)] + 1);
			*pivot = *pivot -1;
			*n = *n + 1;
		}
				answer[*n] = (answer[(*n - 1)] + 1);
				*pivot = 0;
	}
	else
	{
		*pivot = *pivot + 1;
		*n = *n - 1;
	}
	print (answer, (*n + *pivot));
	if (!(*n == 0 && (answer[*n] == (9 - *pivot))))
		write(1, ", ", 2);
}

void	execution1(int i, int n, int pivot, int answer[])
{
	while (n > 0)
	{
		if (answer[n] == (9 - pivot))
		{
			execution2 (answer, &n, &pivot);
		}
		else
		{
			answer[n] = answer[n] + 1;
			print (answer, (n + pivot));
			if (!(n == 0 && (answer[n] == (9 - pivot))))
				write(1, ", ", 2);
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	int		answer[9];
	int		pivot;
	int		i;
	char	c;

	i = 0;
	pivot = 0;
	if (n == 1)
		case_1();
	else
	{
		while (i < n)
		{
			answer[i] = i;
			c = (answer[i] + '0');
			write(1, &c, 1);
			i++;
		}
		write (1, ", ", 2);
		i = 0;
		n = n - 1;
		execution1(i, n, pivot, answer);
	}
}

int main()
{
	ft_print_combn(1);
}
