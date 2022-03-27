#include <iostream>

using namespace std;

int main()
{

    int scores[] = {100, 90, 80};

    int *score_ptr = {scores};

    // cout << scores << endl;

    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    return 0;
}