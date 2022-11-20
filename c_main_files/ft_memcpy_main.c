/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:43:55 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/08 15:20:36 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	origin[] = "Inicio";
	char	dest[] = "$$$$$$";

	printf("dest_string: %s\n", dest);
	memcpy(dest, origin, 4);
	printf("dest_string after original function: %s\n", dest);

	char	origin2[] = "ArLo";
	char	dest2[] = "$$$$$$";

	printf("dest2_string: %s\n", dest2);
	ft_memcpy(dest2, origin2, 4);
	printf("dest2_string after created function: %s\n", dest2);

	return (0);
}
