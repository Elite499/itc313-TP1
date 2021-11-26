#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED

#include <iostream>
#include <string>
#include "auteur.h"


class Livre
{
public:
    Livre(std::string titre, std::string nom, std::string prenom,int id, std::string langue, std::string isbn);
    Livre();
    void afficherLivre();

protected:
    std::string m_titre;
    Auteur m_auteur;
    std::string m_langue;
    std::string m_genre;
    std::string m_date;
    std::string m_isbn;
};


















#endif // LIVRE_H_INCLUDED
