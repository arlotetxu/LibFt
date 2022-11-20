/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:59:42 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/04 13:25:23 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_strlen ---> length of a string (characters or bytes)

  SYNOPSIS
  ***********
  #include <ctype.h>
  int	isprint(int c);

  DESCRIPTION
  ***********
  The function ft_isprint() mimics the behavior of the isprint() function from
  string C library. Both functions returns the number of characters that 
  precede the terminating NUL character in a string.

  PARAMETERS
  **********
  *s ---> The string to be checked.

  RETURN VALUE
  ************
  - Number of characters in a string if is not empty.
  - 


  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1(boolean true) and if it is false it will
  return 0(boolean false).

  ALTERNATIVE CODE
  ******************
 
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}
