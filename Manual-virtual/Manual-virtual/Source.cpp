#include <iostream>
#include "Manual-virtual.h"
using namespace std;

void func(Base *b)
{
	int* vptr = *(int**)b;
	((void(*)()) vptr[0])();

}

void main()
{
	Base * b = new Base();
	ChildOne * c1 = new ChildOne();
	ChildTwo * c2 = new ChildTwo();

	func(b);
	func(c1);
	func(c2);
}