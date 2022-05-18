class admin
{
  private:
    int AdminID;
    Games* game[SIZE];

  public:
    Admin();
    Admin(int AID);
    void addGames(Games* g1);
    void deleteGame();
    void removeFeedback();
    void removeUser();
    ~Admin();
};