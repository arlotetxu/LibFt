/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 08:01:17 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/24 09:41:50 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Check if this main could be adapted to check ft_strmapi */
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*result;
	void	*f;
	
	f = &ft_toupper;
	str = "This is a test 05";
	result = ft_strmapi(str, f);
	printf("The result is: %s\n", result);
	return (0);
}
