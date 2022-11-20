/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:12:35 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/11 20:08:07 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	c;
	char	text[] = "This is a String";
	c = 104;
	
	printf("The found character is on: %p\n", strchr(text, c));
	printf("The found character is on: %p\n", ft_strchr(text, c));

	return (0);
}
