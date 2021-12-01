#pragma once

namespace NS_Data
{
	ref class CAD 
	{
	private:
		System::String^ sSql; //cr�ation d'un objet g�r� par un handle de type String.
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx; //utilisation de l'objet SqlConnection afin d'assurer la connectivit� avec la source de donn�es 
		System::Data::SqlClient::SqlCommand^ oCmd; //utilisation de SqlCommand afin d'acc�der aux commandes de la base de donn�es en vue de retourner ou manipuler des donn�es
		System::Data::SqlClient::SqlDataAdapter^ oDA; //utilisation de sqlDataAdapter afin d'�tablir une passerelle entre Dataset et la source de donn�es. Utilisation des commandes SELECT, INSERT, UPDATE,DELETE
		System::Data::DataSet^ oDs; //permet de stocker les donn�es trait�es
	public:
		CAD(void);	
		System::Data::DataSet^ getRows(System::String^, System::String^);//avoir toutes les lignes d'une table
		void actionRows(System::String^);//avoir uneligne de la table
	};
}

