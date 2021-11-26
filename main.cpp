#include <iostream>
#include "livre.h"
#include "auteur.h"
#include "lecteur.h"
#include "emprunt.h"
using namespace std;

int main()
{
    Livre book("Le c++ pour les nuls","M'bong","Nicolas",1, "Francais","007");
    book.afficherLivre();
    Emprunt FDP("007");
    Lecteur Ahmed("Sguiar","Ahmed",001);
    FDP.emprunterLivre("007",Ahmed);
    Ahmed.afficherIsbns();
}
