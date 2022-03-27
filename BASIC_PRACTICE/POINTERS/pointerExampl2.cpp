#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> names{"amit", "jitu", "juwel"};
    vector<string> *name_ptr{&names};

    for (auto name : *name_ptr)
    {
        cout << (*name_ptr).at(0) << endl;
    }

    return 0;
}