#include "Service.h"
#include "pch.h"

NS_Service::Service::Service(void)
{
	this->oCad = gcnew NS_Data::CAD();
	this->oMappTB = gcnew NS_Mappage::Client();
}
System::Data::DataSet^ NS_Service::Service::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Selectall();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Service::Service::selectionnerUnePersonne(System::String^ dataTableName, int Id)
{
	System::String^ sql;
	this->oMappTB->setId(Id);
	sql = this->oMappTB->Selectone();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Service::Service::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ Num, System::String^ date_naissance, System::String^ date_achat)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setTel(Num);
	this->oMappTB->setBirthDate(date_naissance);
	this->oMappTB->setPurchaseDate(date_achat);
	sql = this->oMappTB->InsertClient();

	this->oCad->actionRows(sql);
}
void NS_Service::Service::ajouterUneAdresse(System::String^ Adr_fact, System::String^ Adr_liv, System::String^ CP_fact, System::String^ ville, System::String^ CP_liv)
{
	System::String^ sql;

	this->oMappTB->setAdr_fact(Adr_fact);
	this->oMappTB->setAdr_liv(Adr_liv);
	this->oMappTB->setCP_fact(CP_fact);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCP_liv(CP_liv);
	sql = this->oMappTB->InsertAdresse();

	this->oCad->actionRows(sql);
}
void NS_Service::Service::deletesomeone(int Id) {
	System::String^ sql;
	this->oMappTB->setId(Id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
	
}
void NS_Service::Service::modifierClient(int Id, System::String^ nom, System::String^ prenom, System::String^ Num, System::String^ date_naissance, System::String^ date_achat)
{
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