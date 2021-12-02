#include "Service.h"
#include "pch.h"

//Constructeur Service (void)
NS_Service::Service::Service(void)
{
    this->oCad = gcnew NS_Data::CAD();
    this->oMappTB = gcnew NS_Mappage::Client();
    this->oMappPersonnel = gcnew NS_Mappage::Personnel();
}
//SELECT ALL CLIENT
System::Data::DataSet^ NS_Service::Service::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
    System::String^ sql;

    sql = this->oMappTB->Select();
    return this->oCad->getRows(sql, dataTableName);
}

//INSERT CLIENT
void NS_Service::Service::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ Num, System::String^ date_naissance, System::String^ date_achat)
{
    System::String^ sql;

    this->oMappTB->setNom(nom);
    this->oMappTB->setPrenom(prenom);
    this->oMappTB->setTel(Num);
    this->oMappTB->setBirthDate(date_naissance);
    this->oMappTB->setPurchaseDate(date_achat);
    sql = this->oMappTB->Insert();

    this->oCad->actionRows(sql);
}

//DELETE CLIENT 
void NS_Service::Service::deletesomeone(int Id) {
    System::String^ sql;
    this->oMappTB->setId(Id);
    sql = this->oMappTB->Delete();
    this->oCad->actionRows(sql);
}

//UPDATE CLIENT
void NS_Service::Service::updatesomeone(int Id, System::String^ nom, System::String^ prenom, System::String^ Num, System::String^ date_naissance, System::String^ date_achat) {
    System::String^ sql;
    this->oMappTB->setId(Id);
    this->oMappTB->setNom(nom);
    this->oMappTB->setPrenom(prenom);
    this->oMappTB->setTel(Num);
    this->oMappTB->setBirthDate(date_naissance);
    this->oMappTB->setPurchaseDate(date_achat);
    sql = this->oMappTB->Update();
    this->oCad->actionRows(sql);
}

//SELECT 1 CLIENT
System::Data::DataSet^ NS_Service::Service::selectionnerunepersonne(System::String^ dataTableName, int Id)
{
    System::String^ sql;
    this->oMappTB->setId(Id);
    sql = this->oMappTB->Selectone();
    return this->oCad->getRows(sql, dataTableName);
}

//SELECT ALL PERSONNEL & adresse
System::Data::DataSet^ NS_Service::Service::selectionnerToutesLesPersonnel(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappPersonnel->Select();
    return this->oCad->getRows(sql, dataTableName);
}

//INSERT PERSONNEL 
void NS_Service::Service::ajouterUnpersonnel(System::String^ nom_employe, System::String^ prenom_employe,  System::String^ date_embauche_employe, int Id_Superieur)
{
    System::String^ sql;

    this->oMappPersonnel->setNom_Personnel(nom_employe);
    this->oMappPersonnel->setPrenom_Personnel(prenom_employe);
    this->oMappPersonnel->setDate_embauche(date_embauche_employe);
    this->oMappPersonnel->setId_Supérieur(Id_Superieur);
    sql = this->oMappPersonnel->Insert();
    this->oCad->actionRows(sql);
}

//DELETE PERSONNEL
void NS_Service::Service::deleteapersonnel(int Id) {
    System::String^ sql;
    this->oMappPersonnel->setId_Personnel(Id);
    sql = this->oMappPersonnel->Delete();
    this->oCad->actionRows(sql);
}

//UPDATE PERSONNEL
void NS_Service::Service::updateapersonnel(int Id, int Id_Superieur, System::String^ nom_employe, System::String^ prenom_employe, System::String^ date_embauche_employe) {
    System::String^ sql;
    this->oMappPersonnel->setId_Personnel(Id);
    this->oMappPersonnel->setId_Supérieur(Id_Superieur);
    this->oMappPersonnel->setNom_Personnel(nom_employe);
    this->oMappPersonnel->setPrenom_Personnel(prenom_employe);
    this->oMappPersonnel->setDate_embauche(date_embauche_employe);
    sql = this->oMappPersonnel->Update();
    this->oCad->actionRows(sql);
}
//UPDATE ADRESSE PERSONNEL 
void NS_Service::Service::updateAdressepersonnel(System::String^ Adresse_Personnel, System::String^ Code_Postal_personnel, System::String^ Ville_Personne) {
    System::String^ sql;
    this->oMappPersonnel->setAdresse_Personnel(Adresse_Personnel);
    this->oMappPersonnel->setCode_Postal_personnel(Code_Postal_personnel);
    this->oMappPersonnel->setVille_Personne(Ville_Personne);
    sql = this->oMappPersonnel->UpdateAdresse();
    this->oCad->actionRows(sql);
}
//SELECT 1 PERSONNEL
System::Data::DataSet^ NS_Service::Service::selectionnerunpersonnel(System::String^ dataTableName, int Id)
{
    System::String^ sql;
    this->oMappPersonnel->setId_Personnel(Id);
    sql = this->oMappPersonnel->Selectone();
    return this->oCad->getRows(sql, dataTableName);
}

