/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:02:07 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/18 12:16:00 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n_str;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	n_str = malloc(sizeof(char) * (len + 1));
	if (n_str == NULL)
		return (NULL);
	ft_strlcpy(n_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(n_str, s2, len + 1);
	return (n_str);
}
