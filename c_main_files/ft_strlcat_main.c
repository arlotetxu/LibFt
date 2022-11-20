/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:08:43 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/10 16:11:41 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	t_src_2[100] = "the cake is a lie !\0I'm hidden lol\r\n";
	char	t_dst_2[100] = "there is no stars \0in the sky";

	printf("Original destination: %s\n", t_dst_2);
	printf("dst length: %zu\n", ft_strlen(t_dst_2));
	printf("src length: %zu\n", ft_strlen(t_src_2));
	ft_strlcat(t_dst_2, t_src_2, 24);
	printf("Destination mod. with original function; %s\n", t_dst_2);

	return (0);
}
