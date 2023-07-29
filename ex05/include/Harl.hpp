/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:48:19 by jgoldste          #+#    #+#             */
/*   Updated: 2023/07/29 23:57:49 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#define PROMPT_INTRO "Which level of Harl's comlains do you want to hear? The levels are:"
#define PROMPT_OPTIONS "DEBUG ,INFO, WARNING, ERROR (note that upper or lower case matters: "
#define EXIT_INFO "---The prompt for exiting the program is 'EXIT.' Obviously, isn't it?---"
#define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-\
pickle-specialketchup burger. I really do!"
#define INFO_MSG "I cannot believe adding extra bacon costs more money. You \
didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING_MSG "I think I deserve to have some extra bacon for free. I’ve \
been coming for years whereas you started working here since last month."
#define ERROR_MSG "This is unacceptable! I want to speak to the manager now."
#define NO_HAVE_MSG "Harl's vocabulary contains only four phrases; thus, it is\
beyond his ability to give any comments!"
#define ARRAY_SIZE 4
#define LVL_ONE "DEBUG"
#define LVL_TWO "INFO"
#define LVL_THREE "WARNING"
#define LVL_FOUR "ERROR"

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

#endif
