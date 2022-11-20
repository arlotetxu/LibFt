/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:26:48 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/21 21:23:12 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_line_counter(const char *s, char c)
{
	size_t	count;

	count = 0;
	//while (*s == c && *s)
	//	s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		count++;
	}
	return (count);
}

int	main(void)
{
	size_t	result;
	char	text1[] = "This is a test";
	char	c;

	c = 's';
	result = ft_line_counter (text1, c);
	printf("result: %zu\n", result);
	return (0);
}