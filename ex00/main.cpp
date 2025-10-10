/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:09:30 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/10 17:28:20 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main()
{
	ClapTrap bro = ClapTrap("bro");
	ClapTrap sis = ClapTrap("sis");
	ClapTrap bro2 = bro;

	bro.attack("sis");
	sis.takeDamage(5);
	sis.attack("bro");
	bro.takeDamage(1);
	bro.beRepaired(1);
	bro.attack("sis");
	sis.takeDamage(bro.getAd());
	bro2.attack("bro");
	bro.takeDamage(200);
}
