/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:12:24 by dcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/06 15:13:39 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

typedef enum e_level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
}	t_level;

class Harl
{
	private:
		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);
		typedef void	(Harl::*funcPTR)(void);
	public:
		Harl();
		~Harl();
		void	complain(t_level level);
		t_level	getLevel(const std::string &level);
};

#endif
