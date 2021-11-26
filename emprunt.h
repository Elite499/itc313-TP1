#ifndef EMPRUNT_H_INCLUDED
#define EMPRUNT_H_INCLUDED

#include <iostream>
#include <string>
#include "lecteur.h"

class Emprunt
{
public:
    Emprunt(std::string isbn);
    bool emprunterLivre(std::string isbn);

protected:
    std::string m_isbn;
    int m_id;
    bool m_status;
};


#endif // EMPRUNT_H_INCLUDED
