/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaman <mhaman@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:21:32 by mhaman            #+#    #+#             */
/*   Updated: 2021/03/28 07:58:51 by mhaman           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
ISpaceMarine* bob = new TacticalMarine;
ISpaceMarine* jim = new AssaultTerminator;
Squad* vlc = new Squad;
vlc->push(bob);
vlc->push(jim);
Squad tmc;
tmc = *vlc;
for (int i = 0; i < tmc.getCount(); ++i)
{
ISpaceMarine* cur = tmc.getUnit(i);
cur->battleCry();
cur->rangedAttack();
cur->meleeAttack();
}
delete vlc;
return 0;
}