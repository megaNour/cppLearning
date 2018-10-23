#include <iostream>
#include "Duree.h"

Duree::Duree(int heures, int minutes, int secondes): heures(heures), minutes(minutes), secondes(secondes)
{
    //ctor
}

Duree::~Duree()
{
    //dtor
}

void Duree::toString(std::ostream &out) const
{
    out << std::to_string(heures) + ":" + std::to_string(minutes) + ":" + std::to_string(secondes);
}


std::ostream& operator<<(std::ostream &out, Duree const& duree)
{
    duree.toString(out);
    return out;
}
