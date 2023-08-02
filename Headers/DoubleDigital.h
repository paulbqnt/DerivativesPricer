//
// Created by zalman on 8/2/23.
//

#ifndef DERIVATIVESPRICER_DOUBLEDIGITAL_H
#define DERIVATIVESPRICER_DOUBLEDIGITAL_H
#include "PayOff2.h"


class PayOffDoubleDigital : public PayOff
{
public:
    PayOffDoubleDigital(double LowerLevel_, double UpperLevel_);

    virtual double operator()(double Spot) const;
    virtual ~PayOffDoubleDigital(){}
private:
    double LowerLevel;
    double UpperLevel;
};

#endif //DERIVATIVESPRICER_DOUBLEDIGITAL_H
