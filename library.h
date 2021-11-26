#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED


#include <vector>
#include <string>
#include "livre.h"
#include "lecteur.h"
#include "auteur.h"
#include "emprunt.h"


class Library
{
public:
    Library()=default;
    void addLivre();
    void addLecteur();
    bool estPresent(std::string isbn);
protected:
    std::vector<Livre> m_livres;
    std::vector<Lecteur> m_lecteurs;
    std::vector<Auteur> m_auteurs;
    std::vector<Emprunt> m_emprunts;
    std::vector<std::string> m_isbns;

};


#endif // LIBRARY_H_INCLUDED
