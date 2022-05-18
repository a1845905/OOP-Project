#include "Ticket.h"
#include <string>
using namespace std;

void Ticket::SetUserName(string name){
    userName=name;

}
string Ticket::GetUserName(){return userName;}
string Ticket::GetMovieName(){return movieName;}
