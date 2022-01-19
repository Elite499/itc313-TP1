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
    friend bool operator==(Lecteur const& a, Lecteur const& b);
    friend std::ostream& operator<<(std::ostream& os,  Lecteur const& L);

protected:
    std::string m_nom;
    std::string m_prenom;
    int m_idLecteur;
    std::vector<std::string> m_isbnsLecteur;
};


#endif // LECTEUR_H_INCLUDED
