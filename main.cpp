#include "admin.h"
#include "cards.h"
#include "feedbacks.h"
#include "Games.h"
#include "Order.h"
#include "Payments.h"
#include "Registered_user.h"


int main{

  admin A1(100);
  
  Payments p1(1,200.00,"2022-05-18 / 13.40");
  
  cards card1(1234432112344321 , "2024-05" , "Saman Kumara");
  
  Feedbacks fb1(1 , "Nice Game!");

  Games g1(24 , "Ludo" , "Board" , 20.00);

  Order o1(10);

  Registered_user ru1(1 , "saman11" , "skumara20001" , "saman@gmail.com" , "2002.01.30");
  
}