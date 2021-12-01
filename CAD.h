#pragma once

namespace NS_Data
{
	ref class CAD 
	{
	private:
		System::String^ sSql; //création d'un objet géré par un handle de type String.
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx; //utilisation de l'objet SqlConnection afin d'assurer la connectivité avec la source de données 
		System::Data::SqlClient::SqlCommand^ oCmd; //utilisation de SqlCommand afin d'accéder aux commandes de la base de données en vue de retourner ou manipuler des données
		System::Data::SqlClient::SqlDataAdapter^ oDA; //utilisation de sqlDataAdapter afin d'établir une passerelle entre Dataset et la source de données. Utilisation des commandes SELECT, INSERT, UPDATE,DELETE
		System::Data::DataSet^ oDs; //permet de stocker les données traitées
	public:
		CAD(void);	
		System::Data::DataSet^ getRows(System::String^, System::String^);//avoir toutes les lignes d'une table
		void actionRows(System::String^);//avoir uneligne de la table
	};
}

