#ifndef EMPRUNT_H_INCLUDED
#define EMPRUNT_H_INCLUDED

#include <iostream>
#include <string>
#include "lecteur.h"

class Emprunt
{
public:
    Emprunt(std::string isbn);
    bool getStatus();
    void emprunter(int idLecteur);
    friend std::ostream& operator<<(std::ostream& os,Emprunt const& E);

protected:
    std::string m_isbn;
    int m_idLecteur;
    bool m_status;
};


#endif // EMPRUNT_H_INCLUDED
