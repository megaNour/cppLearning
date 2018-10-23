#ifndef DATEPERSO_H
#define DATEPERSO_H
#include <iostream>

class DatePerso
{
    public:
        DatePerso(int annee, int mois, int jour);
        virtual ~DatePerso();
        void toString(std::ostream &out) const;
    protected:

    private:
        int annee, mois, jour;
};

std::ostream& operator<<(std::ostream &out, DatePerso const& date);

#endif // DATEPERSO_H
