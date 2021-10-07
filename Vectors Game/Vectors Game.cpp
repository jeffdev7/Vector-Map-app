#include <vector>
#include <iostream>
#include "Upgrade.h"
#include <map>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;
using std::pair;
using std::map;

int main()
{
    int choice;
    Upgrade* u = new Suit();
    Suit s;
    cout << "   UPGRADE: +   \n\n";

    map<int, string> ups;
    ups.insert({ 1, "Gadgets" }),
        ups.insert({ 2,"Ammo" }),
        ups.insert({ 3, "Resistence\n" });

    for (auto i = ups.begin(); i != ups.end(); ++i) {
        cout << i->first << '\t' << i->second << endl;
    }

    cin >> choice;
    system("cls");
    cout << "\n";
    switch (choice)
    {
    case 1:u->Gadgets();
        cout << "\nYou successfully upgraded your gadgets.\n";
        break;
    case 2: u->Ammo();
        cout << "\nYou successfully got more 6% of ammo.\n";
        break;
    case 3: s.Resistence();
        cout << "\nYour suit is 3% more resistent to impacts.\n";
        break;
    default:
        cout << "\nValid option";
        exit(0);
    }
    cout << "\tJust one upgrade per mission.\n";
    cin.get();
}
