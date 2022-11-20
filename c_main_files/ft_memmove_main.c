/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:43:55 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/10 09:43:17 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	origin[] = "ArLosgsdfgsdgf";
	char	dest[] = "$$$$$$$";

	//printf("Sizeof dst: %lu\n", sizeof(dest));
	printf("dest_string: %s\n", dest);
	memmove(dest, origin, 14);
	printf("dest_string after original function: %s\n", dest);

	char	origin2[] = "ArLosgsdfgsdgf";
	char	dest2[] = "$$$$$$$";

	printf("dest2_string: %s\n", dest2);
	ft_memmove(dest2, origin2, 14);
	printf("dest2_string after created function: %s\n", dest2);

	return (0);
}
