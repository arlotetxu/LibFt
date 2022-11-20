/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:55:21 by arlo              #+#    #+#             */
/*   Updated: 2022/09/07 17:34:27 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_isalpha ---> 	is an alphabetic character 
  					(values between 65 & 90 in ASCII CODE)

  SYNOPSIS
  ***********
  #include <ctype.h>
  int	isalpha(int c);
  #include "libft.h"
  int	ft_isalpha(int c);

  DESCRIPTION
  ***********
  The function ft_isalpha() mimics the behavior of the isalpha() function from
  ctype C library. Both functions check if c is an alphabetic character.

  PARAMETERS
  **********
  c ---> The character to be checked.

  RETURN VALUE
  ************
  - One value if c is a letter.
  - Zero value if not.


  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1(boolean true) and if it is false it will
  return 0(boolean false).

  ALTERNATIVE CODE
  ******************
  return((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
