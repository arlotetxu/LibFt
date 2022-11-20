/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:44:39 by arlo              #+#    #+#             */
/*   Updated: 2022/09/04 10:33:13 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>
#include "libft.h"

int	main(void)
{
	char	t;
	int		c;

	t = 'h';
	c = t;
	printf("The variable value (int): %d\n", c);
	printf("The original function value: %d\n", isalnum(c));
	printf("The created function value: %d\n", ft_isalnum(c));
	return (0);
}
