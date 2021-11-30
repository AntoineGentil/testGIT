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

	sql = this->oMappTB->Select();
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
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}
void NS_Service::Service::deletesomeone(int Id) {
	
	this->oMappTB->getId(Id);
	this->oCad->actionRows(this->oMappTB->Delete());
}