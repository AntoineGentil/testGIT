#include "Personnel.h"
#include "pch.h"

//Requete SQL SELECT ALL
System::String^ NS_Mappage::Personnel::Select(void)
{
    return "SELECT * FROM Personnel P INNER JOIN Donnees_personnel D ON P.ID_Donnees_Personnel = D.ID_Donnees_Personnel ";
}

//requete INSERT PERSONNEL
System::String^ NS_Mappage::Personnel::Insert(void)
{
    return "INSERT INTO Personnel (Nom_Employe, Prenom_Employe, Date_Embauche_Employe, ID_Superieur,ID_Donnees_Personnel ) VALUES('" + this->getNom_Personnel() + "','" + this->getPrenom_Personnel() + "','" + this->getDate_embauche() + "','" + this->getId_Superieur() + "', (select ID_Donnees_Personnel from Donnees_personnel where Adrese_Personnel = '"+ this->getAdresse_Personnel() +"')) ";
}

//requete INSERT Adresse_Personnel
System::String^ NS_Mappage::Personnel::InsertAdressepersonnel(void)
{
    return "INSERT INTO Donnees_personnel (Adrese_Personnel, Code_Postal_personnel, Ville_Personnel) VALUES('" + this->getAdresse_Personnel() + "','" + this->getCode_Postal_personnel() + "','" + this->getVille_Personne()+ "')";
}

//Requete SQL DELETE
System::String^ NS_Mappage::Personnel::Delete(void)
{
    return "DELETE FROM Personnel WHERE Id_Personnel = '" + this->getId_Personnel() + "'";
}

//Requete SQL UPDATE
System::String^ NS_Mappage::Personnel::Update(void)
{
    return "UPDATE Personnel SET Nom_Employe = '" + this->getNom_Personnel() + "', Prenom_Employe = '" + this->getPrenom_Personnel() + "', Date_Embauche_Employe = '" + this->getDate_embauche() + "', ID_Superieur = '" + this->getId_Superieur() + "' WHERE (ID_Personnel = " + this->getId_Personnel() + ");";    
}

//REQUETE SQL UPDATE ADRESSE PERSONNEL
System::String^ NS_Mappage::Personnel::UpdateAdresse(void) {
    return "UPDATE  D SET Adrese_Personnel = '" + this->getAdresse_Personnel() + "',Code_Postal_personnel ='" + this->getCode_Postal_personnel() + "',Ville_Personnel ='" + this->getVille_Personne()+"' from Donnees_personnel D Inner join Personnel P ON P.ID_Donnees_Personnel = D.ID_Donnees_Personnel"; 
}


//Requete SQL SELECT ONE PERSON
System::String^ NS_Mappage::Personnel::Selectone(void) {
    return "SELECT * FROM Personnel P INNER JOIN Donnees_personnel D On P.ID_Donnees_Personnel = D.ID_Donnees_Personnel WHERE Id_Personnel = '" + this->getId_Personnel() + "'";
}

//setid
void NS_Mappage::Personnel::setId_Personnel(int Id)
{
    this->Id = Id;
}
//setidsupérieur
void NS_Mappage::Personnel::setId_Supérieur(int Id_Superieur)
{
    this->Id_Superieur = Id_Superieur;
}
//setnom
void NS_Mappage::Personnel::setNom_Personnel(System::String^ Nom_Employe)
{
    this->Nom_Employe = Nom_Employe;
}
//setprenom
void NS_Mappage::Personnel::setPrenom_Personnel(System::String^ Prenom_Employe)
{
    this->Prenom_Employe = Prenom_Employe;
}

//setdateembauche
void NS_Mappage::Personnel::setDate_embauche(System::String^ Date_Embauche_Employe)
{
    this->Date_Embauche_Employe = Date_Embauche_Employe;
}

//setadressepersonnel
void NS_Mappage::Personnel::setAdresse_Personnel(System::String^ Adresse_Personnel) {
    this->Adresse_Personnel = Adresse_Personnel;
}

void NS_Mappage::Personnel::setCode_Postal_personnel(System::String^ Code_Postal_personnel) {
    this->Code_Postal_personnel = Code_Postal_personnel;
}

void NS_Mappage::Personnel::setVille_Personne(System::String^ Ville_Personne) {
    this->Ville_Personne = Ville_Personne;
}

int NS_Mappage::Personnel::getId_Personnel(void) { return this->Id; }
System::String^ NS_Mappage::Personnel::getNom_Personnel(void) { return this->Nom_Employe; }
System::String^ NS_Mappage::Personnel::getPrenom_Personnel(void) { return this->Prenom_Employe; }
int NS_Mappage::Personnel::getId_Superieur(void) { return this->Id_Superieur; }
System::String^ NS_Mappage::Personnel::getDate_embauche(void) { return this->Date_Embauche_Employe; }
System::String^ NS_Mappage::Personnel::getAdresse_Personnel(void) {
    return this->Adresse_Personnel;
}
System::String^ NS_Mappage::Personnel::getCode_Postal_personnel(void) {
    return this->Code_Postal_personnel;
}
System::String^ NS_Mappage::Personnel::getVille_Personne(void) {
    return this->Ville_Personne
        ;
}