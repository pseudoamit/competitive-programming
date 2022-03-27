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
    Player();
    Player(string);
    Player(string, int, int);
    void display();
};

Player::Player()
    : name{"None"}, health{0}, xp{0}
{
}

Player::Player(string n)
    : name{n}, health{0}, xp{0}
{
}

Player::Player(string n, int h, int x)
    : name{n}, health{h}, xp{x}
{
}

void Player::display()
{
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "XP: " << xp << endl;
}

int main()
{
    Player empty();
    Player roy("Roy");
    Player json("Amit", 100, 15);
    json.display();
    return 0;
}