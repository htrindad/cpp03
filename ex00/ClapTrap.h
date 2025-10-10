/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:03:40 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/10 16:09:20 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdint>

class ClapTrap
{
	private:
		std::string name;
		uint32_t hp = 10;
		uint32_t ep = 10;
		uint32_t ad = 0;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ref);
		Claptrap &operator=(const Claptrap &ref);
		void attack(const std::string &target);
		void takeDamage(uint32_t ammount);
		void beRepaired(uint32_t amount);
};

std::ostream &operator<<(std::ostream &out, const Claptrap &ref);
