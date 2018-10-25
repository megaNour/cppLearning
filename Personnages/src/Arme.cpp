#include <string>
#include "Arme.h"

Arme::Arme(): nom("Epee rouillee"), degats(10)
{
    //ctor
}

Arme::Arme(Arme const& other): nom(other.nom), degats(other.degats)
{
    //ctor
}

Arme::Arme(std::string nom, int degats): nom(nom), degats(degats)
{
    //ctor
}

Arme::~Arme()
{
    //dtor
}

void Arme::changer(std::string nom, int degats) {
    this->nom = nom;
    this->degats = degats;
}

std::string Arme::afficher() const
{
    return nom + ": " + std::to_string(degats);
}

int Arme::getDegats() const
{
    return degats;
}

std::string Arme::getNom() const
{
    return nom;
}
