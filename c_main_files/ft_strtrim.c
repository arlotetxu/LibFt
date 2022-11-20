/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:28:23 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/21 12:37:01 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	pos_left(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0' && s1[i] != s2[j])
			j++;
		while (s2[j] == '\0') // If the final index is reached, that means that the character is not in the main string
			return (i);
		i++;
	}
	return (0);
}

int	pos_right(char const *s1, char const *s2)
{
	size_t	j;
	size_t	len;

	if (ft_strlen(s1) == 0)
		len = 1;
	else
		len = ft_strlen(s1);
	while (len >= 0)
	{
		j = 0;
		while (s2[j] != '\0' && s1[len - 1] != s2[j])
			j++;
		while (s2[j] == '\0') // If the final index is reached, that means that the character is not in the main string
			return (len);
		len--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l; //1
	size_t	r; //15
	size_t	i;
	char	*str;

	l = pos_left(s1, set);
	r = pos_right(s1, set);
	str = malloc (sizeof(char) * (r - l + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (l < r)
	{
		str[i] = s1[l];
		i++;
		l++;
	}
	str[i] = '\0';
	return (str);
}
