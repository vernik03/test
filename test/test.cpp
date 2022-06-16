#include <iostream>
#include "test_exam.h"

int main()
{
	tCheck t;
	t.t = 2;
	t.t_without_e = 1;
	std::cout << (countAllT("test") == t) << std::endl;
	std::cout << countAllT("test") << std::endl;
	std::cout << countAllT("testet") << std::endl;
	std::cout << countAllT("ttt") << std::endl;
	std::cout << countAllT("eee") << std::endl;
	std::cout << countAllT("teeet") << std::endl;
}