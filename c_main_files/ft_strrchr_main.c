/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:12:35 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/12 17:14:16 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	c;
	char	text[] = "1234567\089\0";
	c = 49;
	
	printf("The last found character is on: %p\n", strrchr(text, c));
	printf("The last found character is on: %p\n", ft_strrchr(text, c));

	return (0);
}
