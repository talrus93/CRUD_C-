#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

ref class DB
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	DB();
	DataTable^ getData();
	void Openconn();
	void Closeconn();
	void Insert(String^, String^, String^);
	void Update( String^, String^, String^, String^);
	void Delete(String^);

};

