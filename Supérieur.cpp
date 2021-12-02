#include "Supérieur.h"
#include "Personnel.h"
#include "pch.h"
#pragma once

//Requete SQL SELECT ALL Supérieur
System::String^ NS_Mappage::Supérieur::Select(void)
{
    return "SELECT * FROM Superieur S INNER JOIN Personnel P ON S.ID_Superieur = P.ID_Superieur";

}

//Requete SQL Insert
System::String^ NS_Mappage::Supérieur::Insert(void)
{
    return "INSERT INTO Superieur (Nom_Employe, Prenom_Employe, Date_Embauche_Employe, ID_Superieur_Personnel, Id_Personnel, Id_Donnees_Personnel) VALUES('" + this->getDate_embauche() + "','" + this->getId_Personnel() + "','" + this->getId_Donnees_personnel() + "','" + this->getId_Superieur_Personnel() + "','" + this->getNom_Personnel() + "', '" + this->getPrenom_Personnel() + "',(select ID_Donnees_Personnel from Donnees_personnel where Adrese_Personnel = '" + this->getAdresse_Personnel() + "')); ";
}
//Requete SQL DELETE
System::String^ NS_Mappage::Supérieur::Delete(void)
{
    return "DELETE FROM Superieur WHERE ID_Superieur = '" + this->getId_Superieur() + "'";
}

//Requete SQL UPDATE
System::String^ NS_Mappage::Supérieur::Update(void)
{
    return "UPDATE Personnel SET Nom_Employe = '" + this->getNom_Personnel() + "', Prenom_Employe = '" + this->getPrenom_Personnel() + "', Date_Embauche_Employe = '" + this->getDate_embauche() + "', ID_Personnel=" + this->getId_Personnel()+"',ID_Superieur_Personnel="+ this->getId_Superieur_Personnel()+"', Id_Donnees_Personnel = '" + this->getId_Donnees_personnel() + "' WHERE(ID_Superieur = " + this->getId_Superieur() + "); ";
}

//Requete SQL SELECT ONE PERSON
System::String^ NS_Mappage::Supérieur::Selectone(void) {
    return "SELECT * FROM Personnel P INNER JOIN Donnees_personnel D On P.ID_Superieur = D.ID_Superieur WHERE ID_Superieur = '" + this->getId_Superieur() + "'";
}

//set ID de la table Personnel
void NS_Mappage::Supérieur::setId_Personnel(int Id_Personnel)
{
    this->Id_Personnel = Id_Personnel;
}

//setidsupérieur de la table SUpérieur
void NS_Mappage::Supérieur::setId_Superieur(int Id)
{
    this->Id = Id;
}

//set id données personnel
void NS_Mappage::Supérieur::setId_Donnees_personnel(int Id_Donnees_Personnel)
{
    this->Id_Donnees_Personnel = Id_Donnees_Personnel;
}

//set id superieur personnel
void NS_Mappage::Supérieur::setId_Superieur_Personnel(int Id_Superieur_Personnel)
{
    this->Id_Superieur_Personnel = Id_Superieur_Personnel;
}
//setnom
void NS_Mappage::Supérieur::setNom_Personnel(System::String^ Nom_Employe)
{
    this->Nom_Employe = Nom_Employe;
}
//setprenom
void NS_Mappage::Supérieur::setPrenom_Personnel(System::String^ Prenom_Employe)
{
    this->Prenom_Employe = Prenom_Employe;
}

//setdateembauche
void NS_Mappage::Supérieur::setDate_embauche(System::String^ Date_Embauche_Employe)
{
    this->Date_Embauche_Employe = Date_Embauche_Employe;
}

//setadressepersonnel
void NS_Mappage::Supérieur::setAdresse_Personnel(System::String^ Adresse_Personnel) {
    this->Adresse_Personnel = Adresse_Personnel;
}

void NS_Mappage::Supérieur::setCode_Postal_personnel(System::String^ Code_Postal_personnel) {
    this->Code_Postal_personnel = Code_Postal_personnel;
}

void NS_Mappage::Supérieur::setVille_Personne(System::String^ Ville_Personne) {
    this->Ville_Personne = Ville_Personne;
}


//
// Getteurs
// 
//getID Personnel de la table Personnel
int NS_Mappage::Supérieur::getId_Personnel(void) { return this->Id_Personnel; }
//getID Supérieur de la table SUpérieur
int NS_Mappage::Supérieur::getId_Superieur(void) { return this->Id; }
//getNom
System::String^ NS_Mappage::Supérieur::getNom_Personnel(void) { return this->Nom_Employe; }
//getPrenom
System::String^ NS_Mappage::Supérieur::getPrenom_Personnel(void) { return this->Prenom_Employe; }
//get Date embauche
System::String^ NS_Mappage::Supérieur::getDate_embauche(void) { return this->Date_Embauche_Employe; }
//get Adresse
System::String^ NS_Mappage::Supérieur::getAdresse_Personnel(void) {
    return this->Adresse_Personnel;
}
//get Code Postal
System::String^ NS_Mappage::Supérieur::getCode_Postal_personnel(void) {
    return this->Code_Postal_personnel;
}
//get Ville
System::String^ NS_Mappage::Supérieur::getVille_Personne(void) {
    return this->Ville_Personne
        ;
}
//get ID données personnel table personnel
int NS_Mappage::Supérieur::getId_Donnees_personnel(void) {
    return this->Id_Donnees_Personnel;
}
//get ID superieur personnel
int NS_Mappage::Supérieur::getId_Superieur_Personnel(void) {
    return this->Id_Superieur_Personnel;
}