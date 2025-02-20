/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaro-ro <dcaro-ro@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:53:47 by dcaro-ro          #+#    #+#             */
/*   Updated: 2025/01/06 14:54:16 by dcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

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
		void	complain(std::string level);
};

#endif
