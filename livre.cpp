#include "livre.h"
#include "emprunt.h"
#include <iostream>
using namespace std;

Livre::Livre(string titre, string nom, string prenom,int id, string langue, string isbn):
 m_titre(titre), m_langue(langue), m_auteur(nom,prenom,id),m_isbn(isbn)
{
    /*string x=titre;
    Emprunt x(isbn);*/
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