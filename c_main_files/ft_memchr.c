/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:32:03 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/13 18:00:37 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_memchr ---> find a character in a string returning its memory address

  SYNOPSIS
  ***********
	#include <string.h>
	void	*ft_memchr(const void *s, int c, size_t n)

  DESCRIPTION
  ***********
  The function ft_memchr() mimics the behavior of the memchr()
  function from string C library. Both functions locate a
  character in n bytes and return a pointer to it.
  Prior to do the checking, it is needed to convert the character
  to find into a unsigned char data type.

  PARAMETERS
  **********
	const void *s ---> string;
	int c ---> Character to locate;
	size_t n ---> Number of bytes to check in the string

  RETURN VALUE
  ************
  - NULL if the character is not in the string..
  - Pointer to the found character.


  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition
  is true or false. If it is true it will return 1(boolean true) and
  if it is false it will return 0(boolean false).
  */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = ((char *)s);
	i = 0;
	while (i < n)
	{
		if (((unsigned char)str[i]) == ((unsigned char)c))
			return (&str[i]);
		i++;
	}
	if (((unsigned char)c) == '\0')
		return (0);
	return (0);
}
