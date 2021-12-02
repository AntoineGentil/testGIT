#pragma once
#include"Personnel.h"
//classe de mappage pour les supérieurs des personnels
namespace NS_Mappage {
    ref class Supérieur:public Personnel
    {
    private:
        System::String^ sSql;
        int Id;
        int Id_Superieur_Personnel;
        int Id_Personnel;
        int Id_Donnees_Personnel;
        System::String^ Nom_Employe;
        System::String^ Prenom_Employe;
        System::String^ Date_Embauche_Employe;
        System::String^ Adresse_Personnel;
        System::String^ Code_Postal_personnel;
        System::String^ Ville_Personne;
    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
       
        System::String^ Selectone(void);
        

        void setId_Personnel(int);
        void setId_Superieur(int);
        void setId_Donnees_personnel(int);
        void setId_Superieur_Personnel(int);
        void setNom_Personnel(System::String^);
        void setPrenom_Personnel(System::String^);
        void setDate_embauche(System::String^);
        void setAdresse_Personnel(System::String^);
        void setCode_Postal_personnel(System::String^);
        void setVille_Personne(System::String^);

        int getId_Personnel(void);
        int getId_Superieur(void);
        int getId_Donnees_personnel(void);
        int getId_Superieur_Personnel(void);
        System::String^ getNom_Personnel(void);
        System::String^ getPrenom_Personnel(void);
        System::String^ getDate_embauche(void);
        System::String^ getAdresse_Personnel(void);
        System::String^ getCode_Postal_personnel(void);
        System::String^ getVille_Personne(void);
    };
}

