/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:22:28 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/11 17:32:10 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

// CDO
FragTrap::FragTrap() { std::cout << "FragTrap default constructor called\n"; }
FragTrap::~FragTrap() { std::cout << "FragTrap destructor called\n"; }
FragTrap::FragTrap(std::string name): ClapTrap(name) { std::cout << "FragTrap name constructor called\n"; }
FragTrap::FragTrap(const FragTrap &ref)
{
	*this = ref;
	std::cout << "FragTrap copy constructor called\n";
}
FragTrap &FragTrap::operator=(const FragTrap &ref)
{
	setName(ref.getName());
	setHp(ref.getHp());
	setEp(ref.getEp());
	setAd(ref.getAd());
	std::cout << "FragTrap copy operator called\n";
	return *this;
}

// Methods

void FragTrap::highFiveGuys() { std::cout << "WAHOOOOO!!! LET'S CELEBRATE WITH A HIGH FIVE GUYS!!!\n"; }
