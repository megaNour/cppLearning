#ifndef DUREE_H
#define DUREE_H
#include <iostream>

class Duree
{
    public:
        Duree(int heures = 0, int minutes = 0, int secondes = 0);
        virtual ~Duree();
        void toString(std::ostream& out) const;

    protected:

    private:
        int heures;
        int minutes;
        int secondes;
};

std::ostream& operator<<(std::ostream& out, Duree const& duree);

#endif // DUREE_H
