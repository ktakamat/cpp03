/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:52:33 by machi             #+#    #+#             */
/*   Updated: 2024/10/05 16:55:22 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap has been created." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 30;
	std::cout << "DiamondTrap " << _name << " has been created." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " has been destroyed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : FragTrap(other), ScavTrap(other)
{
	_name = other._name;
	std::cout << "Copy DiamondTrap " << _name << " has been created." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		FragTrap::operator=(other);
		ScavTrap::operator=(other);
		_name = other._name;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::Name << "." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
