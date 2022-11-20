/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:33:14 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/13 17:50:16 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	int		text1[7] = {-49, 49, 1, -1, 0, -2, 2};
	char	*i;
	char	*j;
	//char	k = 'a';

	i = memchr(text1, -1, 7);
	j = ft_memchr(text1, -1, 7);
	printf("Original function result: %p\n", i);
	printf("Created function result: %p\n", j);
	return (0);
}
