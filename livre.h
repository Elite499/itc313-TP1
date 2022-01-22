#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED

#include <iostream>
#include <string>
#include "auteur.h"
#include "emprunt.h"


class Livre
{
public:
    Livre(std::string titre, std::string nom, std::string prenom,int id, std::string langue, std::string isbn);
    Livre()=default;
    void afficherLivre();
    void afficherTitre();

    bool estEmprunter();
    void emprunter(int idLecteur);
    void rendreLivre();
    int getLecteur();
    std::string getNomAuteur();
    std::string getPrenomAuteur();
    friend std::ostream& operator<<(std::ostream& os,Livre const& L);
    bool estEgal(Livre const& b) const;

protected:
    std::string m_titre;
    Auteur m_auteur;
    std::string m_langue;
    std::string m_genre;
    std::string m_date;
    std::string m_isbn;
    Emprunt m_emprunt;
};

bool operator==(Livre const& a, Livre const& b);
std::ostream& operator<<(std::ostream& os,Livre const& L);














#endif // LIVRE_H_INCLUDED
