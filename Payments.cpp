#include 'Payments.h'
#include "cards.h"
  
#include <string>
#include <cstring>

Payments::Payments()
{
  paymentID = 0 ;
  Amount = 0.00 ;
  strcpy(Ptime , "" );
}

Payments::Payments(int PID, float pay_amount, string pay_time )
{
  paymentID = PID ;
  Amount = pay_amount ;
  strcpy(Ptime , pay_time);
}
void Payments::displayReciept()
{ 
}

Payments::~Payments()
{ 
}