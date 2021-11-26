#ifndef EMPRUNT_H_INCLUDED
#define EMPRUNT_H_INCLUDED

#include <iostream>
#include <string>
#include "lecteur.h"

class Emprunt
{
public:
    Emprunt(std::string isbn);
    void emprunterLivre(std::string isbn,Lecteur lecteur);

protected:
    std::string m_isbn;
    int m_id;
    bool m_status;
};


#endif // EMPRUNT_H_INCLUDED
