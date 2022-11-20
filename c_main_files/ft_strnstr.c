/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:11:24 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/14 18:30:37 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hsk, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ndl[i] == '\0')
		return (((char *)hsk + i));
	while (hsk[i] != '\0' && i < len)
	{
		if (hsk[i] == ndl[j])
		{
			while (hsk[i + j] == ndl[j] && ((i + j) < len))
			{
				if (ndl[j + 1] == '\0')
					return (((char *)hsk + i));
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
