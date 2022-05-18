class cards

{
private:

	int cardNo;
	string expDate;
	string cardholderName;

public:

	cards();
	cards(int cNo,string exDate,string ownername);
	void updateCardDetails();
	~cards();
};

