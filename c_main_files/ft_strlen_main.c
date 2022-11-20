/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:13:42 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/04 13:25:53 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include "libft.h"

int	main(void)
{
	char	*s;

	s = "This is a string"; //16
	printf("Original function value: %lu\n", strlen(s));
	printf("Created function value: %lu\n", ft_strlen(s));
	return (0);
}