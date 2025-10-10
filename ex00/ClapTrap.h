/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:03:40 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/10 17:30:39 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <limits>
#include <stdint.h>

class ClapTrap
{
	private:
		std::string name;
		uint32_t hp;
		uint32_t ep;
		uint32_t ad;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ref);
		ClapTrap &operator=(const ClapTrap &ref);
		void attack(const std::string &target);
		void takeDamage(uint32_t ammount);
		void beRepaired(uint32_t amount);
		uint32_t getHp() const ;
		uint32_t getEp() const ;
		uint32_t getAd() const ;
		std::string getName() const ;
};

std::ostream &operator<<(std::ostream &out, const ClapTrap &ref);
