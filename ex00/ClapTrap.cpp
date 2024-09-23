/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:52:47 by machi             #+#    #+#             */
/*   Updated: 2024/09/23 02:44:33 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("default"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << Name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << " destrcutor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	Name = other.Name;
	AttackDamage = other.AttackDamage;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	std::cout << "ClapTrap " << Name << " copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	Name = other.Name;
	AttackDamage = other.AttackDamage;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	std::cout << "ClapTrap " << Name << " assignation operator called" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (HitPoints > 0 && EnergyPoints > 0)
	{
		EnergyPoints--;
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " can not move..." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints <= amount)
	{
		HitPoints = 0;
		std::cout << "ClapTrap " << Name << " is died" << std::endl;
	}
	else
	{
		
	}
}


