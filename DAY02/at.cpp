/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:19:20 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/18 11:25:34 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	 vector<int> arr = {55, 68, 1111, 7673};

	cout << arr.at(2) << endl;
	cout << arr[2] << endl;
	cout << arr.at(44) << endl;
	cout << arr[44] << endl;
}
