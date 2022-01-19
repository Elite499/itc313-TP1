#include "livre.h"
#include "emprunt.h"
#include <iostream>
using namespace std;

Livre::Livre(string titre, string nom, string prenom,int id, string langue, string isbn):
 m_titre(titre), m_langue(langue), m_auteur(nom,prenom,id),m_isbn(isbn),m_emprunt(isbn)
{

}

Livre::Livre()
{

}


void Livre::afficherLivre()
{
    cout << m_titre << " ecrit par " ;
    m_auteur.afficherAuteur();
    cout << endl << "Langue:" << m_langue <<endl << "ISBN:" << m_isbn << endl;
}

void Livre::afficherTitre()
{
    cout << m_titre << endl;
    cout << endl;
}

bool Livre::estEgal(Livre const& b)const
{
    return (m_titre==b.m_titre /*&& m_auteur==b.m_auteur*/ && m_langue==b.m_langue && m_isbn==b.m_isbn);
}

bool operator==(Livre const& a, Livre const& b)
{
    return a.estEgal(b);
}

bool Livre::estEmprunter()
{
    return m_emprunt.getStatus();
}


void Livre::emprunter(int idLecteur)
{
    m_emprunt.emprunter(idLecteur);
}
