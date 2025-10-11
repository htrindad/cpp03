/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:03:40 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/11 18:12:58 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <limits>
#include <stdint.h>

class ClapTrap
{
	protected:
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
		void setName(std::string name);
		void setHp(uint32_t amount);
		void setEp(uint32_t amount);
		void setAd(uint32_t amount);
};

std::ostream &operator<<(std::ostream &out, const ClapTrap &ref);