//insert adresse_personnel
void NS_Service::Service::ajouterAdressepersonnel(System::String^ Adresse_Personnel, System::String^ Code_Postal_personnel, System::String^ Ville_Personne){
    System::String^ sql;

    this->oMappPersonnel->setAdresse_Personnel(Adresse_Personnel);
    this->oMappPersonnel->setCode_Postal_personnel(Code_Postal_personnel);
    this->oMappPersonnel->setVille_Personne(Ville_Personne);
    sql = this->oMappPersonnel->InsertAdressepersonnel();
    this->oCad->actionRows(sql);
}

//superieur
//Superieur SELECT ALL
System::Data::DataSet^ NS_Service::Service::selectionnerTouslessuperieurs(System::String^ dataTableName) {
    System::String^ sql;
    sql = this->oMappSuperieur->Select();
    return this->oCad->getRows(sql, dataTableName);
}

//INSERT SUPERIEUR
void NS_Service::Service::ajouterUnSuperieur(System::String^ Date_embauche,System::String^ Nom_Personnel, System::String^ Prenom_Personnel, int Id_Personnel, int Id_Donnees_personnel, int Id_Superieur_Personnel)
{
    System::String^ sql; 
    this->oMappSuperieur->setNom_Personnel(Nom_Personnel);
    this->oMappSuperieur->setPrenom_Personnel(Prenom_Personnel);
    this->oMappSuperieur->setDate_embauche(Date_embauche);
    this->oMappSuperieur->setId_Personnel(Id_Personnel);
    this->oMappSuperieur->setId_Donnees_personnel(Id_Donnees_personnel);
    this->oMappSuperieur->setId_Superieur_Personnel(Id_Superieur_Personnel);
    sql = this->oMappSuperieur->Insert();
    this->oCad->actionRows(sql);
}
//DELETE SUPERIEUR
void NS_Service::Service::deletesuperieur(int Id) {
    System::String^ sql;
    this->oMappSuperieur->setId_Superieur(Id);
    sql = this->oMappPersonnel->Delete();
    this->oCad->actionRows(sql);
}
//UPDATE SUPERIEUR
void NS_Service::Service::updatesuperieur(System::String^ Date_embauche, System::String^ Nom_Personnel, System::String^ Prenom_Personnel,int Id_Personnel, int Id_Donnees_personnel, int Id_Superieur_Personnel, int Id_Superieur) {
    System::String^ sql;
    this->oMappSuperieur->setNom_Personnel(Nom_Personnel);
    this->oMappSuperieur->setPrenom_Personnel(Prenom_Personnel);
    this->oMappSuperieur->setDate_embauche(Date_embauche);
    this->oMappSuperieur->setId_Personnel(Id_Personnel);
    this->oMappSuperieur->setId_Donnees_personnel(Id_Donnees_personnel);
    this->oMappSuperieur->setId_Superieur_Personnel(Id_Superieur_Personnel);
    this->oMappSuperieur->setId_Superieur(Id_Superieur);
    sql = this->oMappSuperieur->Update();
    this->oCad->actionRows(sql);;
}
//SELECT ONE SUPERIEUR
System::Data::DataSet^ NS_Service::Service::selectionnerunSuperieur(System::String^ dataTableName, int Id_Superieur)
{
    System::String^ sql;
    this->oMappSuperieur->setId_Superieur(Id_Superieur);
    sql = this->oMappSuperieur->Selectone();
    return this->oCad->getRows(sql, dataTableName);
}

