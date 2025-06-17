/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_vector.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:03:14 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/17 11:49:36 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	vector<string> names = {"Yassine", "Amin", "Issam"};
	names.push_back("Slawi");
	for(string name : names)
		cout << "name is: " << name << endl;
	return 0;
}
