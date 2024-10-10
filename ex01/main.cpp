/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:19:21 by machi             #+#    #+#             */
/*   Updated: 2024/10/01 18:38:03 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("SC4V-TP");

	scav.attack("enemy");
	scav.takeDamage(30);
	scav.beRepaired(15);
	scav.guardGate();

	return 0;
}