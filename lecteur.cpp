#include "lecteur.h"
using namespace std;


void Lecteur::addIsbn(string a)
{
    m_isbnsLecteur.push_back(a);
}

Lecteur::Lecteur(string nom,string prenom,int idLecteur):m_nom(nom),m_prenom(prenom),m_idLecteur(idLecteur)
{

}


void Lecteur::afficherIsbns()
{
    for (int i=0; i<m_isbnsLecteur.size()  ;i++)
    {
        cout << m_isbnsLecteur[i] <<endl;
    }
}
