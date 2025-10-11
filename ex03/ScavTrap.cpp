/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:19:42 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/11 18:20:04 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

// Private methods
void ScavTrap::setDefault()
{
	setHp(100);
	setEp(50);
	setAd(25);
	gk = false;
}

// CDO
ScavTrap::ScavTrap()
{
	setDefault();
	std::cout << "ScavTrap default constructor called\n";
}
ScavTrap::~ScavTrap() { std::cout << "ScavTrap destructor called\n"; }
ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	setDefault();
	std::cout << "ScavTrap name constructor called with name " << name << '\n';
}
ScavTrap::ScavTrap(const ScavTrap &ref)
{
	*this = ref;
	std::cout << "ScavTrap copy constructor called\n";
}
ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	setName(ref.getName());
	setHp(ref.getHp());
	setEp(ref.getEp());
	setAd(ref.getAd());
	gk = ref.getGk();
	std::cout << "ScavTrap copy operator called\n";
	return *this;
}

// Public Methods

void ScavTrap::attack(const std::string &target)
{
	if (!hp)
	{
		std::cout << "ScavTrap " << name << " cannot attack " << target << " due to not having enough HP!\n";
		return ;
	}
	if (!ep)
	{
		std::cout << "ScavTrap " << name << " cannot attack " << target << " due to not enough energy points!\n";
		return ;
	}
	setHp(getHp() - 1);
	std::cout << "ScavTrap " << name << " attacks " << target << " causing " << ad << " points of damage!\n";
}

void ScavTrap::guardGate()
{
	if (!gk)
	{
		gk = true;
		std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode\n";
	}
}

bool ScavTrap::getGk() const { return gk; }
