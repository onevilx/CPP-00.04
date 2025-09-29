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
    Zombie *_Zombie;
    
    _Zombie = newZombie("hello there! i am allocated in heap.");
    _Zombie->announce();
    delete _Zombie;
    randomChump("hello there! i am allocated in stack.");
    return 0;
}