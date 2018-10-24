#ifndef ZFRACTION_H
#define ZFRACTION_H
#include <iostream>

class ZFraction
{
    public:
        ZFraction();
        ZFraction(int numerateur, int denominateur = 1);
        virtual ~ZFraction();
        bool equals(ZFraction const& other) const;
        bool isSmaller(ZFraction const& other) const;
        ZFraction add(ZFraction const& other) const;
        ZFraction substract(ZFraction const& other) const;
        double getValue() const;
        void simplify();
        std::string toString() const;
        ZFraction& operator+=(ZFraction const& other);

    protected:

    private:
        int num;
        int den;
};

#endif // ZFRACTION_H

std::ostream& operator<<(std::ostream& out, ZFraction const& fraction);
bool operator==(ZFraction const& fraction1, ZFraction const& fraction2);
bool operator!=(ZFraction const& fraction1, ZFraction const& fraction2);
ZFraction operator+(ZFraction const& fraction1, ZFraction const& fraction2);
ZFraction operator-(ZFraction const& fraction1, ZFraction const& fraction2);
ZFraction operator<(ZFraction const& fraction1, ZFraction const& fraction2);
