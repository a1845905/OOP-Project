#ifndef GOLD_TICKET_H
#define GOLD_TICKET_H

#include "Ticket.h"
#include "MenuGold.h" 

class GoldTicket : public Ticket, public MenuGold {

    public:

    GoldTicket();
    GoldTicket(string _userName, string _movieName, bool _isDiscountValid);
    double TotalCost();
    void Print();
    void SelectSeat();
    ~GoldTicket();

};

#endif