/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 00:29:59 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/02 04:27:54 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include "easyfind.hpp"

int main()
{
    int arr[] = {2,4,4,5,6,8};
    std::vector<int> vector(arr, arr + sizeof(arr)/sizeof(arr[0]));
    /* vector.push_back(10); */
    /* vector.push_back(10); */
    /* vector.push_back(10); */
    /* vector.push_back(10); */
    /* vector.push_back(10); */
    /* std::cout<< *vector.begin()<<std::endl; */
    
    std::cout<< &(*(arr + 3))<<std::endl;
    easyfind(vector, 5);

    
}

