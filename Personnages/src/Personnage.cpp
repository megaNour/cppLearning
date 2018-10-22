#include "Personnage.h"

//Personnage::Personnage()
//{
//    //ctor
//}
//
//Personnage::~Personnage()
//{
//    //dtor
//}
Personnage::Personnage() : vie(100), mana(100) {}
Personnage::Personnage(std::string nomArme, int degatsArme) : vie(100), mana(100), arme(nomArme, degatsArme) {}

void Personnage::recevoirDegats(int degats)
{
    vie = (vie + degats < 0 ) ? 0 : (vie - degats);
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(arme.getDegats());
}

void Personnage::boirePotion(int quantitePotion)
{
    vie = (vie + quantitePotion > 100 ) ? 100 : (vie + quantitePotion);
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
    arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

void Personnage::changerArme(Arme arme)
{
    this->arme = arme;
}

bool Personnage::estVivant() const
{
    return vie > 0;
}

std::string Personnage::afficher() const
{
    return "vie: " + std::to_string(vie) + " mana: " + std::to_string(mana) + " " + arme.afficher();
}
