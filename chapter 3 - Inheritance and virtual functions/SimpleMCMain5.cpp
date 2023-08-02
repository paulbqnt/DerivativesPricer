//
// Created by zalman on 8/2/23.
//

#include "../Headers/SimpleMC2.h"
#include "../Headers/DoubleDigital.h"
#include <iostream>
using namespace std;

int main()
{
    double Expiry;
    double Low, Up;
    double Spot;
    double Vol;
    double r;
    unsigned long NumberOfPaths;

    cout << "\nEnter expiry\n";
    cin >> Expiry;

    cout << "\nEnter low barrier\n";
    cin >> Low;

    cout << "\nEnter up barrier\n";
    cin >> Up;

    cout << "\nEnter Spot\n";
    cin >> Spot;

    cout << "\nEnter Vol\n";
    cin >> Vol;

    cout << "\nr\n";
    cin >> r;

    cout << "\nNumber of paths\n";
    cin >> NumberOfPaths;

    PayOffDoubleDigital thePayoff(Low, Up);

    double result = SimpleMonteCarlo2(thePayoff, Expiry, Spot, Vol, r, NumberOfPaths);

    cout << "\nthe price of the Double Digital is " << result << "\n";
    double tmp;
    cin >> tmp;

    return 0;
}

