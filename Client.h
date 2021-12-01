#pragma once
namespace NS_Mappage
{
	ref class Client
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ Nom_Client;
		System::String^ Prenom_Client;
		System::String^ Num_Tel_Client;
		System::String^ Date_naissance_Client;
		System::String^ Date_1er_achat;
		System::String^ Adr_fact;
		System::String^ Adr_liv;
		System::String^ CP_fact;
		System::String^ ville;
		System::String^ CP_liv;
	public:
		System::String^ Selectall(void);
		System::String^ Selectone(void);
		System::String^ InsertClient(void);
		System::String^ InsertAdresse(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setTel(System::String^);
		void setBirthDate(System::String^);
		void setPurchaseDate(System::String^);
		void setAdr_fact(System::String^);
		void setAdr_liv(System::String^);
		void setCP_fact(System::String^);
		void setVille(System::String^);
		void setCP_liv(System::String^);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getTel(void);
		System::String^ getBirthDate(void);
		System::String^ getPurchaseDate(void);
		System::String^ getAdr_fact(void);
		System::String^ getAdr_liv(void);
		System::String^ getCP_fact(void);
		System::String^ getVille(void);
		System::String^ getCP_liv(void);
	};
}
