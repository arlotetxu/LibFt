/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:51:18 by jflorido          #+#    #+#             */
/*   Updated: 2022/10/31 10:05:25 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  
  NAME
  ****
  ft_memset ---> put a value (n) in a string 
  				(previously converted to unsigned char)
  len times. 

  SYNOPSIS
  ***********
  #include <strings.h>
  void	*memset(void *b, int c, size_t len);

  DESCRIPTION
  ***********
  The memset() function fills the first len bytes of the memory area
  pointed to by b with the constant byte c.

  PARAMETERS
  **********
  *b ---> The string position (pointer).
  c ---> The value to add.
  len ---> number of times to add 'c'.

  RETURN VALUE
  ************
  - b. pointer modified.
  - 


  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1(boolean true) and if it is false it will
  return 0(boolean false).

  ALTERNATIVE CODE
  ******************
  	while (len)
		*(unsigned char *)(b + --len) = (unsigned char)c;
	  return ((char *)b);
 
*/

#include "libft.h"


void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
