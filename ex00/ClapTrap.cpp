/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:55:23 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/10 17:31:08 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

// CDO
ClapTrap::ClapTrap()
{
	hp = 10;
	ep = 10;
	ad = 0;
	std::cout << "ClapTrap object created\n";
}
ClapTrap::~ClapTrap()
{
	hp = 10;
	ep = 10;
	ad = 0;
	std::cout << "ClapTrap object destroyed\n";
}
ClapTrap::ClapTrap(ClapTrap const &ref)
{
	hp = ref.hp;
	ep = ref.hp;
	ad = ref.ad;
	name = ref.name;
	std::cout << "ClapTrap objected created through reference object\n";
}
ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hp = 10;
	ep = 10;
	ad = 0;
	std::cout << "ClapTrap manually created using the name constructor\n";
}
ClapTrap &ClapTrap::operator=(ClapTrap const &ref)
{
	hp = ref.hp;
	ep = ref.hp;
	ad = ref.ad;
	name = ref.name;
	std::cout << "ClapTrap objected copied from reference\n";
	return *this;
}

// Methods

void ClapTrap::attack(const std::string &target)
{
	if (!hp)
	{
		std::cout << "ClapTrap " << name << " cannot attack " << target << " due to not having enough HP!\n";
		return ;
	}
	if (!ep)
	{
		std::cout << "ClapTrap " << name << " cannot attack " << target << " due to not enough energy points!\n";
		return ;
	}
	ep--;
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << ad << " points of damage!\n";
}

void ClapTrap::takeDamage(uint32_t amount)
{
	if (!hp)
	{
		std::cout << "ClapTrap " << name << " has no HP left!\n";
		return ;
	}
	if (hp - amount > hp)
		hp = 0;
	else
		hp -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " of damage, leaving it with " << hp << " HP!\n";
}

void ClapTrap::beRepaired(uint32_t amount)
{
	if (hp + amount < hp)
		hp = std::numeric_limits<unsigned int>::max();
	else
		hp += amount;
	std::cout << "ClapTrap " << name << " repairs " << amount << " of HP, having a total of " << hp << " HP!\n";
}

uint32_t ClapTrap::getHp() const { return hp; }

uint32_t ClapTrap::getEp() const { return ep; }

uint32_t ClapTrap::getAd() const { return ad; }

std::string ClapTrap::getName() const { return name; }

std::ostream &operator<<(std::ostream &out, const ClapTrap &clap)
{
	out << "ClapTrap " << clap.getName() << '\n';
	return out;
}
