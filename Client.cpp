#include "Client.h"
#include "pch.h"

System::String^ NS_Mappage::Client::Selectall(void)
{
	return "SELECT * FROM [Livrable].[dbo].[Client] INNER JOIN Adresse_Client ON Id_Client = Id_Adresse_Client";
}
System::String^ NS_Mappage::Client::Selectone(void)
{
	return "SELECT * FROM [Livrable].[dbo].[Client] INNER JOIN Adresse_Client ON Id_Client = Id_Adresse_Client WHERE Id_Client = '" + this->getId() +"'";
}
System::String^ NS_Mappage::Client::InsertClient(void)
{
	return "INSERT INTO Client(Nom_Client, Prenom_Client, Num_Tel_Client, Date_naissance_Client, Date_1er_Achat) VALUES ('" + this->Nom_Client + "','" + this->Prenom_Client + "','" + this->Num_Tel_Client + "','" + this->Date_naissance_Client + "','" + this->Date_1er_achat + "');";
}
System::String^ NS_Mappage::Client::InsertAdresse(void)
{
	return "INSERT INTO Adresse_Client(Adresse_facturation, Adresse_Livraison, Code_Postal_Adresse_Facturation_CLient, Ville_Adresse_Client, Code_Postal_Adresse_Livraison_Client) VALUES('" + this->Adr_fact + "', '" + this->Adr_liv + "', '" + this->CP_fact + "', '" + this->ville + "', '" + this->CP_liv + "');";
}
System::String^ NS_Mappage::Client::Delete(void)
{
	return "DELETE FROM Client WHERE Id_Client = '" + this->getId() + "'";
}
System::String^ NS_Mappage::Client::Update(void)
{
	return "UPDATE Client SET Nom_Client = '" + this->Nom_Client +"', Prenom_Client = '" + this->Prenom_Client + "', Num_Tel_Client = '" + this->Num_Tel_Client + "', Date_naissance_Client = '" + this->Date_naissance_Client + "', Date_1er_Achat = '" + this->Date_1er_achat +"' WHERE Id_Client = '"+ this->getId() +"'";
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
void NS_Mappage::Client::setAdr_fact(System::String^ Adr_fact)
{
	this->Adr_fact = Adr_fact;
}
void NS_Mappage::Client::setAdr_liv(System::String^ Adr_liv)
{
	this->Adr_liv = Adr_liv;
}
void NS_Mappage::Client::setCP_fact(System::String^ CP_fact)
{
	this->CP_fact = CP_fact;
}
void NS_Mappage::Client::setVille(System::String^ ville)
{
	this->ville = ville;
}
void NS_Mappage::Client::setCP_liv(System::String^ CP_liv)
{
	this->CP_liv = CP_liv;
}
int NS_Mappage::Client::getId(void) { return this->Id; }
System::String^ NS_Mappage::Client::getNom(void) { return this->Nom_Client; }
System::String^ NS_Mappage::Client::getPrenom(void) { return this->Prenom_Client; }
System::String^ NS_Mappage::Client::getTel(void) { return this->Num_Tel_Client; }
System::String^ NS_Mappage::Client::getBirthDate(void) { return this->Date_naissance_Client; }
System::String^ NS_Mappage::Client::getPurchaseDate(void) { return this->Date_1er_achat; }
System::String^ NS_Mappage::Client::getAdr_fact(void) { return this->Adr_fact; }
System::String^ NS_Mappage::Client::getAdr_liv(void) { return this->Adr_liv; }
System::String^ NS_Mappage::Client::getCP_fact(void) { return this->CP_fact; }
System::String^ NS_Mappage::Client::getVille(void) { return this->ville; }
System::String^ NS_Mappage::Client::getCP_liv(void) { return this->CP_liv; }