/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_vector.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:03:14 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/17 12:15:09 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
using namespace std;
using str = string;

int main(void)
{
	vector<str> names = {"Yassine", "Amin", "Issam"};
	names.push_back("Slawi");
	for(string name : names)
		cout << "name is: " << name << endl;
	cout 
		<< "size the string vector is: "
		<< names.size() 
		<< endl;
	int arr_1[] = {55, 39, 24};
	for(int i : arr_1)
		cout 
			<< "content: "
			<< i << endl;	
	return 0;
}
