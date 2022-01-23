#include "library.h"
#include "emprunt.h"
using namespace std;


void Library::addLivre()
{
    string titre;
    string nom;
    string prenom;
    int id;
    string idd;
    string langue;
    string isbn;

    cout << "Saisir le titre du livre" << endl;
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
    //Livre a("James M'bong","M'bong","Nicolas",001,"Francais","007");
    livreEstPresent(a);
}

void Library::addLivre(string titre, string nom, string prenom, int id, string langue, string isbn)
{
    Livre a(titre,nom,prenom,id,langue,isbn);
    m_livres.push_back(a);
}


void Library::afficherLivres()
{
    //cout << m_livres.size()<< endl;
    for (int i=0; i< m_livres.size(); i++)
    {
        cout << i+1 << ": ";
        m_livres[i].afficherTitre();
    }
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




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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

    Lecteur personne(nom,prenom,idLecteur);
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


void Library::afficherLivresLecteur()
{
    string lecteur;
    int idLecteur;
    cout << "Saisir l'id du lecteur" << endl;
    getline(cin,lecteur);
    idLecteur=stoi(lecteur);
    vector<int> idLivres = m_lecteurs[idLecteur-1].afficherIdLivres();
    cout << "Les livres empruntes par " << m_lecteurs[idLecteur-1] << " sont:" << endl;
    for(int i=0;i< idLivres.size();i++)
    {
        cout << i+1 << ": ";
        m_livres[idLivres[i]-1].afficherTitre();
        cout << endl;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Library::addAuteur()
{
    string nom;
    string prenom;
    int id;

    cout << "Saisir le nom de l'auteur" << endl;
    getline(cin,nom);

    cout << "Saisir le prenom de l'auteur" << endl;
    getline(cin,prenom);

    cout << "Saisir l'id de l'auteur" << endl;
    cin >> id;

    Auteur auteur(nom,prenom,id);
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


void Library::afficherLivresAuteur()
{
    string nomAuteur;
    string prenomAuteur;
    cout << "Saisisez le nom de l'auteur ";
    getline(cin,nomAuteur);
    cout << "Saisisez le prenom de l'auteur ";
    getline(cin,prenomAuteur);
    cout << "L'auteur " << nomAuteur << prenomAuteur << " a ecrit:" << endl;
    for(int i=0;i<m_livres.size();i++)
    {
        if(m_livres[i].getNomAuteur()==nomAuteur && m_livres[i].getPrenomAuteur()==prenomAuteur)
        {
            cout << i+1 << ": "  ;
            m_livres[i].afficherTitre();
        }
    }
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Library::emprunt(int livre,int lecteur)
{
    m_livres[livre-1].emprunter(lecteur);
    m_lecteurs[lecteur-1].addIdLivre(livre);
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

    if(m_livres[idLivre-1].estEmprunter())
    {
        cout << "Le livre est déja emprunte par quelqu'un d'autre" << endl;
    }
    else
    {
        m_livres[idLivre-1].emprunter(idLecteur);
        m_lecteurs[idLecteur-1].addIdLivre(idLivre);
        cout << "Le livre ";
        m_livres[idLivre-1].afficherTitre();
        cout  << "a bien ete emprunter par " << m_lecteurs[idLecteur-1] << endl;
    }
}


void Library::rendreLivre()
{
    string Livre;
    string Lecteur;
    int idLivre;
    int idLecteur;
    cout << "Saisir l'id du livre a restituer" << endl;
    getline(cin,Livre);
    idLivre=stoi(Livre);
    cout << "Saisir l'id du lecteur qui restitue le livre" << endl;
    getline(cin,Lecteur);
    idLecteur=stoi(Lecteur);
    if(m_livres[idLivre-1].getLecteur()==idLecteur)
    {
        cout << "Le livre";
        m_livres[idLivre-1].afficherLivre();
        cout << "emprunter par " << m_lecteurs[idLecteur-1] << " a bien ete restitue" << endl;
        m_livres[idLivre-1].rendreLivre();
        m_lecteurs[idLecteur-1].removeLivre(idLivre);

    }
    else
    {
        cout << "Vous n'etes pas la personne qui a emprunter le livre" << endl;
    }
}


void Library::pourcentageEmprunt()
{
    int j;
    int k;
    cout << "Les livres empruntés sont: " << endl;
    for(int i=0;i<m_livres.size();i++)
    {
        if(m_livres[i].estEmprunter())
        {
            cout << i+1 << ": ";
            m_livres[i].afficherTitre();
            cout << endl;
            j+=1;
        }
    }
    cout << j << " livres sont empruntes, cela represente " << (j*100)/m_livres.size() << "% des livres" << endl;
}


void Library::classementLecteurs()
{
    int j1;
    int j2;
    int j3;
    int n1(0),n2(0),n3(0);
    for(int i=0;i<m_lecteurs.size();i++)
    {
        if(m_lecteurs[i].getVectorSize()>n1)
        {
            n1=m_lecteurs[i].getVectorSize();
            j1=i;
        }
    }
    vector<Lecteur> m_lecteursCopie=m_lecteurs;
    m_lecteursCopie.erase(m_lecteursCopie.begin()+j1);

    for(int i=0;i<m_lecteursCopie.size();i++)
    {
        if(m_lecteursCopie[i].getVectorSize()>n2)
        {
            n2=m_lecteursCopie[i].getVectorSize();
            j2=i;
        }
    }
    vector<Lecteur> m_lecteursCopie2=m_lecteursCopie;
    m_lecteursCopie2.erase(m_lecteursCopie2.begin()+j2);

    for(int i=0;i<m_lecteursCopie2.size();i++)
    {
        if(m_lecteursCopie2[i].getVectorSize()>n3)
        {
            n3=m_lecteursCopie2[i].getVectorSize();
            j3=i;
        }
    }
    cout << "****** Classement des lecteurs ******" << endl << endl;
    cout << "1ere place: " << m_lecteurs[j1] << "avec " << n1 << " livres empruntes" << endl;
    cout << "2eme place: " << m_lecteursCopie[j2] << "avec " << n2 << " livres empruntes" << endl;
    cout << "3eme place: " << m_lecteursCopie2[j3] << "avec " << n3 << " livres empruntes" << endl;
    cout << endl << "**********************************" << endl;
}
