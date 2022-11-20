/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:34:21 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/04 12:38:53 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>
#include "libft.h"

int	main(void)
{
	int		c;

	c = 33;
	printf("Variable value (int): %d\n", c);
	printf("Original function value: %d\n", isprint(c));
	printf("Created function value: %d\n", ft_isprint(c));
	return (0);
}
