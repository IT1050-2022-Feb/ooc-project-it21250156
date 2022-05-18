#include "Games.h"
#include<cstring>
 
Games::Games()
{
	gameId = 0;
	price = 0;
		
}
Games::Games(int gId, char gName[], char categ[], float gPrice )
{
	gameId = gId;
	strcpy(gameName,gName);
	strcpy(category,categ);
	price = gPrice;
		
}
void Games::updateGameDetails()
{
		
}
void Games::storeGames()
{
		
}
Games::~Games()
{
		
}