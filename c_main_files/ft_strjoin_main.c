/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:02:10 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/18 19:26:02 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	text1[] = "This is the text1";
	char	text2[] = "and this the text2";
	char	*text3;
	
	text3 = ft_strjoin(text1, text2);
	printf("String after function: %s\n", text3);

	return (0);
}