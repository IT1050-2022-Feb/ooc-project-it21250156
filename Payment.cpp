#include 'Payments.h'
#include <string>
#include <cstring>

Payments::Payments()
{
}

Payments::Payments(int PID, float pay_amount, string pay_time)
{
  paymentID = PID ;
  Amount = pay_amount ;
  strcpy(Ptime , pay_time);
}
void Payments::displayReciept()
{ 
}

Payments::~Payment()
{ 
}