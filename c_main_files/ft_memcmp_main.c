/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 21:24:51 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/13 22:04:12 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	text1[] = "testss";
	char	text2[] = "test";
	//int		n = 5;

	printf("Value from original function: %d\n", memcmp(text1, text2, 5));
	printf("Value from created function: %d\n", ft_memcmp(text1, text2, 5));
	return (0);
}