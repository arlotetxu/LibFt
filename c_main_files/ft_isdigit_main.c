/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:41:35 by jflorido              #+#    #+#             */
/*   Updated: 2022/09/01 15:53:43 by jflorido             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>

int ft_isdigit(int c);

int main()
{
    char    c;
    int j;

    c = '7';
    j = c;

    printf("Variable value (int): %d\n", j);
    printf("Returned function value: %d\n", ft_isdigit(j));
    printf("Returned function original value: %d\n", isdigit(j));
    return 0;
}
