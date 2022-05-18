#include<string>
class Games
{
private:
	int gameId;
	string gameName;
	string category;
	float price;
	

public:
	Games();
	Games(int gId, string gName, string categ, float gPrice );
	void updateGameDetails();
	void storeGames();
	~Games();
};

