/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:22:16 by arlo              #+#    #+#             */
/*   Updated: 2022/09/06 17:15:08 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	int	c;
	int	value;

	c = 51;
	value = ft_isalpha(c);
	printf("%d\n", value);
}