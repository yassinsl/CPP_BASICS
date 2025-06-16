/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   con.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:55:46 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/16 13:08:47 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int i;

	cout << "please enter the number :";
	cin >> i;
	if(!(i % 2)) cout << i << ": is even number";
	else cout << i << ": is odd number";
	cout << endl;
	return 0;
}
