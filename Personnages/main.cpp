#include <iostream>
#include "Personnage.h"
#include "Arme.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Personnage perso1, perso2;
    cout << "perso1: " << perso1.afficher() << endl;
    cout << "perso2: " << perso2.afficher() << endl;
    perso1.attaquer(perso2);
    Personnage perso3(perso1);
    cout << "perso3: " << perso3.afficher() <<  endl;
    Arme epee("epee concombre", 5);
    perso1.changerArme(epee);
    perso2.changerArme(epee);
    perso3.changerArme(epee);
    epee.changer("epee mayonaise", 50);
    perso2.changerArme(&epee);
    epee.changer("epee chocolat", 80);
    perso3.changerArme(epee);
    cout << "perso1: " << perso1.afficher() <<  endl;
    cout << "perso2: " << perso2.afficher() <<  endl;
    cout << "perso3: " << perso3.afficher() <<  endl;
    return 0;
}
