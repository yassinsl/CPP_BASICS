/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 16:37:20 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/15 16:43:12 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER
#define MY_HEADER

int ft_strlen(string str)
{
	int i =  -1;

	while(str[++i]);
	return(i);
}
#endif
