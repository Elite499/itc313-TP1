#include "lecteur.h"
using namespace std;


void Lecteur::addIsbn(string a)
{
    m_isbns.push_back(a);
}

Lecteur::Lecteur(string nom,string prenom,int idLecteur):m_nom(nom),m_prenom(prenom),m_idLecteur(idLecteur)
{

}


void Lecteur::afficherIsbns()
{
    for (int i=0; i<m_isbns.size()  ;i++)
    {
        cout << m_isbns[i] <<endl;
    }
}
