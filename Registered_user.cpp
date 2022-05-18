#include "Registered_user.h"
#include "card.h"
#include "Games.h"
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

Registered_user::Registered_user()
{
	UserID = 0;
	strcpy(Username, "");
	strcpy(Password, "");
	strcpy(Email, "");
	strcpy(DOB, "");
}
Registered_user::Registered_user(int UID, string Uname, string PW, string mail, string bDate)
{ 
	UserID = UID;
	Username = Uname;
	Password = PW;
	Email = mail;
	DOB = bDate;
}
void Registered_user::updateDetails()
{
  
}
void Registered_user:: deleteAccount()
{

}
void Registered_user::void orderGames()
{

}
void Registered_user::void searchGames()
{

}
void Registered_user::void addCards()
{

}
void Registered_user::void addFeedbacks()
{

}
Registered_user::~Registered_user()
{

}