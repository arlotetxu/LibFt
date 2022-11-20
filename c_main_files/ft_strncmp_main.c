/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:24:05 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/12 20:13:03 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	text1[] = "testss"; //92
	char	text2[] = "test"; 

	int		i;
	int		j;

	i = strncmp(text1, text2, 7);
	j = ft_strncmp(text1, text2, 7);
	
	printf("Text1 length: %zu\n", ft_strlen(text1));
	printf("Text2 length: %zu\n", ft_strlen(text2));
	printf("The value the original function returns: %d\n", i);
	printf("The value the created function returns: %d\n", j);
	return (0);
}
