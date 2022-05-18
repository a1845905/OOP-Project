#include "RegularTicket.h"
#include "MenuRegular.h"

using namespace std;
#include <iostream>


// default constructor
RegularTicket::RegularTicket(){
    userName="";
    movieName="";
    seatNumber=0;
    isDiscountValid=0;
    ticketCost=5.00;
    cout<<"Regular ticket selected "<<endl;
}

// countructor with arguments
RegularTicket::RegularTicket(string _userName, string _movieName, bool _isDiscountValid){
    userName=_userName;
    movieName=_movieName;
    isDiscountValid=_isDiscountValid;
    ticketCost = 5.00;
    cout<<"Regular ticket selected "<<endl;
}

//calculating total cost from the menu regular
double RegularTicket::TotalCost(){
    double totalCost=popcornSmall*2.00+water*0.50+sprite*2.50+cocaCola*2.50+5.00;
    return totalCost;
}

void RegularTicket::Print(){
    double TotalPopcorn=popcornSmall*2.00;
    double TotalWater=water*0.5;
    double TotalSprite=sprite*2.50;
    double TotalCocaCola=cocaCola*2.50;

    cout<</*"Ticket Cost (Regular) $"<< ticketCost << endl<<*/popcornSmall<<"x PopcornSmall purchased  $"<<TotalPopcorn<<endl
    <<water<<"x water purchase $"<<TotalWater<<endl<<sprite<<"x Sprite purchased  $"<<TotalSprite<<endl<<cocaCola<<"x CocaCola purchase $"<<TotalCocaCola<<endl;
    //<<"TotalCost: $"<<TotalCost()<<endl;
}

void RegularTicket::SelectSeat(){}

//temporary cout
RegularTicket::~RegularTicket(){cout<<"ticket deleted" << endl;}
