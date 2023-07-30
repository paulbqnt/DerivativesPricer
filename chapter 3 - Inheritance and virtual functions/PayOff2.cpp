#include "../Headers/PayOff2.h"
#include <iostream>

PayOffCall::PayOffCall(double Strike_) : Strike(Strike_)
{}

double PayOffCall::operator()(double Spot) const
{
    return std::max(Spot - Strike, 0.0);
}
f
double PayOffPut::operator()(double Spot) const
{
    return std::max(Strike - Spot, 0.0);
}

PayOffPut::PayOffPut(double Strike_) : Strike(Strike_)
{}