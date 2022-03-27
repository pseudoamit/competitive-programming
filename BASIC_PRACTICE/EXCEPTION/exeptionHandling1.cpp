#include <iostream>

using namespace std;

int main()
{
    int miles{0};
    int gallons{0};

    double miles_per_gallons{0.0};

    cout << "Enter Miles: " << endl;
    cin >> miles;
    cout << "Enter Gallons: " << endl;
    cin >> gallons;

    // miles_per_gallons = miles / gallons;

    try
    {
        if (gallons == 0)
            throw 0;
        miles_per_gallons = static_cast<double>(miles) / gallons;
        cout << "Result: " << miles_per_gallons << endl;
    }
    catch (int &ex)
    {
        cerr << "Cant divide by zero" << endl;
    }

    return 0;
}