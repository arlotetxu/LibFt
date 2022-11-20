/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jflorido <jflorido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:30:36 by jflorido          #+#    #+#             */
/*   Updated: 2022/09/24 14:02:23 by jflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *** WORKING WITH FILES -- FILE DESCRIPTORS ***

#include <fcntl.h>

open function:	int open(const char *pathname, int flags);
	return -1 if function fails
	
read function:	ssize_t read(int fd, void *buf, size_t count);
	return the number bytes read
	the function stores the read bytes int the string buf
	
close function:	int close(int fd);
write function: ssize_t??? write(int fd, void *buf, size_t count);

flags:
O_RDONLY
O_WRONLY
O_RDWR
O_CREAT
O_APPEND
O_TRUNC

count: Number of bytes to read / write. Combine with the using of sizeof

*/

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int		fd;
	char	*text;

	text = "This text has been copied to the file";
	fd = open("ft_putstr_fd.txt", O_WRONLY);
	ft_putstr_fd(text, fd);
	return (0);
}
