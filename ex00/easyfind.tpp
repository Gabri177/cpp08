/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:59:58 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 13:59:59 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




template <typename T>
typename T::iterator			easyfind(T & arg, int num){

	typename T::iterator it = std::find(arg.begin(), arg.end(), num);
	if (it == arg.end())
		throw NotFoundException();
	return it;
}