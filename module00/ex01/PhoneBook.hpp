/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:19:14 by selhilal          #+#    #+#             */
/*   Updated: 2023/10/13 21:49:12 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.hpp"
#include <iomanip>
#pragma once

class PhoneBook
{
    private:
        Contact contact[8];
        int index;
    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact();
        void search_contact();
};
