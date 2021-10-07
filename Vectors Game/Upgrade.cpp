#include "Upgrade.h"
#include<iostream>
#include <vector>
#include <map>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;
using std::pair;
using std::map;

void Upgrade::Gadgets() {
    vector<string>levelUp{
        {"Gadgets"},
        {"Ammo"},
        {"Resistence"},
    };

    levelUp.push_back({"exit\n" });
    for (string& sg: levelUp)
        cout << sg << endl;
	
}
void Upgrade::Ammo() {
	cout << "+6";
}
void Suit::Resistence() {
	cout << "+3";
}
