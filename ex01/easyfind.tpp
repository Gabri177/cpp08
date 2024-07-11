


template <typename T>
typename T::iterator			easyfind(T & arg, int num){

	typename T::iterator it = std::find(arg.begin(), arg.end(), num);
	if (it == arg.end())
		throw NotFoundException();
	return it;
}