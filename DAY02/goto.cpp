/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goto.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:40:57 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/17 17:45:58 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int num = 3;

	while(++num)
		if(num == 9)
			goto harba;
	harba:
		cout << "Bro has a jahed" << endl;
	cout << "just die......";
	
}
