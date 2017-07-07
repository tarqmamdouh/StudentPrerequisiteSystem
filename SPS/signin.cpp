#include "signin.h"
using namespace System::Data::SqlClient;

signin::signin()
{
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select * from sys_login", connect);
	SqlDataReader^ rdr = cmd->ExecuteReader();
	while (rdr->Read())
	{
		string user = Converts((rdr["user_name"]->ToString()));
		string pass = Converts((rdr["password"]->ToString()));
		info.insert(std::pair<string,string>(user, pass));
	}
	connect->Close();
}



bool signin::check(String^ u , String^ p) {
	string stduser = Converts(u);
	string stdpass = Converts(p);
	if (!info.count(stduser))
	{
		return false;
	}
	else if (info.at(stduser) != stdpass)
	{
		return false;
	}
	return true;
}

string signin::checktype(String^ u) {
	string user = Converts(u);
	string com = "Select type from info WHERE user_name ='" + user+"'";
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ cmd = gcnew SqlCommand("get_type", connect);
	cmd->Parameters->Add(gcnew SqlParameter("@user", u));
	SqlDataReader^ rdr = cmd->ExecuteReader();
	string type = Converts(rdr["user_name"]->ToString());
	return type;
}