/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:52:43 by machi             #+#    #+#             */
/*   Updated: 2024/09/30 15:33:26 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("A");
	ClapTrap	b("B");

	a.attack("B");
	b.takeDamage(5);
	b.beRepaired(3);
	b.attack("A");
	a.takeDamage(10);
	a.beRepaired(10);
	return (0);
}
