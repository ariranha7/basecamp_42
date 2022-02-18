/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:59:05 by didos-re          #+#    #+#             */
/*   Updated: 2022/02/16 15:14:42 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	n;
	int	i;

	n = 1;
	i = 0;
	ft_strlowcase(str);
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (n == 1)
				*(str + i) = *(str + i) - 32;
			n = 0;
		}
		else if (*(str + i) >= '0' && *(str + i) <= '9')
			n = 0;
		else
			n = 1;
		i++;
	}
	return (str);
}
