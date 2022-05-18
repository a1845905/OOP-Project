#ifndef PLATINUM_TICKET_H
#define PLATINUM_TICKET_H

#include "Ticket.h"
#include "MenuPlatinum.h"

class PlatinumTicket : public Ticket, public MenuPlatinum {
   
    public:

    PlatinumTicket();
    PlatinumTicket(string _userName, string _movieName, bool _isDiscountValid);
    double TotalCost();
    void Print();
    void SelectSeat();
    ~PlatinumTicket();

};

#endif