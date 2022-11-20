/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:06:41 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/07 21:56:41 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"


int	main()
{
	char	text1[] = "QQQQQQQQQ";
	char	text2[] = "QQQQQQQQQ";

	printf("Text1: %s\n", text1);
	memset(&text1, '$', 4);
	printf("Text1 modified with original: %s\n", text1);


	printf("Text2: %s\n", text2);
	ft_memset(text2, '$', 4);
	printf("Text2 mod. with created funct.: %s\n", text2);
	return (0);
}
