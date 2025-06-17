/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:49:35 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/17 10:00:23 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector	<int>arr;
	int num = 0;

	while(num < 10)
	{
		if(!(num % 2)) arr.push_back(num);
		num++;
	}
	cout << "this is your arr\n";
	for(int i : arr)
		cout << " " << i;
}
