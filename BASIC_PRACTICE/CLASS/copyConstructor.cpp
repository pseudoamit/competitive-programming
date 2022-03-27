#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }
    Player(string n = "None", int h = 0, int x = 0);
};

Player::Player(string n, int h, int x) : name{n}, health{h}, xp{x}
{
    cout << "Three args constructor" << endl;
}

int main()
{
    Player empty();
    Player s1("Amit");
    Player s2("Roy", 100);
    Player s3("Jason", 150, 15);
    return 0;
}