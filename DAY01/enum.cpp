/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enum.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:59:42 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/14 13:36:04 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
enum var:char{AND, OR, SL}; //size enumaration var is 1;

int main(void)
{
	int num = var::AND, num2 = OR;	
	var yassin = var::SL;// error (AND + 1);
	cout << "this is num1 :"<< num << endl; 
	cout << "this is num2 :"<< num2<< endl; 
	cout << "this is enum variable : " << (int)yassin<< endl; 
}
