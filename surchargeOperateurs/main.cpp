#include <iostream>
#include "Duree.h"
#include "DatePerso.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Duree duree(0,10,28), duree2(0,15,2);
    DatePerso date(2018,10,23);
    cout << "duree1: " << duree << " duree2: " << duree2 << " " << date << endl;
    return 0;
}
