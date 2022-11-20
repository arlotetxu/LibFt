/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:35:18 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/20 20:51:51 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	text[] = "";
	char	set[] = "cdef";
	char	*result;

	result = ft_strtrim(text, set);

	printf("String text after function: %s\n", result);
	free (result);
	return (0);
}
