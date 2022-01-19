#include "emprunt.h"
using namespace std;


Emprunt::Emprunt(string isbn):m_isbn(isbn),m_status(false)
{

}




bool Emprunt::getStatus()
{
    return m_status;
}


int Emprunt::getIdLecteur()
{
    return m_idLecteur;
}


void Emprunt::emprunter(int idLecteur)
{
    m_status=true;
    m_idLecteur=idLecteur;
}


ostream& operator<<(ostream& os, Emprunt const& E)
{
    if(E.m_status==false)
    {
        os << "Le livre n'a pas ete emprunter";
    }
    else
    {
        os << "Emprunter par " << E.m_idLecteur;
    }
 return os;
}
