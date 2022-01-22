#include "lecteur.h"
using namespace std;


Lecteur::Lecteur(string nom,string prenom,int idLecteur):m_nom(nom),m_prenom(prenom),m_idLecteur(idLecteur)
{

}


void Lecteur::addIdLivre(int a)
{
    m_idLivres.push_back(a);
}


/*void Lecteur::removeLivre(int a)
{

}
*/

vector<int> Lecteur::afficherIdLivres()
{
        return m_idLivres;

}


bool operator==(Lecteur const& a, Lecteur const& b)
{
    if(a.m_nom==b.m_nom && a.m_prenom== b.m_prenom && a.m_idLecteur== b.m_idLecteur)
    {
        return true;
    }
    return false;
}


ostream& operator<<(ostream& os, Lecteur const& L)
{
    os << L.m_nom << " " << L.m_prenom << " " << "id:" << L.m_idLecteur;
    return os;
}
