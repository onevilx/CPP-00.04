/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onevil_x <onevil_x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 20:54:40 by onevil_x          #+#    #+#             */
/*   Updated: 2025/09/25 12:44:36 by onevil_x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
    std::string  name;
    
    public:
    Zombie(std::string Z);
    ~Zombie(void);
    void announce( void );
};

Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif