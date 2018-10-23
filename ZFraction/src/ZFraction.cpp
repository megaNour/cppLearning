#include "ZFraction.h"

ZFraction::ZFraction(): num(0), den(0){}

ZFraction::ZFraction(int numerateur, int denominateur): num(numerateur), den(denominateur){}

ZFraction::~ZFraction()
{
    //dtor
}

double ZFraction::getValue() const
{
    return num/den;
}

void ZFraction::operator+=(ZFraction const& other)
{
    num = num * other.den;
    num+= other.num*den;
    den*=other.den;
    simplify();
}

ZFraction* ZFraction::simplify()
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
    return this;
}

ZFraction ZFraction::add(ZFraction const& fraction2) const
{
    int num = (this->num*fraction2.den) + (fraction2.num*this->den);
    int den = (this->den*fraction2.den);
    return ZFraction(num, den);
}

ZFraction ZFraction::substract(ZFraction const& fraction2) const
{
    int num = (this->num*fraction2.den) - (fraction2.num*this->den);
    int den = (this->den*fraction2.den);
    return ZFraction(num, den);
}

bool operator==(ZFraction const& fraction1, ZFraction const& fraction2){
    return fraction1.getValue() < fraction2.getValue();
}
bool operator!=(ZFraction const& fraction1, ZFraction const& fraction2)
{
    return !(fraction1==fraction2);
}

ZFraction operator+(ZFraction const& fraction1, ZFraction const& fraction2)
{
    return fraction1.add(fraction2);
}
ZFraction operator-(ZFraction const& fraction1, ZFraction const& fraction2);
ZFraction operator<(ZFraction const& fraction1, ZFraction const& fraction2);
