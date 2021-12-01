#include "CAD.h"
#include "pch.h"


NS_Data::CAD::CAD(void)
{
	this->sCnx = "Data Source=DESKTOP-1B77NPU\\KARL;Initial Catalog=Projet POO;Persist Security Info=True;User ID=CNX_POO;Password=123soleil";
	//création d'un chemin jusqu'à la source de données
	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);//utilisation de SqlConnection afin d'établir une connexion à la base de données
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);//utilisation de SqlCommand afin d'accéder aux commandes de la base de données en vue de retourner ou manipuler des données
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();//utilisation de sqlDataAdapter afin d'établir une passerelle entre Dataset et la source de données. Utilisation des commandes SELECT, INSERT, UPDATE,DELETE
	this->oDs = gcnew System::Data::DataSet();//permet de stocker les données traitées

	this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ NS_Data::CAD::getRows(System::String^ sSql, System::String^ sDataTableName)//SELECT
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;
}

void NS_Data::CAD::actionRows(System::String^ sSql)//INSERT/UPDATE/DELETE
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}