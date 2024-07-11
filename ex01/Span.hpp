#ifndef HEAD_SPAN_HPP
# define HEAD_SPAN_HPP
# include <vector>
# include <iostream>
# include <exception>
# include <algorithm>


class Span {

	private:
		std::vector<unsigned int> _array;

	public:

											Span(unsigned int num);
											Span(const Span & obj);
											~Span();
		Span &								operator=(const Span & obj);
		void								addNumber(unsigned int num);
		unsigned int						shortestSpan();
		unsigned int						longestSpan();
		class NoFindException : public std::exception {
			
			public:
				const char * what() const throw();
		};

		class FullException : public std::exception {

			public:
				const char * what() const throw();
		};
};

#endif