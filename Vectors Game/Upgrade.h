#pragma once
#include <iostream>
#include <vector>
#include <map>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;
using std::pair;
using std::map;

class Upgrade
{
public:
	void Gadgets();
	void Ammo();
};
class Suit :public Upgrade {
public:
	void Gadgets() {};
	void Ammo() {};
	void Resistence();
};

