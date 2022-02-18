/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-re <didos-re@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:23:14 by didos-re          #+#    #+#             */
/*   Updated: 2022/02/16 05:52:10 by didos-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*initial;

	initial = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}	
	*dest = '\0';
	dest = initial;
	return (dest);
}
