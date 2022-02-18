/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:05:56 by didos-re          #+#    #+#             */
/*   Updated: 2022/02/17 21:40:42 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		size;

	size = ft_strlen(to_find);
	if (size == '\0')
		return (str);
	i = 0;
	while (*(str + i) != '\0')
	{
		j = 0;
		while (*(str + i + j) == *(to_find + j))
		{
			if (j == (size - 1))
				return (&*(str + i));
			j++;
		}
		i++;
	}
	return (0);
}
