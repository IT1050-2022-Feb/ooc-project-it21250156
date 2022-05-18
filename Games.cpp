#include "Games.h"
#include<cstring>
#include<cstring>
 
Games::Games()
{
  gameId = 0;
  strcpy(gameName,"");
  strcpy(category,"");
	price = 0;
		
}
Games::Games(int gId, string gName,  string categ, float gPrice )
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