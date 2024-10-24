#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate x raised to the power of n
double pow(double x, int n)
{
    double result = 1.0;
    long long absN = n;
    if (absN < 0)
    {
        absN = -absN;
        x = 1 / x;
    }

    while (absN > 0)
    {
        if (absN % 2 == 1)
        {
            result *= x;
        }
        x *= x;
        absN /= 2;
    }

    return result;
}

int main()
{
    double x;
    int n;

    cout << "Enter the daily energy production (in kWh): ";
    cin >> x;
    cout << "Enter the number of days: ";
    cin >> n;

    double totalEnergy = pow(x, n);

    cout << fixed << setprecision(5) << totalEnergy << " kWh" << endl;

    return 0;
}
