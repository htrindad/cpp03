/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:34:24 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/11 18:10:58 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.h"
#include "ScavTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		void setDefault();
		std::string name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &ref);
		DiamondTrap &operator=(const DiamondTrap &ref);
		void attack(const std::string &target);
		void whoAmI();
};
