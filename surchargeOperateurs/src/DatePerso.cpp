#include "DatePerso.h"

DatePerso::DatePerso(int annee, int mois, int jour): annee(annee), mois(mois), jour(jour)
{
    //ctor
}

DatePerso::~DatePerso()
{
    //dtor
}

void DatePerso::toString(std::ostream &out) const
{
    out << std::to_string(annee) << "/" << std::to_string(mois) << "/" << std::to_string(jour);
}

std::ostream& operator<<(std::ostream &out, DatePerso const& date) {
    date.toString(out);
    return out;
}
