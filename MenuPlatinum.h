#ifndef MENUPLATINUM_H
#define MENUPLATINUM_H

#include "MenuGold.h"
#include <iostream>
using namespace std;

class MenuPlatinum : public MenuGold {

    protected:
    int popcornLarge=0;
    int burger=0;
    int fries=0;
    int icedTea=0;

    public:
    void AddPopcornLarge(int _popcorn);
    void AddBurger(int _burger);
    void AddFries(int _fries);
    void AddIcedTea(int _icedTea);

};

#endif