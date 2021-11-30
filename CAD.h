#pragma once

namespace NS_Data
{
	ref class CAD
	{
	private:
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
	public:
		CAD(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
	};
}