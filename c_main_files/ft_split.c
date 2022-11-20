/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:51:02 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/28 17:53:50 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_num_strings(char const *s, char c)
{
	unsigned int	i;
	unsigned int	cont;

	cont = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			cont++;
			continue ;
		}
		i++;
	}
	return (cont);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	aux;

	str = malloc(sizeof(str) * (ft_num_strings(s, c) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			aux = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			str[j] = ft_substr(s, aux, i - aux);
			j++;
			continue ;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
