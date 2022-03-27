#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Mystring
{
private:
    char *str;

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    void display() const;
    int get_length() const;
    const char *get_str() const;
};

Mystring::Mystring() : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

//overloaded constructor
Mystring::Mystring(const char *s) : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

//copy constructor
Mystring::Mystring(const Mystring &source) : str{nullptr}
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}

void Mystring::display() const
{
    cout << str << ":" << get_length() << endl;
}

int Mystring::get_length() const { return strlen(str); }

const char *Mystring::get_str() const { return str; }

int main()
{
    Mystring empty;
    Mystring amit("Hello");
    Mystring roy(amit);

    empty.display();
    amit.display();
    roy.display();
    return 0;
}