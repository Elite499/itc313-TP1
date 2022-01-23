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
    void addIdLivre(int a);
    void removeLivre(int a);
    std::vector<int> afficherIdLivres();
    int getVectorSize();
    friend bool operator==(Lecteur const& a, Lecteur const& b);
    friend std::ostream& operator<<(std::ostream& os,  Lecteur const& L);

protected:
    std::string m_nom;
    std::string m_prenom;
    int m_idLecteur;
    std::vector<int> m_idLivres;
};


#endif // LECTEUR_H_INCLUDED
