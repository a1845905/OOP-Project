#ifndef MENUGOLD_H
#define MENUGOLD_H
#include "MenuRegular.h"
#include <iostream>
using namespace std;

class MenuGold : public MenuRegular {

    public:
    int iceCream;
    int icedCoffee;
    int popcornMedium;

    public:

    void AddIceCream(int _iceCream);
    void AddIcedCoffee(int _icedCoffee);
    void AddPopcornMedium(int _popcorn);

};
#endif