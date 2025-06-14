/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 09:39:58 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/14 09:47:17 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	int num = 10;

	std::cout << std::hex << num<< std::endl;	
	std::cout << std::oct << num<< std::endl;	
	std::cout << std::dec << num << std::endl;	
}
