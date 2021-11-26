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

protected:
    std::string m_nom;
    std::string m_prenom;
    int m_id;

};

#endif // AUTEUR_H_INCLUDED
