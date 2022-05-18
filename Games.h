class Games
{
private:
	int gameId;
	char gameName[20];
	char category[20];
	float price;
	

public:
	Games();
	Games(int gId, char gName[], char categ[], float gPrice );
	void updateGameDetails();
	void storeGames();
	~Games();
};

