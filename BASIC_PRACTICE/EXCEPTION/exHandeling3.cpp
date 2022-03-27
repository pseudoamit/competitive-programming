#include <iostream>
#include <string>

using namespace std;

double calculate_mpg(int miles, int gallons)
{
    if (gallons == 0)
        throw 0;
    if (miles < 0 || gallons < 0)
        throw string{"Negetive values are not allowed"};
    return static_cast<double>(miles) / gallons;
}

int main()
{
    int miles{0};
    int gallons{0};
    double miles_per_gallons{0.0};

    cout << "Enter miles: " << endl;
    cin >> miles;
    cout << "Enter Gallons: " << endl;
    cin >> gallons;

    try
    {
        miles_per_gallons = calculate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallons << endl;
    }
    catch (int &ex)
    {
        cerr << "Trying to divide by zero" << endl;
    }
    catch (string &ex)
    {
        cerr << ex << endl;
    }
    return 0;
}