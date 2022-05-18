#include "Payments.h"
#include"Games.h"
#include"Registered_User"
#define SIZE 20
class Order
{
private:
	int orderId;
	Payments * paymnt;
	Games * game[SIZE];
  Registered_User * rUser;
	
public:
	Order();
	Order(int oId );
	void addPaymentDetails();
	void display_Order();
	~Order();
};