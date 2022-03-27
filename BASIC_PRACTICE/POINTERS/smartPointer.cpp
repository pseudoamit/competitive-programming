#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Test
{
private:
    int data;

public:
    Test() : data{0}
    {
        cout << "Test constructor " << data << endl;
    }
    Test(int data) : data{data}
    {
        cout << "Test constructor with args " << data << endl;
    }
    int get_data()
    {
        return data;
    }
    ~Test()
    {
        cout << " Test destructor " << endl;
    }
};

int main()
{
    // Test *t1 = new Test(2000);
    unique_ptr<Test> t1(new Test(1000));
    unique_ptr<Test> = make_unique<Test>(1000);
    return 0;
}