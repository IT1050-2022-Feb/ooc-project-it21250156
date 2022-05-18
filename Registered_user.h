#include<string>
#include <cstring>

class Registered_user
{
private:
	int UserID;
	string Username;
	string Password;
	string Email;
	string DOB;
	cards* crd[SIZE];
	Feedbacks* fbdks[SIZE];
	Order* order[SIZE];

public:
	Registered_user();
	Registered_user(int UID, string Uname, string PW, string mail, string bDate);
	void updateDetails();
	void deleteAccount();
	void orderGames();
	void searchGames();
	void addCards();
	void addFeedbacks();
	~Registered_user();

};

