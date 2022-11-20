/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:06:08 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/04 12:23:29 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>
#include "libft.h"

int	main(void)
{
	int		c;

	c = 148;
	printf("Variable value (int): %d\n", c);
	printf("Original function value: %d\n", isascii(c));
	printf("Created function value: %d\n", ft_isascii(c));
	return (0);
}
