/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:04:06 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/14 18:31:00 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	text1[] = "This is is a text";
	char	text2[] = "at";
	char	*result;
	char	*result2;

	result = strnstr(text1, text2, 4);
	result2 = ft_strnstr(text1, text2, 4);
	printf("Original function result: %p\n", result);
	printf("Created function result: %p\n", result2);
	return (0);
}