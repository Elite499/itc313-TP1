#ifndef LECTEUR_H_INCLUDED
#define LECTEUR_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>


class Lecteur
{
public:
    Lecteur()=default;
    Lecteur(std::string nom,std::string prenom,int idLecteur);
    void addIsbn(std::string a);
    void afficherIsbns();

protected:
    int m_idLecteur;
    std::string m_nom;
    std::string m_prenom;
    std::vector<std::string> m_isbns;
};

#endif // LECTEUR_H_INCLUDED
