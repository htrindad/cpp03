/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:09:30 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/11 18:13:47 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

int main()
{
	DiamondTrap trapper = DiamondTrap("trapper");

	trapper.attack("attacked party");
	trapper.takeDamage(2);
	trapper.beRepaired(2);
	trapper.whoAmI();
}
