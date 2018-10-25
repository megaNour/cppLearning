#include <iostream>
#include "Personnage.h"
#include "Arme.h"
#include "SandBoxObject.h"
#include <typeinfo>

using namespace std;

int main()
{
    int nb(5);
    int& rNb(nb);
    Arme pizza;
//    Arme pizzaStrike("pizza stroke from the air", 90);
    Arme& pizzaStrike(pizza);
    SandBoxObject pistolet;
    cout << "adresse org: "<< &pizza << endl;
    cout << "adresse ref: " << &pizzaStrike << endl;
    Arme *ptrPizza(&pizza);
    cout << "adresse ptr: " << ptrPizza << endl;
    cout << "adresse ptr: " << &ptrPizza << endl;
    cout << "type pté: " << typeid(*ptrPizza) .name() << endl;
//    SandBoxObject* ptr = new SandBoxObject();
//    cout << &ptr << endl;
//    cout << *&ptr << endl;
//    cout << ptr << endl;
//    SandBoxObject& refToPtr(pistolet);
//    cout << &refToPtr << endl;

//    delete ptr;

//    SandBoxObject rPistolet(pistolet);
//    Arme *pPistolet(0);
//    pPistolet = rPistolet;
//    cout << pPistolet << " ==" << &pistolet << endl;
//    cout << *pPistolet << " ==" << pistolet << endl;
//    cout << "Hello world!" << endl;
//    Personnage perso1, perso2;
//    cout << "perso1: " << perso1.afficher() << endl;
//    cout << "perso2: " << perso2.afficher() << endl;
//    perso1.attaquer(perso2);
//    Personnage perso3(perso1);
//    cout << "perso3: " << perso3.afficher() <<  endl;
//    Arme epee("epee concombre", 5);
//    perso1.changerArme(epee);
//    perso2.changerArme(epee);
//    perso3.changerArme(epee);
//    epee.changer("epee mayonaise", 50);
//    perso2.changerArme(&epee);
//    epee.changer("epee chocolat", 80);
//    perso3.changerArme(epee);
//    cout << "perso1: " << perso1.afficher() <<  endl;
//    cout << "perso2: " << perso2.afficher() <<  endl;
//    cout << "perso3: " << perso3.afficher() <<  endl;
    return 0;
}
