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
    cout << "perso2 apres attaque: " << perso2.afficher() << endl;
    Arme epee("epee chocolat", 5);
    cout << epee.afficher() << endl;
    epee.changer("epee mayonaise", 50);
    cout << epee.afficher() << endl;
    perso2.changerArme(epee);
    cout << "perso 2 avec nouvelle arme: " << perso2.afficher() << endl;
    perso2.attaquer(perso1);
    cout << "perso1 apres contre attaque: " << perso1.afficher() << endl;
    return 0;
}
