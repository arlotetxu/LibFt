/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:44:04 by jflorido          #+#    #+#             */
/*   Updated: 2022/10/31 10:05:25 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_bzero ---> put a 0 value in a string (previously converted to unsigned
  				char) len times.

  SYNOPSIS
  ***********
  #include <strings.h>
  void	ft_bzero(void *s, size_t n)

  DESCRIPTION
  ***********
  The bzero() function fills the first n bytes of the memory area
  pointed to by s with the 0 value.

  PARAMETERS
  **********
  *b ---> The string position (pointer).
  n ---> number of times to add 0.

  RETURN VALUE
  ************
  - 


  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1(boolean true) and if it is false it will
  return 0(boolean false).
 
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n > 0)
		ft_memset(s, 0, n);
}
