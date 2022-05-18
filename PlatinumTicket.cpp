#include "PlatinumTicket.h"
#include <iostream>
using namespace std;

PlatinumTicket::PlatinumTicket(){
    userName="";
    movieName="";
    seatNumber=0;
    isDiscountValid = 0;
    ticketCost= 15.00;
}

PlatinumTicket::PlatinumTicket(string _userName, string _movieName, bool _isDiscountValid){
    userName=_userName;
    movieName=_movieName;
    isDiscountValid=_isDiscountValid;
    ticketCost = 15.00;
    cout<<"Platinum ticket selected "<<endl;
}

double PlatinumTicket::TotalCost(){
    double totalCost=popcornSmall*2.00+water*0.50+sprite*2.50+cocaCola*2.50+iceCream*3+icedCoffee*3+popcornMedium*4.00+popcornLarge*6+burger*10+fries*3+icedTea*4+ticketCost;
    return totalCost;
}

void PlatinumTicket::Print(){
    double TotalPopcorn=popcornSmall*2.00;
    double TotalWater=water*0.5;
    double TotalSprite=sprite*2.50;
    double TotalCocaCola=cocaCola*2.50;
    double TotalIcecream=iceCream*3;
    double TotalIcedCoffee=icedCoffee*3;
    double TotalPopCornMedium=popcornMedium*4;
    double TotalPopcornLarge = popcornLarge*6;
    double TotalBurgers=burger*10;
    double TotalFries=fries*3;
    double TotalIcedTea=icedTea*4;
    cout<<"Ticket Cost (Platinum) $"<< ticketCost << endl<<popcornSmall<<"x PopcornSmall purchased  $"<<TotalPopcorn<<endl
    <<water<<"x water purchase $"<<TotalWater<<endl<<sprite<<"x Sprite purchased  $"<<TotalSprite<<endl<<cocaCola<<"x CocaCola purchase $"<<TotalCocaCola<<endl;
    cout<<iceCream<<"x Icecreams purchased $"<<TotalIcecream<<endl<<icedCoffee<<"x IcedCoffees purchased $"<<TotalIcedCoffee<<endl<<popcornMedium<<"x popcornMedium purchased $"<<TotalPopCornMedium<<endl<<popcornLarge<<"x Large popcorns purchased $"<<
    TotalPopcornLarge<<endl<<burger<<"x burgers purchased $"<<TotalBurgers<<endl<<fries<<"x fries purchased $"<<TotalFries<<endl<<icedTea<<"x icedTea purchased $"<<TotalIcedTea<<endl<<"Total Cost: $"<<TotalCost()<<endl;

}

void PlatinumTicket::SelectSeat(){

}

PlatinumTicket::~PlatinumTicket(){
    cout << "ticket deleted." << endl;
}

