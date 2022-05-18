#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "Ticket.h"
#include "MenuRegular.h"
#include "MenuGold.h"
#include "RegularTicket.h"
#include "GoldTicket.h"
#include "PlatinumTicket.h"

#include <ctype.h>
using namespace std;


class Window{
    protected:
    string userName;
    string movieName;
    string userMovie;
    int movieNumber;
    string ticket;
    // temp isDiscountValid
    bool isDiscountValid = 0;
    string movies[3]={"Pirates of the Caribbean","Encanto","Jumanji"};
    public:
    void InitialPrint();
    void RegularPrint();
    void GoldPrint();
    void PlatinumPrint();

    ~Window();
};

#endif
