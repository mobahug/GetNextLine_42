/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 12:26:10 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/07 09:25:05 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

//#include "libft.h"
#define BUF_SIZE 100
/*
int	get_next_line(const int fd, char **line)
{
	int		fd;
	char	**linesaver;

	if (*line)
		return (0);
	*linesaver = (char **)malloc(sizeof(char *) * BUF_SIZE + 1);
	*linesaver = (char **)malloc(sizeof(char *) * ft_strlen(line) + 1);
	if (!*linesaver)
		return (NULL);
	fd = open(*linesaver, O_RDONLY);
	if (f == -1)
		return (1);
	else
	{
		while (read(fd, &buffer, 1) != 0)
			write(1, &buffer, 1);
	if (close(fd) == -1)
		return (1);
	return (0);
}
*/
/*
**testing_testing
*/
/*
int	get_next_line(const int fd, char **line)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	if (*line)
		return (0);
	buf = (char *)malloc(sizeof(char) * BUF_SIZE + 1); //?
	if (!*buf)
		return (NULL);
	fd = open(*buf, O_RDONLY);
	if (f == -1)
		return (1);
	else
	{
		while (read(fd, buf, BUF_SIZE) != 0)
			write(1, buf, BUF_SIZE);
	if (close(fd) == -1)
		return (1);
	return (0);
}
*/
/*
int	get_next_line(const int fd, char **line)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	if (*line)
		return (0);
	buf = (char *)malloc(sizeof(char) * BUF_SIZE + 1); //?
	if (!*buf)
		return (NULL);
	fd = open(*buf, O_RDONLY);
	if (f == -1)
		return (1);
	else
	{
		while (read(fd, buf, BUF_SIZE) != 0)
			write(1, buf, BUF_SIZE);
	if (close(fd) == -1)
		return (1);
	return (0);
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

void	ft_putstr(char const *s)
{
	char	*s_s;
	int		i;

	s_s = (char *)s;
	if (s != 0)
	{
		i = 0;
		while (s_s[i] != '\0')
		{
			write(1, &s_s[i], 1);
			i++;
		}
	}
}

size_t	ft_strlen(const char *s)
{
	int	i;

	if (*s == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main ()
{
	int		fd;
	int		ret;
	//char	buf[BUF_SIZE + 1];
	char	*line;
	char	*buf;

	//buf = (char *)malloc(sizeof(char) * BUF_SIZE + 1); //?
	//if (!*buf)
		//return (NULL);
	buf = (char *)malloc(sizeof(char) * BUF_SIZE);
	if (!buf)
		return (0);
	fd = open("/Users/ghorvath/Workspace/GNL/srcs/test.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	else
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putnbr(ret);
			ft_putstr(buf);
		}
	}
	ft_putnbr(ret);
	ft_putstr(buf);
	ft_putstr(buf);

	if (close(fd) == -1)
		return (1);
	return (0);
}
**************************************************

static int	ft_get_line(const int fd, char **line)
{
	char	*buffer;
	int		fd;


	buffer = (char *)malloc(sizeof(char ) * BUF_SIZE + 1);
	if (!*buffer)
		return (0);
	while (fd && **line != '\n')
	{
		line++;
		if (line)
		{
			
		}
	}

}

/*
**testing_testing_testing
*/
