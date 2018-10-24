#include "ZFraction.h"
#include <iostream>

ZFraction::ZFraction(): num(0), den(0){}

ZFraction::ZFraction(int numerateur, int denominateur): num(numerateur), den(denominateur){}

ZFraction::~ZFraction()
{
    //dtor
}

double ZFraction::getValue() const
{
    return (double)num/den;
}

void ZFraction::operator+=(ZFraction const& other)
{
    num = num * other.den;
    num+= other.num*den;
    den*=other.den;
    simplify();
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
        std::cout << "a: " << std::to_string(a) << "b: " << std::to_string(b) << "t: " << std::to_string(t) << std::endl;
    }
    num/=a;
    den/=a;
    std::cout << "num: " << std::to_string(num) << "den: " << std::to_string(den) << std::endl;
    std::cout << toString() << std::endl;

}


ZFraction& ZFraction::add(ZFraction const& fraction2) const
{
    int num = (this->num*fraction2.den) + (fraction2.num*this->den);
    int den = (this->den*fraction2.den);
    ZFraction resultat(num, den);
    resultat.simplify();
    std::cout << "coucou3 " << resultat.toString() << std::endl;
    ZFraction& result(resultat);
    return result;
}

ZFraction& ZFraction::substract(ZFraction const& fraction2) const
{
    int num = (this->num*fraction2.den) - (fraction2.num*this->den);
    int den = (this->den*fraction2.den);
    ZFraction resultat(num, den);
    resultat.simplify();
    return resultat;
}

bool operator==(ZFraction const& fraction1, ZFraction const& fraction2){
    return fraction1.getValue() == fraction2.getValue();
}

bool operator!=(ZFraction const& fraction1, ZFraction const& fraction2)
{
    return !(fraction1==fraction2);
}

ZFraction& operator+(ZFraction const& fraction1, ZFraction const& fraction2)
{
    std::cout << "coucou2" << std::endl;
    ZFraction resultat = fraction1.add(fraction2);
    ZFraction &result(resultat);
    std::cout << "coucou4 " << resultat.toString() << " " << resultat.getValue() << std::endl;
    std::cout << "coucou4 " << resultat.toString() << " " << resultat.getValue() << std::endl;
    std::cout << "coucou4 " << resultat.toString() << " " << resultat.getValue() << std::endl;
    return result;

}
ZFraction& operator-(ZFraction const& fraction1, ZFraction const& fraction2)
{
    return fraction1.substract(fraction2);
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
