//
// Created by zalman on 8/2/23.
//
#include "../Headers/SimpleMC2.h"
#include <iostream>
using namespace std;

int main4()
{
double Expiry;
double Strike;
double Spot;
double Vol;
double r;
unsigned long NumberOfPaths;

cout << "\nEnter expiry\n";
cin >> Expiry;

cout << "\nEnter Strike\n";
cin >> Strike;

cout << "\nEnter Spot\n";
cin >> Spot;

cout << "\nEnter Vol\n";
cin >> Vol;

cout << "\nr\n";
cin >> r;

cout << "\nNumber of paths\n";
cin >> NumberOfPaths;

unsigned long optionType;

cout << "\nenter 0 for call, otherwise put ";
cin >> optionType;

PayOff* thePayOffPtr;

if (optionType == 0)
    thePayOffPtr = new PayOffCall(Strike);
else
    thePayOffPtr = new PayOffPut(Strike);



double result = SimpleMonteCarlo2(*thePayOffPtr, Expiry, Spot, Vol, r, NumberOfPaths);

cout << "\nthe price is " << result << "\n";

double tmp;
cin >> tmp;

delete thePayOffPtr;

return 0;
}