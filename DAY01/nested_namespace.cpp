/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nested_namespace.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:49:22 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/15 13:00:52 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

namespace sp_1
{
	int check_number(int num);
	namespace sp_2{
	int check_number(int num);
	}
}

int sp_1::sp_2::check_number(int num)
{
	return (num % 2) ? 0 : 1;
}
int sp_1::check_number(int num)
{
	return (num % 2) ? 1 : 0;
}
int main(void)
{
	cout << "this is a sp_1 : " << sp_1::check_number(3) << endl;
	cout << "this is a sp_1 : " << sp_1::sp_2::check_number(3) <<endl;
}
