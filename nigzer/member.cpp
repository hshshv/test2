#include "member.h"
#include <iostream>

member::member(int a_, int n_)//ax^n
{
	isSimple = true;
	a = a_;
	n = n_;
}

member::member(member* a, member* b, operation op)
{
	isSimple = false;
	CompA = a;
	CompB = b;
}

member* member::gzr()
{
	if (isSimple)
	{
		return(new member(a * n, n - 1));
	}
	else
	{
		if (minus == oper || oper == plus)
		{
			return(new member(CompA->gzr(), CompB->gzr(), oper));
		}
	}
	return(new member(0, 0));
}

void member::print()
{
	if (isSimple)
	{
		std::cout << a << "X^" << n;
	}
	else
	{
		std::cout << "(";
		CompA->print();
		std::cout << ")";
		
		switch (oper)
		{
		case plus: std::cout << "+"; break;
		case minus: std::cout << "-"; break;
		case cafol: std::cout << "*"; break;
		case kelkei: std::cout << "/"; break;
		case power: std::cout << "^"; break;
		}

		std::cout << "(";
		CompA->print();
		std::cout << ")";
	}
}