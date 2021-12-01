#pragma once
#include "Client.h"
#include "CAD.h"

namespace NS_Service
{
	ref class Service
	{
	private:
		NS_Data::CAD^ oCad;
		NS_Mappage::Client^ oMappTB;

	public:
		Service(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		System::Data::DataSet^ selectionnerUnePersonne(System::String^,int);
		void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^);
		void ajouterUneAdresse(System::String^, System::String^, System::String^, System::String^, System::String^);
		void deletesomeone(int);
		void modifierClient(int, System::String^, System::String^, System::String^, System::String^, System::String^);
	};
}