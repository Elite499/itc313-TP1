#include "emprunt.h"
using namespace std;


Emprunt::Emprunt(string isbn):m_isbn(isbn),m_status(false)
{

}




bool Emprunt::emprunterLivre(string isbn)
{
    if (m_status)
    {
        return false;
    }
    else
    {
        return true;
    }
}

