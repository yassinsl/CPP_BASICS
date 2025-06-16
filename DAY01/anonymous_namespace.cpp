/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anonymous_namespace.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:33:45 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/16 09:59:08 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
int value = 333;
namespace{
	int is_digit(int c)
	{
		return(c >= 0 && c <= 9);
	}
}
int main(void)
{
	cout << "test: " << is_digit(0) << endl;
	cout << "global name space: " << ::value << endl;
	::std::cout << "Last One";
}
