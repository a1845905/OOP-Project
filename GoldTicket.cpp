#include "GoldTicket.h"
//#include "RegularTicket.h"
using namespace std;
#include <iostream>

// default constructor
GoldTicket::GoldTicket(){

    userName="";
    movieName="";
    seatNumber=0;
    isDiscountValid = 0;
    ticketCost= 10.00;

}

// constructor with arguments
GoldTicket::GoldTicket(string _userName, string _movieName, bool _isDiscountValid){
    userName=_userName;
    movieName=_movieName;
    isDiscountValid=_isDiscountValid;
    ticketCost = 10.00;
    cout<<"Gold ticket selected "<<endl;
}

//calculating total cost from the menu gold
double GoldTicket::TotalCost(){
    double totalCost=popcornSmall*2.00+water*0.50+sprite*2.50+cocaCola*2.50+iceCream*3+icedCoffee*3+popcornMedium*4.00+ticketCost;
    return totalCost;
}
void GoldTicket::Print(){
    double TotalPopcorn=popcornSmall*2.00;
    double TotalWater=water*0.5;
    double TotalSprite=sprite*2.50;
    double TotalCocaCola=cocaCola*2.50;
    double TotalIcecream=iceCream*3;
    double TotalIcedCoffee=icedCoffee*3;
    double TotalPopCornMedium=popcornMedium*4;

    cout<<"Ticket Cost (Gold) $"<< ticketCost << endl<<popcornSmall<<"x PopcornSmall purchased  $"<<TotalPopcorn<<endl<<popcornMedium<<"x Popcornmedium purchased $"<<TotalPopCornMedium<<endl
    <<water<<"x water purchase $"<<TotalWater<<endl<<sprite<<"x Sprite purchased  $"<<TotalSprite<<endl<<cocaCola<<"x CocaCola purchase $"<<TotalCocaCola<<endl;
    cout<<iceCream<<"x Icecreams purchased $"<<TotalIcecream<<endl<<icedCoffee<<"x IcedCoffees purchased $"<<TotalIcedCoffee<<endl<<"Total Cost: "<<TotalCost()<<endl;
}
void GoldTicket::SelectSeat(){
}

GoldTicket::~GoldTicket(){
    cout << "Ticket deleted" << endl;
}