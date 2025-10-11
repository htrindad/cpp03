/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:41:37 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/11 18:33:14 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

// Private Methods

void DiamondTrap::setDefault()
{
	hp = FragTrap::getHp();
	ep = ScavTrap::getEp();
	ad = FragTrap::getAd();
}

// CDO
DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	name = ClapTrap::name;
	setDefault();
	std::cout << "DiamondTrap " << name << " default constructor called\n";
}
DiamondTrap::~DiamondTrap() { std::cout << "DiamondTrap " << name << " destructor called\n"; }
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	ClapTrap::name = name;
	setDefault();
	std::cout << "DiamondTrap " << name << " name constructor called\n";
}
DiamondTrap::DiamondTrap(const DiamondTrap &ref): ClapTrap(ref), ScavTrap(ref), FragTrap(ref)
{
	*this = ref;
	std::cout << "DiamondTrap " << name << " copy constructor called\n";
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &ref)
{
	name = ref.name;
	ClapTrap::name = ref.ClapTrap::name;
	hp = ref.FragTrap::getHp();
	ep = ref.ScavTrap::getEp();
	ad = ref.FragTrap::getAd();
	std::cout << "DiamondTrap " << name << " copy operator called\n";
	return *this;
}

void DiamondTrap::attack(const std::string &target) { ScavTrap::attack(target); }

void DiamondTrap::whoAmI() { std::cout << "Hi, I'm " << name << " and my ClapTrap name is " << ClapTrap::name << '\n'; }
