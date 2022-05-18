// #include <iostream>
// #include "Ticket.h"
// #include "MenuRegular.h"
// #include "MenuGold.h"
// #include "RegularTicket.h"
// #include "GoldTicket.h"
// #include "PlatinumTicket.h"
#include "Window.h"
// #include <ctype.h>
using namespace std;
#include <iostream>
void Window::RegularPrint(){
        RegularTicket userTicket(userName,userMovie,isDiscountValid);
        //cout<<userTicket.GetUserName()<<endl;
        int Popcorn=0;
        int water=0;
        int sprite=0;
        int cocaCola=0;
        cout<<"How many Popcorns do you want?"<<endl;
        cin>>Popcorn;
        userTicket.AddPopcornSmall(Popcorn);
        cout<<"How many water bottles do you want?"<<endl;
        cin>>water;
        userTicket.AddWater(water);
        cout<<"How many sprite cans do you want?"<<endl;
        cin>>sprite;
        userTicket.AddSprite(sprite);
        cout<<"How many cocacola cans do you want?"<<endl;
        cin>>cocaCola;
        userTicket.AddCocaCola(cocaCola);
        userTicket.Print();
        //cout<<"Total Cost: $"<<userTicket.TotalCost()<<endl;

}
void Window::GoldPrint(){
        GoldTicket userTicket(userName,userMovie,isDiscountValid);
        int Popcorn=0;
        int water=0;
        int sprite=0;
        int cocaCola=0;
        int icecream=0;
        int icedcoffee=0;
        int popcornMedium=0;
        cout<<"How many small Popcorns do you want?"<<endl;
        cin>>Popcorn;
        userTicket.AddPopcornSmall(Popcorn);
        cout<<"How many medium Popcorns do you want?"<<endl;
        cin>>popcornMedium;
        userTicket.AddPopcornMedium(popcornMedium);
        cout<<"How many water bottles do you want?"<<endl;
        cin>>water;
        userTicket.AddWater(water);
        cout<<"How many sprite cans do you want?"<<endl;
        cin>>sprite;
        userTicket.AddSprite(sprite);
        cout<<"How many cocacola cans do you want?"<<endl;
        cin>>cocaCola;
        userTicket.AddCocaCola(cocaCola);
        cout<<"How many icecream cones do you want?"<<endl;
        cin>>icecream;
        userTicket.AddIceCream(icecream);
        cout<<"How many icedcoffee drinks do you want?"<<endl;
        cin>>icedcoffee;
        userTicket.AddIcedCoffee(icedcoffee);
       // cout<<"Total Cost: $"<<userTicket.TotalCost()<<endl;
        userTicket.Print();

}
void Window::PlatinumPrint(){
        PlatinumTicket userTicket(userName,userMovie,isDiscountValid);
        int Popcorn=0;
        int water=0;
        int sprite=0;
        int cocaCola=0;
        int icecream=0;
        int icedcoffee=0;
        int popcornMedium=0;
        int popcornLarge=0;
        int icedTea=0;
        int burger=0;
        int fries=0;
        cout<<"How many small Popcorns do you want?"<<endl;
        cin>>Popcorn;
        userTicket.AddPopcornSmall(Popcorn);
        cout<<"How many medium Popcorns do you want?"<<endl;
        cin>>popcornMedium;
        userTicket.AddPopcornMedium(popcornMedium);
        cout<<"How many Large Popcorns do you want?"<<endl;
        cin>>popcornLarge;
        userTicket.AddPopcornLarge(popcornLarge);
        cout<<"How many water bottles do you want?"<<endl;
        cin>>water;
        userTicket.AddWater(water);
        cout<<"How many sprite cans do you want?"<<endl;
        cin>>sprite;
        userTicket.AddSprite(sprite);
        cout<<"How many cocacola cans do you want?"<<endl;
        cin>>cocaCola;
        userTicket.AddCocaCola(cocaCola);
        cout<<"How many icecream cones do you want?"<<endl;
        cin>>icecream;
        userTicket.AddIceCream(icecream);
        cout<<"How many icedcoffee drinks do you want?"<<endl;
        cin>>icedcoffee;
        cout<<"How many icedTeas do you want?"<<endl;
        userTicket.AddIcedCoffee(icedcoffee);
        cin>>icedTea;
        userTicket.AddIcedTea(icedTea);
        cout<<"How many burgers do you want?"<<endl;
        cin>>burger;
        userTicket.AddBurger(burger);
        cout<<"How many fries do you want?"<<endl;
        cin>>fries;
        userTicket.AddFries(fries);
        userTicket.Print();
        //cout<<"Total Cost: $"<<userTicket.TotalCost()<<endl;
}
void Window::InitialPrint(){

    cout<< "What's your User Name? : "<<endl;
    cin >> userName;

   //Selecting movie and taking the int input from the user which is the= index of the movie +1
    cout << "Select a movie you'd like to watch: " << endl << "1. Pirates of the Caribbean" << endl << "2. Encanto " << endl<< "3. Jumanji" << endl;
    cin >> movieNumber;
    while (!(movieNumber ==1 || movieNumber == 2||movieNumber==3) )
    {
        cout << "Enter valid number: "<<endl;
        cin >> movieNumber;

    }
    //temporary print
    cout<<"The movie is: "<<movies[movieNumber-1]<<endl;
    userMovie=movies[movieNumber-1];

    //////////////generating the ticket conctructors by taking in an input from the user
    cout << "What kind of ticket would you like to buy: regular, gold or platinum? : " << endl;
    cin >> ticket;
    //
    ticket = tolower(ticket[0]);
    while(!(ticket == "r" || ticket == "g" || ticket == "p")){
        cout << "Enter valid ticket type: "<<endl;
        cin >> ticket;
        ticket = tolower(ticket[0]);
    }
    if (ticket == "r"){
        RegularPrint();
    }
    else if(ticket=="g"){
        GoldPrint();
    }
    else if(ticket=="p"){
        PlatinumPrint();
    }

}

Window::~Window(){
    cout<<"Window deleted"<<endl;
}