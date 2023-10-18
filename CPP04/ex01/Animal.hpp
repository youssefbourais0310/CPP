/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:26:13 by ybourais          #+#    #+#             */
/*   Updated: 2023/10/18 16:08:14 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        virtual~Animal(void);
        virtual Animal &operator=(Animal const &s);
        Animal(Animal const &src);
       
        virtual void makeSound() const;
        std::string getType() const;
        void setType(std::string type);
};












#endif

