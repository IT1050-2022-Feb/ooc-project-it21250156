#include "card.h"
#include<iostream>
#include<cstring>
using namespace std;

cards::cards()
{

	cardNo = 0;
	expDate = "";
	cardholderName = "";
}
cards::cards(int cNo, string exDate, string ownername)
{
	cardNo = cNo;
	expDate = exDate;
	cardholderName = ownername;
}
void cards::updateCardDetails()
{

}
cards::~cards
{
  
}