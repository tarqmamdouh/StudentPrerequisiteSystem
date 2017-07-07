#include"old_user.h"
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace std;

string Converts(String ^ s)
{
	std::string x;
	x = marshal_as<std::string>(s);
	return x;
}

old_users::old_users() {
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select * from courses", connect);
	SqlDataReader^ rdr = cmd->ExecuteReader();
	while (rdr->Read())
	{
		courses.insert(make_pair(Converts(rdr["course_name"]->ToString()), Converts(rdr["period"]->ToString())));
	}
	rdr->Close();
	connect->Close();
}

void old_users::fill(ListBox^ all) {
	unordered_map<string, string>::iterator i;
	for (i = courses.begin(); i != courses.end(); ++i)
	{
		String^ s = gcnew String(i->first.c_str());
		all->Items->Add(s);
	}
}

void old_users::get_pre(ListBox^ prerequisite) {
	for (int i = 0; i < prerequisite->Items->Count; i++) {
		{
			current_courses.push_back(Converts(prerequisite->Items[i]->ToString()));
		}
	}
}

void old_users::show(DataGridView^ course) {
	unordered_map<string, string>::iterator i;
	int ind = 0;
	for (i = courses.begin(); i != courses.end(); ++i)
	{
		String^ s = gcnew String(i->first.c_str());
		String^ s2 = gcnew String(i->second.c_str());
		course->Rows->Add();
		course->Rows[ind]->Cells[0]->Value = s;
		course->Rows[ind]->Cells[1]->Value = s2;
	}
}

void old_users::save() {
	vector<string>::iterator i;
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	for (i = current_courses.begin(); i != current_courses.end(); ++i)
	{
		String^ s = gcnew String((*i).c_str());
		//	String^ insertString2 = "INSERT INTO prerequistie (course_name , prerequistie) VALUES ('" + name + "', '" + s + "')";
		//	SqlCommand^ cmd2 = gcnew SqlCommand(insertString2, connect);
		//	cmd2->ExecuteNonQuery();
	}
	connect->Close();
}

void old_users::search(String ^ pre) {
	std::vector<std::string>avaliable_courses;

	unordered_map<string, string>::iterator i;
	int ind = 0;
	bool is = false;
	for (i = pre_courses.begin(); i != pre_courses.end(); ++i)
	{
		String^ s = gcnew String(i->first.c_str());
		String^ s2 = gcnew String(i->second.c_str());
		if (pre == s) {
			avaliable_courses.push_back(Converts(s2));
			is = true;
		}
		if (!is) {
			MessageBox::Show("No Courses found !");
		}
	}
}

void old_users::remove(String^ name, String^ c_n) {
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ d2 = gcnew SqlCommand("DELETE FROM first WHERE course_name = '" + name + "' AND course_name = '" + c_n + "'", connect);
	d2->ExecuteNonQuery();
}


