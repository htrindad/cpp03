/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:32:24 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/11 17:20:43 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.h"

class ScavTrap: public ClapTrap
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
		void guardGate();
		bool getGk() const;
};
