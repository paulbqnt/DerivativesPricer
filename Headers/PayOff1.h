#ifndef DERIVATIVESPRICER_PAYOFF1_H
#define DERIVATIVESPRICER_PAYOFF1_H

class PayOff{
public:
    enum OptionType {call, put};
    PayOff(double Strike_, OptionType TheOptionsType_);
    double operator()(double Spot) const;
private:
    double Strike;
    OptionType TheOptionsType;
};

#endif //DERIVATIVESPRICER_PAYOFF1_H
