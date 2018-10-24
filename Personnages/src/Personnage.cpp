#include "Personnage.h"

//Personnage::Personnage()
//{
//    //ctor
//}
//
Personnage::~Personnage()
{
    delete arme;
}
Personnage::Personnage() : vie(100), mana(100)
{
    arme = new Arme("batonet", 10);
}
Personnage::Personnage(std::string nomArme, int degatsArme) : vie(100), mana(100)
{
    arme = new Arme(nomArme, degatsArme);
}
Personnage::Personnage(Personnage const& original) : vie(original.vie), mana(original.mana)
{
    arme = new Arme(*(original.arme));
}


void Personnage::recevoirDegats(int degats)
{
    vie = (vie + degats < 0 ) ? 0 : (vie - degats);
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(arme->getDegats());
}

void Personnage::boirePotion(int quantitePotion)
{
    vie = (vie + quantitePotion > 100 ) ? 100 : (vie + quantitePotion);
}

void Personnage::changerArme(Arme &autre)
{
    this->arme = new Arme(autre);
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
    arme->changer(nomNouvelleArme, degatsNouvelleArme);
}

void Personnage::changerArme(Arme *arme)
{
    this->arme = new Arme(*arme);
}

bool Personnage::estVivant() const
{
    return vie > 0;
}

std::string Personnage::afficher() const
{
    return "vie: " + std::to_string(vie) + " mana: " + std::to_string(mana) + " " + arme->afficher();
}
