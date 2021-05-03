// nigzer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "member.h"

int main()
{
	member A(5, 2);
	member* a = A.gzr();
	a->print();
	member b(5, 2);
	member c(&a, &b, plus);

	std::cout << "Hello World!\n";
	
}



