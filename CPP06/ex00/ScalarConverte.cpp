/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:30:11 by ybourais          #+#    #+#             */
/*   Updated: 2023/12/24 07:57:01 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"
#include <cctype>
#include <climits>
#include <iomanip>
#include <limits>

ScalarConverte::ScalarConverte()
{
    std::cout<< "default constructor called"<<std::endl;
}

ScalarConverte::~ScalarConverte()
{
    std::cout<< "deconstracter called"<< std::endl;
}

int is_number(const std::string s, double *holder)
{
    std::istringstream num(s);

    num >> *holder;

    if(!num.fail() && num.eof()) 
    {
        return 1;
    }
    return 0;
}

void print_error()
{
    std::string str;
    
    str = "impossible";
    std::cout<< "char: "<<str<<std::endl;
    std::cout<< "int: "<<str<<std::endl;
    std::cout<< "float: "<<str<<std::endl;
    std::cout<< "double: "<<str<<std::endl;
}

void print_char(double nbr)
{
    char charvar;
    bool char_in_range;
    
    char_in_range = nbr >= 0 && nbr < 128;
    charvar = static_cast<char>(nbr);
    if(!char_in_range)
    {
        std::cout<< "char: impossible"<<std::endl;
    }
    else if(isprint(static_cast<int>(nbr)))
    {
        std::cout<< "char: "<< charvar <<std::endl;
    }
    else
    {
        std::cout<< "char: no displayable"<<std::endl;
    }
}


void print_int(double nbr)
{
    int intvar;

    intvar = static_cast<int>(nbr);
        
    if(nbr <= INT_MAX && nbr >= INT_MIN)
        std::cout<<"int: "<<intvar<<std::endl;
    else
    {
        std::cout<<"int: impossible"<<std::endl;
    }
}


void print_float(double nbr, int len)
{

    float floatvar;
    floatvar = static_cast<float>(nbr);

    if(nbr > std::numeric_limits<float>::max() || nbr < std::numeric_limits<float>::min())
    {
        std::cout<< "float: impossible"<<std::endl;
    }
    else if (static_cast<int>(nbr) - floatvar == 0)
    {
        std::cout<< "float: "<<floatvar<<".0f"<<std::endl;
    }
    else
    {
        std::cout<<"float: "<<std::fixed<<std::setprecision(len)<<floatvar<<"f"<<std::endl;
    }
    std::cout<<static_cast<int>(nbr) - floatvar<<std::endl;
}

/* void print_double(double nbr) */
/* { */
/**/
/* } */
/**/

void print_result(double nbr, int len)
{
    print_char(nbr);
    print_int(nbr); 
    print_float(nbr, len);
    /* print_double(nbr); */

    /* float floatvar = static_cast<float>(nbr); */
   
    /* std::cout<< "float: "<<floatvar<<std::endl; */
    std::cout<< "double: "<<nbr<<nbr<<std::endl;
}

void ScalarConverte::convert(std::string str)
{
    double holder;
    if(!is_number(str, &holder))
    {
        print_error(); 
    }
    else
    {
        print_result(holder, str.length()); 
    }
}

