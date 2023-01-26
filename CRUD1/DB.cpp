#include "pch.h"
#include "DB.h"

DB::DB()
{
	this->connectionString = "datasource=localhost; username=root; password=root;database=test;";
	this->conn = gcnew MySqlConnection(this->connectionString);

}


void DB::Openconn()
{
	this->conn->Open();
}


void DB::Closeconn()
{
	this->conn->Close();
}

DataTable^ DB::getData()
{
	String^ sql = "select * from registration";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;

}

void DB::Insert(String^ n, String^ e, String^ c)  
{
	String^ sql = "insert into registration(Name,Age,Course) values ('" + n + "', '" + e + "', '" + c + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}


void DB::Update( String^ n, String^ e, String^ c, String^ ref)
{
	
	String^ sql = "update  registration set Name= '" + n + "', Age = '" + e + "', Course = '" + c + "' where Name = '" + ref + "'";	
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
	    cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::Delete(String^ name) {
	String^ sql = "delete from registration	where Name = '" + name + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Deleted!");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}

}