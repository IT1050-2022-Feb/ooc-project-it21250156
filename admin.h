#define SIZE 20;
class admin
{
  private:
    int AdminID;
    Games* game[SIZE];

  public:
    admin();
    admin(int AID);
    void addGames(Games* g1);
    void deleteGame();
    void removeFeedback();
    void removeUser();
    ~admin();
};