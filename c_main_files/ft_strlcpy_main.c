/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:16:04 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/10 10:33:32 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	t_src[] = "Source";
	char	t_dst[] = "Destiny";
	char	t_src2[] = "Source";
	char	t_dst2[] = "Destiny";

	printf("original dst: %s\n", t_dst);
	strlcpy(t_dst, t_src, 4);
	printf("dst modified with original function: %s\n", t_dst);

	printf("original dst2: %s\n", t_dst2);
	ft_strlcpy(t_dst2, t_src2, 4);
	printf("dst2 modified with created function: %s\n", t_dst2);

	return (0);
}
