/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:41:15 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/17 16:06:54 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	text1[] = "hola";
	char	*result;

	result = ft_substr(text1, 0, -1);
	printf("Result: %s\n", result);
	printf("Longitud cadena resultante; %zu\n", ft_strlen(result));
	free (result);
	return (0);
}
