#include "Sup�rieur.h"
#include "Personnel.h"
#include "pch.h"
#pragma once

//Requete SQL SELECT ALL Sup�rieur
System::String^ NS_Mappage::Sup�rieur::Select(void)
{
    return "SELECT * FROM Superieur S INNER JOIN Personnel P ON S.ID_Superieur = P.ID_Superieur";

}

//Requete SQL Insert
System::String^ NS_Mappage::Sup�rieur::Insert(void)
{
    return "INSERT INTO Superieur (Nom_Employe, Prenom_Employe, Date_Embauche_Employe, ID_Superieur_Personnel, Id_Personnel, Id_Donnees_Personnel) VALUES('" + this->getDate_embauche() + "','" + this->getId_Personnel() + "','" + this->getId_Donnees_personnel() + "','" + this->getId_Superieur_Personnel() + "','" + this->getNom_Personnel() + "', '" + this->getPrenom_Personnel() + "',(select ID_Donnees_Personnel from Donnees_personnel where Adrese_Personnel = '" + this->getAdresse_Personnel() + "')); ";
}
//Requete SQL DELETE
System::String^ NS_Mappage::Sup�rieur::Delete(void)
{
    return "DELETE FROM Superieur WHERE ID_Superieur = '" + this->getId_Superieur() + "'";
}

//Requete SQL UPDATE
System::String^ NS_Mappage::Sup�rieur::Update(void)
{
    return "UPDATE Personnel SET Nom_Employe = '" + this->getNom_Personnel() + "', Prenom_Employe = '" + this->getPrenom_Personnel() + "', Date_Embauche_Employe = '" + this->getDate_embauche() + "', ID_Personnel=" + this->getId_Personnel()+"',ID_Superieur_Personnel="+ this->getId_Superieur_Personnel()+"', Id_Donnees_Personnel = '" + this->getId_Donnees_personnel() + "' WHERE(ID_Superieur = " + this->getId_Superieur() + "); ";
}

//Requete SQL SELECT ONE PERSON
System::String^ NS_Mappage::Sup�rieur::Selectone(void) {
    return "SELECT * FROM Personnel P INNER JOIN Donnees_personnel D On P.ID_Superieur = D.ID_Superieur WHERE ID_Superieur = '" + this->getId_Superieur() + "'";
}

//set ID de la table Personnel
void NS_Mappage::Sup�rieur::setId_Personnel(int Id_Personnel)
{
    this->Id_Personnel = Id_Personnel;
}

//setidsup�rieur de la table SUp�rieur
void NS_Mappage::Sup�rieur::setId_Superieur(int Id)
{
    this->Id = Id;
}

//set id donn�es personnel
void NS_Mappage::Sup�rieur::setId_Donnees_personnel(int Id_Donnees_Personnel)
{
    this->Id_Donnees_Personnel = Id_Donnees_Personnel;
}

//set id superieur personnel
void NS_Mappage::Sup�rieur::setId_Superieur_Personnel(int Id_Superieur_Personnel)
{
    this->Id_Superieur_Personnel = Id_Superieur_Personnel;
}
//setnom
void NS_Mappage::Sup�rieur::setNom_Personnel(System::String^ Nom_Employe)
{
    this->Nom_Employe = Nom_Employe;
}
//setprenom
void NS_Mappage::Sup�rieur::setPrenom_Personnel(System::String^ Prenom_Employe)
{
    this->Prenom_Employe = Prenom_Employe;
}

//setdateembauche
void NS_Mappage::Sup�rieur::setDate_embauche(System::String^ Date_Embauche_Employe)
{
    this->Date_Embauche_Employe = Date_Embauche_Employe;
}

//setadressepersonnel
void NS_Mappage::Sup�rieur::setAdresse_Personnel(System::String^ Adresse_Personnel) {
    this->Adresse_Personnel = Adresse_Personnel;
}

void NS_Mappage::Sup�rieur::setCode_Postal_personnel(System::String^ Code_Postal_personnel) {
    this->Code_Postal_personnel = Code_Postal_personnel;
}

void NS_Mappage::Sup�rieur::setVille_Personne(System::String^ Ville_Personne) {
    this->Ville_Personne = Ville_Personne;
}


//
// Getteurs
// 
//getID Personnel de la table Personnel
int NS_Mappage::Sup�rieur::getId_Personnel(void) { return this->Id_Personnel; }
//getID Sup�rieur de la table SUp�rieur
int NS_Mappage::Sup�rieur::getId_Superieur(void) { return this->Id; }
//getNom
System::String^ NS_Mappage::Sup�rieur::getNom_Personnel(void) { return this->Nom_Employe; }
//getPrenom
System::String^ NS_Mappage::Sup�rieur::getPrenom_Personnel(void) { return this->Prenom_Employe; }
//get Date embauche
System::String^ NS_Mappage::Sup�rieur::getDate_embauche(void) { return this->Date_Embauche_Employe; }
//get Adresse
System::String^ NS_Mappage::Sup�rieur::getAdresse_Personnel(void) {
    return this->Adresse_Personnel;
}
//get Code Postal
System::String^ NS_Mappage::Sup�rieur::getCode_Postal_personnel(void) {
    return this->Code_Postal_personnel;
}
//get Ville
System::String^ NS_Mappage::Sup�rieur::getVille_Personne(void) {
    return this->Ville_Personne
        ;
}
//get ID donn�es personnel table personnel
int NS_Mappage::Sup�rieur::getId_Donnees_personnel(void) {
    return this->Id_Donnees_Personnel;
}
//get ID superieur personnel
int NS_Mappage::Sup�rieur::getId_Superieur_Personnel(void) {
    return this->Id_Superieur_Personnel;
}