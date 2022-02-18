/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:33:41 by didos-re          #+#    #+#             */
/*   Updated: 2022/02/16 14:59:30 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			if (!(*str >= 'A' && *str <= 'Z'))
				return (0);
			else
				str++;
		}
	}
	return (1);
}
