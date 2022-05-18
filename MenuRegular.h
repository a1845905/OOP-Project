#ifndef MENUREGULAR_H
#define MENUREGULAR_H
#include <iostream>
using namespace std;

// Abstract class for the menu (starting with regular and inheriting down from that)
class MenuRegular {
    public:
    
    int popcornSmall = 0;
    int water = 0;
    int cocaCola = 0;
    int sprite = 0;

    // public:
    // int GetPopcornSmall ();
    // int GetWater();
    // int GetCocaCola();
    // int GetSprite();

    void AddPopcornSmall(int _popcorn);
    void AddWater(int _water);
    void AddCocaCola(int _cocaCola);
    void AddSprite(int _sprite);


};
#endif