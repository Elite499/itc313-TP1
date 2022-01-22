#include "auteur.h"
#include <iostream>
using namespace std;


Auteur::Auteur()
{

}


Auteur::Auteur(string nom, string prenom, int id):m_nom(nom),m_prenom(prenom), m_id(id)
{

}


void Auteur::afficherAuteur()
{
    cout << m_prenom << " " << m_nom;
}


string Auteur::getNom()
{
    return m_nom;
}


string Auteur::getPrenom()
{
    return m_prenom;
}


ostream& operator<<(ostream& os, Auteur const& A)
{
    os << A.m_nom << " " << A.m_prenom << " " << A.m_id;
    return os;
}


bool operator==(Auteur const& a, Auteur const& b)
{
    if (a.m_nom==b.m_nom && a.m_prenom==b.m_prenom) //&& a.m_id==b.m_id)
    {
        return true;
    }
    return false;
}
