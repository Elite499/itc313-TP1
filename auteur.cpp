#include "auteur.h"
#include <iostream>
using namespace std;

Auteur::Auteur(string nom, string prenom, int id):m_nom(nom),m_prenom(prenom), m_id(id)
{

}

Auteur::Auteur()
{

}

void Auteur::afficherAuteur()
{
    cout << m_prenom << " " << m_nom;
}

/*int Auteur::getId()
{
    return m_id;
}
*/
