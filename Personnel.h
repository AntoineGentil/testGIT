#pragma once
//classe de mappage pour les personnels
namespace NS_Mappage {
	ref class Personnel
	{
	private :
        System::String^ sSql;
        int Id;
        int Id_Superieur;
        System::String^ Nom_Employe;
        System::String^ Prenom_Employe;
        System::String^ Date_Embauche_Employe;
        System::String^ Adresse_Personnel;
        System::String^ Code_Postal_personnel;
        System::String^ Ville_Personne;
    public :
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        System::String^ UpdateAdresse(void);
        System::String^ Selectone(void);
        System::String^ InsertAdressepersonnel(void);

        void setId_Personnel(int);
        void setId_Supérieur(int);
        void setNom_Personnel(System::String^);
        void setPrenom_Personnel(System::String^);
        void setDate_embauche(System::String^);
        void setAdresse_Personnel(System::String^);
        void setCode_Postal_personnel(System::String^);
        void setVille_Personne(System::String^);

        int getId_Personnel(void);
        int getId_Superieur(void);
        System::String^ getNom_Personnel(void);
        System::String^ getPrenom_Personnel(void);
        System::String^ getDate_embauche(void);
        System::String^ getAdresse_Personnel(void);
        System::String^ getCode_Postal_personnel(void);
        System::String^ getVille_Personne(void);
	};
}

