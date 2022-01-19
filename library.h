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
    void addLivre(std::string titre, std::string nom, std::string prenom, int id, std::string langue, std::string isbn);
    void afficherLivres();
    bool livreEstPresent(Livre const& x);
    std::vector<Livre> getLivres();
    void addLecteur();
    void addLecteur(std::string nom, std::string prenom, int idLecteur);
    bool lecteurEstPresent(Lecteur const& x);
    void afficherLecteurs();
    void addAuteur();
    void addAuteur(std::string nom, std::string prenom, int id);
    bool auteurEstPresent(Auteur const& x);
    void afficherAuteur();
    void emprunterLivre();
    void rendreLivre();

protected:
    std::vector<Livre> m_livres;
    std::vector<Lecteur> m_lecteurs;
    std::vector<Auteur> m_auteurs;
    std::vector<Emprunt> m_emprunts;
    std::vector<std::string> m_isbns;

};



#endif // LIBRARY_H_INCLUDED
