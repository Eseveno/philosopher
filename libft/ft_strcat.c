/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseveno <eseveno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:19:57 by eseveno           #+#    #+#             */
/*   Updated: 2015/02/17 12:58:27 by eseveno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
	{
		s1[i] = s2[c];
		i++;
		c++;
	}
	s1[i] = 0;
	return (s1);
}
