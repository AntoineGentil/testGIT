#pragma once
#include "Client.h"
#include "CAD.h"
#include "Personnel.h"
#include "Supérieur.h"
namespace NS_Service
{
    ref class Service
    {
    private:
        NS_Data::CAD^ oCad;
        NS_Mappage::Client^ oMappTB;
        NS_Mappage::Personnel^ oMappPersonnel;
        NS_Mappage::Supérieur^ oMappSuperieur;
    public:
        Service(void);
        System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
        void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^);
        void deletesomeone(int);
        void updatesomeone(int Id, System::String^, System::String^, System::String^, System::String^, System::String^);
        System::Data::DataSet^ selectionnerunepersonne(System::String^, int);

        //personnel
        void ajouterUnpersonnel(System::String^, System::String^, System::String^, int);
        void updateapersonnel(int, int , System::String^, System::String^, System::String^);
        System::Data::DataSet^ selectionnerToutesLesPersonnel(System::String^);
        void deleteapersonnel(int);
        System::Data::DataSet^ selectionnerunpersonnel(System::String^, int);
        
        //personnel adresse 
        void ajouterAdressepersonnel(System::String^, System::String^, System::String^);
        void updateAdressepersonnel(System::String^, System::String^, System::String^);

        //SELECT SUPERIEUR
        System::Data::DataSet^ selectionnerTouslessuperieurs(System::String^);
        //Update/delete/insert Superieur
        void ajouterUnSuperieur(System::String^ , System::String^, System::String^,  int, int, int);
        void deletesuperieur(int);
        void updatesuperieur(System::String^, System::String^, System::String^,  int, int, int, int);
        System::Data::DataSet^ selectionnerunSuperieur(System::String^, int);
    };
}