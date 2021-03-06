#include "livre.h"
#include "emprunt.h"
#include <iostream>
using namespace std;

Livre::Livre(string titre, string nom, string prenom,int id, string langue, string isbn):
 m_titre(titre), m_langue(langue), m_auteur(nom,prenom,id),m_isbn(isbn),m_emprunt(isbn)
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
    cout << m_titre << " ";
    cout << endl;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


bool Livre::estEmprunter()
{
    return m_emprunt.getStatus();
}


int Livre::getLecteur()
{
    return m_emprunt.getIdLecteur();
}


string Livre::getNomAuteur()
{
    return m_auteur.getNom();
}


string Livre::getPrenomAuteur()
{
    return m_auteur.getPrenom();
}


void Livre::emprunter(int idLecteur)
{
    m_emprunt.emprunter(idLecteur);
}


void Livre::rendreLivre()
{
    m_emprunt.rendre();
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


ostream& operator<<(ostream& os, Livre const& L)
{
    os << "Titre:" << L.m_titre << endl << "Auteur:" << L.m_auteur <<endl << "Langue:" << L.m_langue << endl <<"Genre:" << L.m_genre << endl << "Isbn:" << L.m_isbn
     << endl; //<< "emprunt:"
     return os;
}


bool Livre::estEgal(Livre const& b)const
{
    return (m_titre==b.m_titre && m_auteur==b.m_auteur && m_langue==b.m_langue && m_isbn==b.m_isbn);
}


bool operator==(Livre const& a, Livre const& b)
{
    return a.estEgal(b);
}

