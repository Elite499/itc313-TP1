#include "emprunt.h"
using namespace std;


Emprunt::Emprunt(string isbn):m_isbn(isbn),m_status(false)
{

}




void Emprunt::emprunterLivre(string isbn,Lecteur lecteur)
{
    if (m_status)
    {
        cout << "Le livre est deja emprunte" << endl;
    }
    else
    {
        lecteur.addIsbn(isbn);
    }
}

