#include <iostream>
#include "livre.h"
#include "auteur.h"
#include "lecteur.h"
#include "emprunt.h"
#include "library.h"
using namespace std;

int main()
{
    string x;
    int y;
    Library biblio;
    do
    {
        cout << "Bienvenue dans la bibliotheque!" << endl;
        cout << endl;
        cout << "Choisissez une action: " << endl;
        cout << "1: Ajouter un livre        2: Ajouter un lecteur" << endl;
        cout << "3: Still developing        4: Quitter la biblio" << endl;
        getline(cin,x);

        y=stoi(x);
        switch(y)
        {
        case 1:
            biblio.addLivre();
            break;
        case 2:
            biblio.addLecteur();
            break;
        case 3:
            cout << "Still developing" << endl;
            break;
        case 4:
            cout << "Merci de votre visite" << endl;
            y=-1;
            break;
        }

    }
    while(y!=-1);

}

