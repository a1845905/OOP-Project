#ifndef REGULAR_TICKET_H
#define REGULAR_TICKET_H

#include "Ticket.h"
#include "MenuRegular.h"


class RegularTicket : public Ticket, public MenuRegular {

    public:

    RegularTicket();
    RegularTicket(string _userName, string _movieName, bool _isDiscountValid);
    double TotalCost();
    void Print();
    void SelectSeat();
    ~RegularTicket();

};

#endif