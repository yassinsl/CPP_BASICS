/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:28:33 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/16 13:40:39 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int num;

	cout << "Please enter a number: ";
	cin >> num;
	switch(num)
	{
		case 1:
			cout << "num is one";
			break;
		case 2:
			cout << "num is two";
			break;
		default:
			cout << "is other number";
	}
	cout << endl;
	return (0);
}
