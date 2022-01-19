#include "emprunt.h"
using namespace std;


Emprunt::Emprunt(string isbn):m_isbn(isbn),m_status(false)
{

}




bool Emprunt::getStatus()
{
    return m_status;
}

void Emprunt::emprunter(int idLecteur)
{
    m_status=true;
    m_idLecteur=idLecteur;
}

ostream& operator<<(ostream& os, Emprunt const& E)
{
 os << "WIP";
 return os;
}
