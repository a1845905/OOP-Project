#ifndef TICKET_H
#define TICKET_H
#include <iostream>
using namespace std;

//abstract ticket class
class Ticket{
    protected:
    string userName;
    string movieName;
    int* seats; //points to an array of seats
    int seatNumber;
    double totalCost;
    double ticketCost;
    bool isDiscountValid;

    public:
    void SetUserName(string name);
    void SetMovieName();
    string GetUserName();
    string GetMovieName();
    virtual double TotalCost()=0;
    virtual void Print()=0;
    virtual void SelectSeat()=0;


};
#endif
