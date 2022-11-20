/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:50:48 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/07 22:06:25 by jflorido         ###   ########.fr       */
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
	bzero(text1, 3);
	printf("Text1 mod. with original funct.: %s\n", text1);

	printf("Text2: %s\n", text2);
	ft_bzero(text2, 3);
	printf("Text2 mod. with created funct.: %s\n", text2);
	return (0);
}
