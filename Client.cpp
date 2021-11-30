#include "Client.h"
#include "pch.h"

System::String^ NS_Mappage::Client::Select(void)
{
	return "SELECT [Id_Client], [Nom_Client], [Prenom_Client], [Num_Tel_Client], [Date_Naissance_Client], [Date_1er_achat] FROM [Livrable].[dbo].[Client]";
}
System::String^ NS_Mappage::Client::Insert(void)
{
	return "INSERT INTO Client (Nom_Client, Prenom_Client, Num_Tel_Client, Date_naissance_Client, Date_1er_Achat) VALUES('" + this->Nom_Client + "','" + this->Prenom_Client + "','" + this->Num_Tel_Client + "','" + this->Date_naissance_Client +"','" + this->Date_1er_achat +"');";
}
System::String^ NS_Mappage::Client::Delete(void)
{
	return "DELETE FROM Client WHERE Id_Client = '" +this->Id + "'";
}
System::String^ NS_Mappage::Client::Update(void)
{
	return "";
}
void NS_Mappage::Client::setId(int Id)
{
	this->Id = Id;
}
void NS_Mappage::Client::setNom(System::String^ Nom_Client)
{
	this->Nom_Client = Nom_Client;
}
void NS_Mappage::Client::setPrenom(System::String^ Prenom_Client)
{
	this->Prenom_Client = Prenom_Client;
}
void NS_Mappage::Client::setTel(System::String^ Num_Tel_Client)
{
	this->Num_Tel_Client = Num_Tel_Client;
}
void NS_Mappage::Client::setBirthDate(System::String^ Date_naissance_Client)
{
	this->Date_naissance_Client = Date_naissance_Client;
}
void NS_Mappage::Client::setPurchaseDate(System::String^ Date_1er_achat)
{
	this->Date_1er_achat = Date_1er_achat;
}
int NS_Mappage::Client::getId(int) { return this->Id; }
System::String^ NS_Mappage::Client::getNom(void) { return this->Nom_Client; }
System::String^ NS_Mappage::Client::getPrenom(void) { return this->Prenom_Client; }
System::String^ NS_Mappage::Client::getTel(void) { return this->Num_Tel_Client; }
System::String^ NS_Mappage::Client::getBirthDate(void) { return this->Date_naissance_Client; }
System::String^ NS_Mappage::Client::getPurchaseDate(void) { return this->Date_1er_achat; }