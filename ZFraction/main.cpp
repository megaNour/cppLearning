#include <iostream>
#include "ZFraction.h"
using namespace std;

int main()
{
    ZFraction frac1(1,2), frac2(1,2);
    ZFraction frac3(frac1 + frac2);
    ZFraction frac4(frac1);
    frac4+=frac3;

    cout << frac1.getValue() << "\n"
    << to_string(frac2.getValue()) << "\n"
    << endl;
    if(frac1 == frac2)
    {
        cout << frac1 << " est egal a " << frac2 << " leur addition donne : " << frac3 << endl;
    }
    cout << frac1 << " + " << frac3 << " leur addition donne : " << frac4 << endl;
    cout << "Hello world!" << endl;
    return 0;
}
