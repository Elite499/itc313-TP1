#include "library.h"

using namespace std;

/*Library::Library()
{

}
*/
void Library::addLivre()
{
    string titre;
    //string objet;
    string nom;
    string prenom;
    int id;
    string langue;
    string isbn;

    cout << "Saisir le titre du livre" << endl;
    getline(cin,titre);
    //objet=titre;

    cout << "Saisir le nom de l'auteur" << endl;
    getline(cin,nom);

    cout << "Saisir le prenom de l'auteur" << endl;
    getline(cin,prenom);

    cout << "Saisir l'id de l'auteur" << endl;
    cin >> id;

    cout << "Saisir la langue du livre" << endl;
    cin >> langue;

    cout << "Saisir l'isbn du livre" << endl;
    cin >> isbn;

/*    if (biblio.estPresent(isbn))
    {
        Emprunt ui(isbn);
        Livre book(titre,nom,prenom,id,langue,isbn);   //Modifier book pour avoir un nom d'objet différent a chaque fois(l'objet ne dois pas avoir le
        book.afficherLivre();                          //même nom qu'un paramètre
    }
    else
        cout << "L'isbn saisit correspond déja à un livre présent dans la bibliotheque" << endl;
*/
        Emprunt ui(isbn);
        Livre book(titre,nom,prenom,id,langue,isbn);   //Modifier book pour avoir un nom d'objet différent a chaque fois(l'objet ne dois pas avoir le
        book.afficherLivre();                          //même nom qu'un paramètre
}


bool Library::estPresent(string isbn)
{
    for(int i=0 ; i < m_isbns.size() ; i++)
    {
        return (m_isbns[i]==isbn);
    }
}


void Library::addLecteur()
{
    string nom;
    string prenom;
    int idLecteur;

    cout << "Saisir le nom du lecteur" << endl;
    getline(cin,nom);

    cout << "Saisir le prenom du lecteur" << endl;
    getline(cin,prenom);

    cout << "Saisir l'id du lecteur" << endl;
    cin >> idLecteur;

    Lecteur personne(string nom,string prenom,int idLecteur);
}


/*void Library::emprunterLivre()
{

}
*/
