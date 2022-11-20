/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 06:04:49 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/28 18:04:07 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_memcpy ---> memory copy

  SYNOPSIS
  ***********
  	#include <ctype.h>
  	#include <string.h>
	void	*ft_memcpy(void *dst, const void src, size_t n)

  DESCRIPTION
  ***********
  The function ft_memcpy() mimics the behavior of the memcpy() 
  function from string C library. Both functions copy n bytes 
  from memory area src to memory area dst.

  PARAMETERS
  **********
	void *dst ---> Destination string;
	const void src ---> Source string;
	size_t n ---> Number of bytes to be copied

  RETURN VALUE
  ************
  - NULL if one of the strings is empty.
  - dst modified.


  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition 
  is true or false. If it is true it will return 1(boolean true) and 
  if it is false it will return 0(boolean false).
  */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);

	i = 0;
	while (i < n)
	{
		//(char *)(dst[i]) = (char *)(src[i]);
		*(char *)(dst + i) = *(char *)(src + i);
		//((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (dst);
}
