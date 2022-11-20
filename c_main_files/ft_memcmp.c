/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:14:43 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/13 22:15:05 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = ((char *)s1);
	str2 = ((char *)s2);
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (((unsigned char) str1[i]) - ((unsigned char)str2[i]));
		i++;
	}
	return (0);
}
