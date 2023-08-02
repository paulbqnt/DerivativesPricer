//
// Created by zalman on 8/2/23.
//

#ifndef DERIVATIVESPRICER_SIMPLEMC2_H
#define DERIVATIVESPRICER_SIMPLEMC2_H
#include "PayOff2.h"

double SimpleMonteCarlo2(const PayOff& thePayOff,
                         double Expiry,
                         double Spot,
                         double Vol,
                         double r,
                         unsigned long NumberOfPath);

#endif //DERIVATIVESPRICER_SIMPLEMC2_H
