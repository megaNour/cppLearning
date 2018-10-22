#include <string>
#include "Arme.h"

using namespace std;

Arme::Arme(): nom("Epee rouillee"), degats(10)
{
    //ctor
}

Arme::Arme(string nom, int degats): nom(nom), degats(degats)
{
    //ctor
}

Arme::~Arme()
{
    //dtor
}

void Arme::changer(string nom, int degats) {
    this->nom = nom;
    this->degats = degats;
}

string Arme::afficher() const
{
    return nom + ": " + to_string(degats);
}

int Arme::getDegats() const
{
    return degats;
}

std::string Arme::getNom() const
{
    return nom;
}
