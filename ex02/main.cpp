/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:41:03 by machi             #+#    #+#             */
/*   Updated: 2024/10/01 19:22:26 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("SC4V-TP");
	FragTrap frag("FR4G-TP");
	ClapTrap clap("CL4P-TP");

	scav.attack("enemy");
	frag.attack("enemy");
	clap.attack("enemy");

	scav.takeDamage(30);
	frag.takeDamage(40);
	scav.beRepaired(15);
	frag.beRepaired(20);
	scav.guardGate();
	frag.highFivesGuys();

	return 0;
}
