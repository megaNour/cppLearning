#ifndef ARME_H
#define ARME_H
#include <string>

class Arme
{
    public:
        virtual ~Arme();
        Arme();
        Arme(Arme const& other);
        Arme(std::string nom, int degats);
        void changer(std::string nom, int degats);
        std::string afficher() const;
        std::string getNom() const;
        int getDegats() const;

    private:
        std::string nom;
        int degats;
};

#endif // ARME_H
