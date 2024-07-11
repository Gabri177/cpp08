#include "Span.hpp"


Span::Span(unsigned int num){

	_array.reserve(num);
}

Span::Span(const Span & obj){

	*this = obj;
}

Span::~Span(){

}

Span &								Span::operator=(const Span & obj){

	if (this != &obj){
		_array = obj._array;
	}
	return *this;
}

void								Span::addNumber(unsigned int num){

	if (_array.size() >= _array.capacity())
		throw FullException();
	std::vector<unsigned int>::iterator it = std::lower_bound (_array.begin(), _array.end(), num);
	_array.insert(it, num);
}

unsigned int						Span::shortestSpan(){

	if (_array.size() < 2)
		throw NoFindException();
	
	unsigned int diff = _array[1] - _array[0];
	for (std::vector<unsigned int>::const_iterator it = _array.begin() + 1; it != _array.end(); it ++){
		if (*it - *(it - 1) < diff)
			diff = *it - *(it - 1);
	}
	return diff;
}

unsigned int						Span::longestSpan(){

	if (_array.size() < 2)
		throw NoFindException();
	return _array.back() - _array[0];
}

const char * 						Span::NoFindException::what() const throw() {

	return "Do not have enough number to caculate the distance!!!";
}


const char *						Span::FullException::what() const throw() {

	return "The array can not add more element!!!";
}
