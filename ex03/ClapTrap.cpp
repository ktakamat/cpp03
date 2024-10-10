/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:40:52 by machi             #+#    #+#             */
/*   Updated: 2024/10/01 19:21:32 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Unknown"), HitPoints(10), EnergyPoints(10), AttackDamage(0) 
{
	std::cout << "Default ClapTrap has been constructed!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << Name << " has been constructed!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << " has been destructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	Name = other.Name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	std::cout << "ClapTrap " << Name << " has been copied!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		Name = other.Name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	std::cout << "ClapTrap " << Name << " has been assigned from another ClapTrap!" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints--;
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " can't attack due to low energy or hit points." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints <= amount)
	{
		HitPoints = 0;
		std::cout << "ClapTrap " << Name << " has taken damage and is now destroyed!" << std::endl;
	}
	else
	{
		HitPoints -= amount;
		std::cout << "ClapTrap " << Name << " has taken " << amount << " damage and now has " << HitPoints << " hit points left." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints--;
		HitPoints += amount;
		if (HitPoints > 10)
		{
			HitPoints = 10;
		}
		std::cout << "ClapTrap " << Name << " has been repaired and now has " << HitPoints << " hit points." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " can't be repaired due to low energy or hit points." << std::endl;
	}
}
