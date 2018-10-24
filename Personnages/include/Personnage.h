#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include "Arme.h"

class Personnage
{
public:
    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    virtual ~Personnage();
    Personnage(Personnage const& original);
    void recevoirDegats(int degats);
    void attaquer(Personnage &cible);
    void boirePotion(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    void changerArme(Arme *arme);
    void changerArme(Arme &arme);
    bool estVivant() const;
    std::string afficher() const;
private:
    int vie;
    int mana;
    Arme *arme;
};

#endif // PERSONNAGE_H
