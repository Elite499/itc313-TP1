#ifndef AUTEUR_H_INCLUDED
#define AUTEUR_H_INCLUDED

#include <string>
#include <iostream>


class Auteur
{
public:
    Auteur(std::string nom, std::string prenom, int id);
    Auteur();
    void afficherAuteur();
    friend std::ostream& operator<<(std::ostream& os, Auteur const& A);
    friend bool operator==(Auteur const& a, Auteur const& b);
protected:
    std::string m_nom;
    std::string m_prenom;
    int m_id;

};

#endif // AUTEUR_H_INCLUDED
