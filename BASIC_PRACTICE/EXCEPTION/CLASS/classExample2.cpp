#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    void display();
};

void Student::display()
{
    cout << "Name is: " << name << endl;
    cout << "Age is: " << age << endl;
}

int main()
{
    Student s1("Roy", 007);
    s1.display();
    return 0;
}