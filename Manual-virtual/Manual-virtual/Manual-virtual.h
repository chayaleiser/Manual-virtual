#pragma once
#include <iostream>
using namespace std;

class Base
{
public:
	virtual void print();
	
};

class ChildOne : public Base
{
public:
	void print();
};

class ChildTwo : public Base
{};




