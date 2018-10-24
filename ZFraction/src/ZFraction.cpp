#include "ZFraction.h"
#include <iostream>

ZFraction::ZFraction(): num(0), den(0) {}

ZFraction::ZFraction(int numerateur, int denominateur): num(numerateur), den(denominateur) {}

ZFraction::~ZFraction()
{
    //dtor
}

double ZFraction::getValue() const
{
    return (double)num/den;
}

ZFraction& ZFraction::operator+=(ZFraction const& other)
{
    num = num * other.den + other.num*den;
    den*=other.den;
    simplify();
    return *this;
}

void ZFraction::simplify()
{
    int a = num;
    int b = den;
    while(b != 0)
    {
        const int t = b;
        b = a%b;
        a=t;
    }
    num/=a;
    den/=a;
}

ZFraction ZFraction::substract(ZFraction const& fraction2) const
{
    int num = (this->num*fraction2.den) - (fraction2.num*this->den);
    int den = (this->den*fraction2.den);
    ZFraction resultat(num, den);
    resultat.simplify();
    return resultat;
}

bool operator==(ZFraction const& fraction1, ZFraction const& fraction2)
{
    return fraction1.getValue() == fraction2.getValue();
}

bool operator!=(ZFraction const& fraction1, ZFraction const& fraction2)
{
    return !(fraction1==fraction2);
}

ZFraction operator+(ZFraction const& fraction1, ZFraction const& fraction2)
{
    ZFraction resultat = fraction1;
    resultat+=fraction2;
    return resultat;
}

ZFraction operator<(ZFraction const& fraction1, ZFraction const& fraction2)
{
    return fraction1.getValue() < fraction2.getValue();
}

std::string ZFraction::toString() const
{
    return std::to_string(num) + "/" + std::to_string(den);
}

std::ostream& operator<<(std::ostream& out, ZFraction const& fraction)
{
    out << fraction.toString();
    return out;
}
