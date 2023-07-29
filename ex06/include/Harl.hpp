/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:24:40 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/29 23:26:21 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-\
pickle-specialketchup burger. I really do!"
#define INFO_MSG "I cannot believe adding extra bacon costs more money. You \
didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING_MSG "I think I deserve to have some extra bacon for free. I’ve \
been coming for years whereas you started working here since last month."
#define ERROR_MSG "This is unacceptable! I want to speak to the manager now."
#define NO_HAVE_MSG "[ Probably complaining about insignificant problems ]"
#define ARRAY_SIZE 4

#include <iostream>
#include <string>

class Harl {
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);

	public:
		Harl();
		~Harl();
		
		void	complain(std::string level);
};

bool	checkArgc(int argc);

#endif
