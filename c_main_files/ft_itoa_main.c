/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:32:36 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/22 21:49:30 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		n;
	char	*result;

	n = -2147483648;
	result = ft_itoa(n);
	printf("Cadena temporal: %s\n", result);
	free(result);
	return (0);
}
