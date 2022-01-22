#include <iostream>
#include "livre.h"
#include "auteur.h"
#include "lecteur.h"
#include "emprunt.h"
#include "library.h"
#include "date.h"
using namespace std;

int main()
{
    Library biblio;
    biblio.addLivre("Comment traumatiser votre enfant 7 methode infaillibles pour en faire un etre inadapte mais genial","BILIK","Jen",001,"Francais","001");
    biblio.addLivre("Faut pas prendre les cons pour des gens","REUZE","Emmanuel",002,"Francais","002");
    biblio.addLivre("Les miserables","HUGO","Victor",003,"Francais","003");
    biblio.addLivre("Le dernier jouer du condamne","HUGO","Victor",003,"Francais","004");
    biblio.addLivre("Les contemplations","HUGO","Victor",003,"Francais","005");
    biblio.addLivre("Les travailleurs de la mer","HUGO","Victor",003,"Francais","006");
    biblio.addLivre("James Bond","FLEMING","Ian",005,"Francais","007");
    biblio.addLivre("Le gai savoir","NIETZSHE","Friedrich",004,"Francais","008");


    biblio.addLecteur("EL SAYED","Raif",1);
    biblio.addLecteur("M'BONG","Nicolas",2);
    biblio.addLecteur("SGUIAR","Ahmed",3);

    biblio.addAuteur("BILIK","Jen",001);
    biblio.addAuteur("REUZE","Emmanuel",002);
    biblio.addAuteur("HUGO","Victor",003);
    biblio.addAuteur("NIETZSHE","Friedrich",004);
    biblio.addAuteur("FLEMING","Ian",005);


    string x;
    int y;

    do
    {
        cout << "Bienvenue dans le menu principal" << endl;
        cout << endl;
        cout << "Choisissez une action: " << endl;
        cout << "1: Ajouter un element     2: Emprunter un livre" << endl;
        cout << "3: Rendre un livre        4: Parcourir la biblio" << endl;
        cout << "5: Quitter la biblio" << endl;
        getline(cin,x);

        y=stoi(x);
        {
            int k;
        }
        switch(y)
        {
        case 1:
            {
            cout << "Choisissez une action: " << endl;
            cout << "1: Ajouter un livre         2: Ajouter un lecteur" << endl;
            cout << "3: Ajouter un auteur        4: Retour au menu principal" << endl;
            getline(cin,x);
            int z=stoi(x);
            switch(z)
            {
            case 1:
                biblio.addLivre();
                break;
            case 2:
                biblio.addLecteur();
                break;
            case 3:
                biblio.addAuteur();
                break;
            case 4:
                break;
            }
            break;
            }
        case 2:
            biblio.emprunterLivre();
            break;
        case 3:
            biblio.rendreLivre();
            break;
        case 4:
            {
            cout << "Choisissez une action: " << endl;
            cout << "1: Consulter la liste des livres         2: Consulter la liste des lecteurs" << endl;
            cout << "3: Consulter la liste des auteurs        4: Retour au menu principal" << endl;
            cout << "5: tkt" << endl;
            getline(cin,x);
            int z=stoi(x);
            switch(z)
            {
            case 1:
                biblio.afficherLivres();
                break;
            case 2:
                biblio.afficherLecteurs();
                break;
            case 3:
                biblio.afficherAuteur();
                break;
            case 4:
                break;
            case 5:
                biblio.afficherLivresAuteur();
                break;
            }
            break;
            }
        case 5:
            cout << "Merci de votre visite" << endl;
            y=-1;
            break;

        }








    }
    while(y!=-1);

}

