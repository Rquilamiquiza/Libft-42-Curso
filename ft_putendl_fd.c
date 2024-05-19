/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquilami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:03:07 by rquilami          #+#    #+#             */
/*   Updated: 2024/05/18 14:14:56 by rquilami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
		i++;
	len = (sizeof(char) * i);
	write (fd, s, len);
	write (fd, "\n", 1);
}
