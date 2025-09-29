 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onevil_x <onevil_x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 03:36:09 by onevil_x          #+#    #+#             */
/*   Updated: 2025/08/30 03:36:34 by onevil_x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *_hordeZombie;
    int N = 5;

    _hordeZombie = zombieHorde(N, "HordeZombie");
    int i = 0;
    while (i < N)
    {
        _hordeZombie->announce();
        i++;
    }
    delete[] _hordeZombie;
    return 0;
}