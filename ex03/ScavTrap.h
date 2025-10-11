/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:32:24 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/11 18:20:53 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.h"

class ScavTrap: virtual public ClapTrap
{
	private:
		bool gk;
		void setDefault();
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ref);
		ScavTrap &operator=(const ScavTrap &ref);
		void attack(const std::string &target);
		void guardGate();
		bool getGk() const;
};
