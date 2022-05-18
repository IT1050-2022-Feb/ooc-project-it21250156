class admin
{
  private:
    int AdminID;
    Games* game[SIZE];

  public:
    Admin();
    Admin(int AID);
    void addGames(Games* g)
};