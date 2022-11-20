/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 09:24:43 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/17 10:39:19 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	*test_p;
	int		i;
	char	n;

	test_p = ft_calloc(8, sizeof(int));
	i = 0;
	n = '$';
	
	while (i < 8)
	{
		test_p[i] = n;
		i++;
	}
	printf("%s", test_p);
	return (0);
}
