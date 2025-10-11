/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:09:30 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/11 17:32:31 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
	ScavTrap serena = ScavTrap("Serena");
	FragTrap FR4G_TP = FragTrap("FR4G-TP");

	serena.attack("enemy");
	FR4G_TP.attack("enemy");
	FR4G_TP.highFiveGuys();
}
