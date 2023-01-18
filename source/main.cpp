#include <stdio.h>
#include <iostream>
#include <sstream>

int main( int argc, char** argv ){

	std::ostringstream s;
	s << "Hello" << "World";

	std::cout << s.str() << std::endl;

	return 0;
};