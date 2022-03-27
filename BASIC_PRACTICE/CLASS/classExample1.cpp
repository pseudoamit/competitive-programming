#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
public:
    //Attributes
    string name;
    int health;
    int xp;

    // Methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
};

class Account
{
public:
    //Attributes
    string name;
    double balance;

    //Methods
    bool deposite(double bal)
    {
        balance += bal;
        cout << "In deposite" << endl;
    }
    bool withdraw(double bal)
    {
        balance -= bal;
        cout << "In withdraw" << endl;
    }
};

int main()
{

    Player amit;
    amit.name = "Amit";
    amit.health = 100;
    amit.xp = 12;
    amit.talk("Hola!!");

    Player *jason = new Player;
    (*jason).name = "Jason";
    (*jason).health = 150;
    jason->xp = 15;
    jason->talk("We will win!!!!");

    Account amit_account;
    amit_account.name = "Amit's Account";
    amit_account.balance = 5000.50;
    amit_account.deposite(150.50);

    return 0;
}
