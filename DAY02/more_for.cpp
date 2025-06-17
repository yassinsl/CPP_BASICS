/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_for.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:22:32 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/17 09:33:02 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	 vector<int> nums = {5, 6, 3};
	 for(int num : nums)// samething happen in compiler hhh
		 cout << num << endl;
}
