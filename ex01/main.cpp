/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:09:30 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/11 17:09:52 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

int main()
{
	ScavTrap serena = ScavTrap("Serena");
	ScavTrap meriff = ScavTrap("Meriff");
	ScavTrap evilMeriff;

	evilMeriff = meriff;
	evilMeriff.attack("Serena");
	serena.takeDamage(evilMeriff.getAd());
	meriff.guardGate();
	evilMeriff.attack("Serena");
	serena.takeDamage(0);
	evilMeriff.attack("Meriff");
	meriff.takeDamage(evilMeriff.getAd());
	serena.guardGate();
	evilMeriff.attack("Meriff");
	meriff.takeDamage(0);
	serena.beRepaired(5);
	meriff.beRepaired(5);
}
