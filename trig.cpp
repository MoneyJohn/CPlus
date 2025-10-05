#include <iostream>
#include <cmath>
#include "trig.h"

extern double pi;

namespace trig{ 

double sin(double theta){
    theta = rangeLimit(theta);
    int k = 3;
    double sum = theta;
    double oldsum = 0.0;
    bool sign = true;
    double num = theta;
    double theta2 = theta*theta;
    double den = 1.0;
    double term;
    while(sum != oldsum){
        num *= theta2;
        den *= k*(k-1);
        oldsum = sum;
        term = num/den;
        if(sign) term = -term;
        sum += term;
        sign = !sign;
        k += 2;
        
    }
    return sum;
}

double cos(double theta){
    theta = rangeLimit(theta);
    int k = 2;
    double sum = 1.0;
    double oldsum = 0.0;
    bool sign = true;
    double num = 1.0;
    double theta2 = theta*theta;
    double den = 1.0;
    double term;
    while(sum != oldsum){
        num *= theta2;
        den *= k*(k-1);
        oldsum = sum;
        term = num/den;
        if(sign) term = -term;
        sum += term;
        sign = !sign;
        k += 2;
        
    }
    return sum;
}
double exp(double theta){
    int k = 1;
    double sum = 1.0;
    double oldsum = 0.0;
    double num = 1.0;
    double den = 1.0;
    double term;
    while(sum != oldsum){
        num = num * theta;
        den = den * k;
        oldsum = sum;
        term = num / den;
        sum = sum + term;
        k = k+1;
    }
    return sum;
}

double rangeLimit(double theta){
    if(abs(theta) > pi){
        double temp = std::fmod(theta, pi);
        if (temp != 0.0) theta = temp;
        else if(fmod(theta, 2*pi)==0.0)theta =0.0;
        else theta = pi;
    }
    return theta;
}
}