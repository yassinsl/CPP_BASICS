/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bad.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:24:46 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/16 11:28:26 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	int d = 4;
	int s;
	int a = (s =d, d =d + 1, s);
	a = (3, 5);
	std::cout << a << std::endl;
}
