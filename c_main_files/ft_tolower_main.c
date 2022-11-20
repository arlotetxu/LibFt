/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:38:01 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/10 17:01:12 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	l;
	char	m;
	char	check_o;
	char	check_c;

	l = 'J';
	m = 'J';
	check_o = tolower(l);
	check_c = ft_tolower(m);

	printf("Varible l int value: %d\n", l);
	printf("Varible l char value: %c\n", l);
	printf("Varible l int value after created function: %d\n", check_o);
	printf("Varible l char value after created function: %c\n\n\n", check_o);
		

	printf("Varible l int value: %d\n", m);
	printf("Varible l char value: %c\n", m);
	printf("Varible l int value after created function: %d\n", check_c);
	printf("Varible l char value after created function: %c\n", check_c);

	return (0);
}