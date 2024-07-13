/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:59:56 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 13:59:57 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_EASY_HPP
# define HEAD_EASY_HPP
# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <exception>

class NotFoundException : public std::exception {

	public:
		const char * what() const throw() {

			return "Can not find the number!";
		}
};

template <typename T>
typename T::iterator			easyfind(T & arg, int num);


# include "easyfind.tpp"


#endif