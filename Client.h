#pragma once
//classe de mappage
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
    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        System::String^ Selectone(void);
        void setId(int);
        void setNom(System::String^);
        void setPrenom(System::String^);
        void setTel(System::String^);
        void setBirthDate(System::String^);
        void setPurchaseDate(System::String^);
        int getId(void);
        System::String^ getNom(void);
        System::String^ getPrenom(void);
        System::String^ getTel(void);
        System::String^ getBirthDate(void);
        System::String^ getPurchaseDate(void);
    };
}
