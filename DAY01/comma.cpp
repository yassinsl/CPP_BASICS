/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comma.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:29:19 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/13 09:43:20 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	int a  = 10;
	int b = 2;
	int c;
	c = a + 6, b + 3;// value is 16
	int d = (a + 6, b + 3); // value is 5
	std::cout << "value c is: " << c << std::endl;
	std::cout << "value d is: " << d << std::endl;
}
