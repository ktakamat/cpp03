/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:40:57 by machi             #+#    #+#             */
/*   Updated: 2024/10/02 01:09:45 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap " << Name << " has been constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	Name = other.Name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	std::cout << "FragTrap " << Name << " has been copied!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		Name = other.Name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	std::cout << "FragTrap " << Name << " has been assigned from another FragTrap!" << std::endl;
	return *this;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " has been destructed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << Name << " excitedly requests: 'Hey! High five me!'" << std::endl;
}
