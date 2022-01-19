#include "library.h"
#include "emprunt.h"
using namespace std;

/*vector<Livre> Library::getLivres()
{
    return m_livres;
}
*/
void Library::afficherLivres()
{
    //cout << m_livres.size()<< endl;
    for (int i=0; i< m_livres.size(); i++)
    {
        m_livres[i].afficherTitre();
    }
}



void Library::addLivre()
{
    string titre;
    string nom;
    string prenom;
    int id;
    string idd;
    string langue;
    string isbn;


    /*cout << "Saisir le titre du livre" << endl;
    getline(cin,titre);

    cout << "Saisir le nom de l'auteur" << endl;
    getline(cin,nom);

    cout << "Saisir le prenom de l'auteur" << endl;
    getline(cin,prenom);

    cout << "Saisir l'id de l'auteur" << endl;
    getline(cin,idd);
    id = stoi(idd);

    cout << "Saisir la langue du livre" << endl;
    getline(cin,langue);

    cout << "Saisir l'isbn du livre" << endl;
    getline(cin,isbn);


    Livre a(titre,nom,prenom,id,langue,isbn);
    Emprunt e(isbn);
    */
    Livre a("James M'bong","M'bong","Nicolas",001,"Francais","007");
    //vector<Livre> livres=getLivres();
    livreEstPresent(a);
}

void Library::addLivre(string titre, string nom, string prenom, int id, string langue, string isbn)
{
    Livre a(titre, nom,prenom,id,langue,isbn);
    m_livres.push_back(a);
}

bool Library::livreEstPresent(Livre const& x)
{
    for(int i=0 ; i < m_livres.size() ; i++)
    {
        if (m_livres[i]==x)
        {
            cout << "Le livre est deja present dans la bibliotheque" << endl;
            cout << endl;
            return true;
        }
    }
            m_livres.push_back(x);
            cout << "Le livre a bien ete ajoute a la bibliotheque" << endl;
            cout << endl;
            return false;


}







void Library::addLecteur()
{
    string nom;
    string prenom;
    int idLecteur;

/*
    cout << "Saisir le nom du lecteur" << endl;
    getline(cin,nom);

    cout << "Saisir le prenom du lecteur" << endl;
    getline(cin,prenom);

    cout << "Saisir l'id du lecteur" << endl;
    cin >> idLecteur;

    Lecteur personne(string nom,string prenom,int idLecteur);
    */Lecteur personne("EL SAYED","Raif",1);
    lecteurEstPresent(personne);

}

void Library::addLecteur(string nom, string prenom, int idLecteur)
{
    Lecteur personne(nom,prenom,idLecteur);
    m_lecteurs.push_back(personne);

}


bool Library::lecteurEstPresent(Lecteur const& x)
{
    for(int i=0 ; i < m_lecteurs.size() ; i++)
    {
        if (m_lecteurs[i]==x)
        {
            cout << "Cette personne est deja enregistre" << endl;
            cout << endl;
            return true;
        }
    }
            m_lecteurs.push_back(x);
            cout << "Le nouveau lecteur a bien ete enregistre" << endl;
            cout << endl;
            return false;
}



void Library::afficherLecteurs()
{
    for(int i=0;i<m_lecteurs.size();i++)
    {
        cout<<m_lecteurs[i] << " ";
    }
    cout << endl;
}

void Library::addAuteur()
{
    string nom;
    string prenom;
    int id;

/*
    cout << "Saisir le nom de l'auteur" << endl;
    getline(cin,nom);

    cout << "Saisir le prenom de l'auteur" << endl;
    getline(cin,prenom);

    cout << "Saisir l'id de l'auteur" << endl;
    cin >> id;

    Auteur auteur(string nom,string prenom,int id);
    */Auteur auteur("M'BONG","Nicolas",001);
    auteurEstPresent(auteur);

}

void Library::addAuteur(string nom, string prenom, int id)
{
    Auteur auteur(nom,prenom,id);
    m_auteurs.push_back(auteur);
}


bool Library::auteurEstPresent(Auteur const& x)
{
    for(int i=0 ; i < m_auteurs.size() ; i++)
    {
        if (m_auteurs[i]==x)
        {
            cout << "Cette auteur est deja enregistre" << endl;
            cout << endl;
            return true;
        }
    }
            m_auteurs.push_back(x);
            cout << "Le nouvelle auteur a bien ete enregistre" << endl;
            cout << endl;
            return false;
}



void Library::afficherAuteur()
{
    for(int i=0;i<m_auteurs.size();i++)
    {
        cout<<m_auteurs[i] << " ";
    }
    cout << endl;
}


void Library::emprunterLivre()
{
    string Livre;
    string Lecteur;
    int idLivre;
    int idLecteur;
    cout << "Saisir l'id du livre a emprunter" << endl;
    getline(cin, Livre);
    idLivre= stoi(Livre);
    cout << "Saisir l'id du lecteur qui emprunte" << endl;
    getline(cin, Lecteur);
    idLecteur= stoi(Lecteur);
    cout << "ui";

    /*if(m_livres[idLivre].estEmprunter()) //marche pas
    {
        cout << "Le livre est déja emprunte par quelqu'un d'autre" << endl;
    }
    else
    {*/
        //m_livres[idLivre].emprunter(idLecteur); //marche pas non plus
        cout << "Le livre " <</* m_livres[idLivre].afficherLivre() */ "a bien été emprunter par ";//<< m_lecteurs[idLecteur] << endl;
    //}
}


void Library::rendreLivre()
{
   /* int idLivre;
    int idLecteur;
    cout << "Saisir l'id du livre a restituer" << endl;
    cin >> idLivre;
    cout << "Saisir l'id du lecteur qui restitue le livre" << endl;
    cin >> idLecteur;
    if(m_livres[idLivre].getLecteur==idLecteur)
    {
        cout << "Le livre" << m_livres[idLivres].afficherLivre() << "emprunter par " << m_lecteurs[idLecteur] << " a bien ete restitue"() << endl;
    }
    else
    {
        cout << "Vous n'etes pas la personne qui a emprunter le livre" << endl;
    }*/
}



