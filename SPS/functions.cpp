#include "classes.h"
#include "new_user.h"
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
///////////////////////////////////////////////////////////////////
signin::signin()
{
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select * from sys_login", connect);
	SqlDataReader^ rdr = cmd->ExecuteReader();
	while (rdr->Read())
	{
		string user = Converts((rdr["user_name"]->ToString()));
		string pass = Converts((rdr["password"]->ToString()));
		info.insert(make_pair(user, pass));
	}
	connect->Close();
}

bool signin::check(String^ u, String^ p) {
	unordered_map<string, string>::iterator i;
	string stduser = Converts(u);
	string stdpass = Converts(p);
	i = info.find(stduser);
	if (!info.count(stduser))
	{
		return false;
	}
	if (i->second != stdpass)
	{
		return false;
	}
	return true;
}

string signin::checktype(String^ u) {
	string user = Converts(u);
	string type;
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ cmd = gcnew SqlCommand("select pos from info where user_name = '" + u + "'", connect);
	SqlDataReader^ rdr = cmd->ExecuteReader();
	while (rdr->Read())
	{
		type = Converts(rdr["pos"]->ToString());

	}
	connect->Close();
	return type;
}

bool signin::NEW(String^ n) {
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	string stat;
	SqlCommand^ cmd = gcnew SqlCommand("Select stat from info where user_name = '" + n + "'", connect);
	SqlDataReader^ rdr = cmd->ExecuteReader();
	while (rdr->Read())
	{
		stat = Converts((rdr["stat"]->ToString()));
	}
	connect->Close();
	if (stat == "new")
	{
		return true;
	}
	else
	{
		return false;
	}
}

///////////////////////////////////////////////////////////////////

reg::reg() {
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select user_name from info", connect);
	SqlDataReader^ rdr = cmd->ExecuteReader();
	while (rdr->Read())
	{
		string user = Converts((rdr["user_name"]->ToString()));
		users.push_back(user);
	}
	connect->Close();
}

bool reg::check_user(String^ u) {
	vector<string>::iterator i;
	string stduser = Converts(u);
	for (i = users.begin(); i != users.end(); ++i)
	{
		if (*i == stduser)
		{
			return false;
		}
	}
	return true;
}

void reg::save_to_DB(String^ n, String^ u, String^ p, String^ e, String^ pos) {
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	String^ insertString = "INSERT INTO info (name, user_name , email, pos , stat) VALUES ('" + n + "', '" + u + "' , '" + e + "' , '" + pos + "', 'new')";
	SqlCommand^ cmd = gcnew SqlCommand(insertString, connect);
	cmd->ExecuteNonQuery();
	String^ insertString2 = "INSERT INTO sys_login (user_name , password) VALUES ('" + u + "', '" + p + "')";
	SqlCommand^ cmd2 = gcnew SqlCommand(insertString2, connect);
	cmd2->ExecuteNonQuery();
	connect->Close();
}



///////////////////////////////////////////////////////////////////
admin::admin() {
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select * from courses", connect);
	SqlDataReader^ rdr = cmd->ExecuteReader();
	while (rdr->Read())
	{
		courses.insert(make_pair(Converts(rdr["course_name"]->ToString()), Converts(rdr["period"]->ToString())));
	}
	rdr->Close();
	SqlCommand^ cmd2 = gcnew SqlCommand("Select user_name from info where pos = 'student'", connect);
	SqlDataReader^ rdr2 = cmd2->ExecuteReader();
	while (rdr2->Read())
	{
		students.push_back(Converts(rdr2["user_name"]->ToString()));
	}
	connect->Close();
}

bool admin::check(String^ name) {
	unordered_map<string, string>::iterator i;
	string tname = Converts(name);
	for (i = courses.begin();i != courses.end();++i)
	{
		if (i->first == tname)
		{
			return true;
		}
	}
	return false;
}

void admin::refresh(DataGridView^ coursess, ListBox^ prerequisite) {
	course_pre.clear();
	courses.clear();
	coursess->Rows->Clear();
	prerequisite->Items->Clear();
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
	fill(prerequisite);
	show(coursess);
	prerequisite->Items->Add("NO PREREQUISITE");
}

void admin::fill(ListBox^ all) {
	unordered_map<string, string>::iterator i;
	for (i = courses.begin();i != courses.end();++i)
	{
		String^ s = gcnew String(i->first.c_str());
		all->Items->Add(s);
	}
}

void admin::get_pre(ListBox^ prerequisite) {
	for (int i = 0; i < prerequisite->Items->Count; i++) {
		{
			course_pre.push_back(Converts(prerequisite->Items[i]->ToString()));
		}
	}
}

void admin::show(DataGridView^ course) {
	unordered_map<string, string>::iterator i;
	int ind = 0;
	for (i = courses.begin();i != courses.end();++i)
	{
		String^ s = gcnew String((i->first).c_str());
		String^ s2 = gcnew String((i->second).c_str());
		course->Rows->Add();
		course->Rows[ind]->Cells[0]->Value = s;
		course->Rows[ind]->Cells[1]->Value = s2;
		ind++;
	}
}

void admin::save(String^ name, String^ period)
{
	vector<string>::iterator i;
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	String^ insertString = "INSERT INTO courses (course_name , period) VALUES ('" + name + "', '" + period + "')";
	SqlCommand^ cmd = gcnew SqlCommand(insertString, connect);
	cmd->ExecuteNonQuery();
	for (i = course_pre.begin(); i != course_pre.end(); ++i)
	{
		String^ s = gcnew String((*i).c_str());
		String^ insertString2 = "INSERT INTO prerequisite (course_name , prerequisite) VALUES ('" + name + "', '" + s + "')";
		SqlCommand^ cmd2 = gcnew SqlCommand(insertString2, connect);
		cmd2->ExecuteNonQuery();
	}
	connect->Close();
}

void admin::search(String^ name) {
	vector<string>::iterator i;
	string s = Converts(name);
	for (i = students.begin(); i != students.end(); ++i)
	{
		if (*i == s)
		{
			String^ S1 = gcnew String((*i).c_str());
			SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
			connect->Open();
			SqlCommand^ cmd = gcnew SqlCommand("Select name , email , user_name from info where user_name = '" + S1 + "'", connect);
			SqlDataReader^ rdr = cmd->ExecuteReader();
			while (rdr->Read())
			{
				MessageBox::Show("user name : " + rdr["user_name"] + "\n" + " name : " + rdr["name"] + "\n" + " Email : " + rdr["email"], "Result", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			rdr->Close();
			return;
		}
	}
	MessageBox::Show("No Student with name : " + name + " Where Found !! ", "NO RESULT", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

void admin::remove(String^ name) {
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ d1 = gcnew SqlCommand("DELETE FROM prerequisite WHERE prerequisite = '" + name + "'", connect);
	d1->ExecuteNonQuery();
	SqlCommand^ d2 = gcnew SqlCommand("DELETE FROM prerequisite WHERE course_name = '" + name + "'", connect);
	d2->ExecuteNonQuery();
	SqlCommand^ d3 = gcnew SqlCommand("DELETE FROM courses WHERE course_name = '" + name + "'", connect);
	d3->ExecuteNonQuery();
}
void admin::select_course(String ^ name, ListBox^ pre, ListBox^ all)
{
	courses_pre.clear();
	pre->Items->Clear();
	string s = Converts(name);
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select * from prerequisite", connect);
	SqlDataReader^ rdr = cmd->ExecuteReader();
	while (rdr->Read())
	{
		courses_pre.insert(make_pair(Converts(rdr["course_name"]->ToString()), Converts(rdr["prerequisite"]->ToString())));
	}
	rdr->Close();
	connect->Close();
	unordered_map<string, string>::iterator i;
	for (i = courses_pre.begin(); i != courses_pre.end(); ++i)
	{
		if (i->first == s)
		{
			String^ S1 = gcnew String(i->second.c_str());
			pre->Items->Add(S1);
			all->Items->Remove(S1);
		}
	}
}
//////////////////////////////////////////////////////////

old_user::old_user() {
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

void old_user::fill(ListBox^ all) {
	unordered_map<string, string>::iterator i;
	for (i = courses.begin(); i != courses.end(); ++i)
	{
		String^ s = gcnew String(i->first.c_str());
		all->Items->Add(s);
	}
}

void old_user::get_pre(ListBox^ prerequisite) {
	for (int i = 0; i < prerequisite->Items->Count; i++) {
		{
			current_courses.push_back(Converts(prerequisite->Items[i]->ToString()));
		}
	}
}

void old_user::show(DataGridView^ course) {
	unordered_map<string, string>::iterator i;
	int ind = 0;
	for (i = courses.begin(); i != courses.end(); ++i)
	{
		String^ s = gcnew String(i->first.c_str());
		String^ s2 = gcnew String(i->second.c_str());
		course->Rows->Add();
		course->Rows[ind]->Cells[0]->Value = s;
		course->Rows[ind]->Cells[1]->Value = s2;
		ind++;
	}
}

void old_user::save(String^ name, String^ c_name) {
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	String^ insertString2 = "INSERT INTO first (user_name , course_name ) VALUES ('" + name + "', '" + c_name + "')";
	SqlCommand^ cmd2 = gcnew SqlCommand(insertString2, connect);
	cmd2->ExecuteNonQuery();
	connect->Close();
}

void old_user::search(ListBox^ listb, String ^ pre)
{
	listb->Items->Clear();
	vector<string> v1;
	vector<string> v2;
	vector<string>::iterator i, i2;
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select * from prerequisite", connect);
	SqlDataReader^ rdr = cmd->ExecuteReader();
	while (rdr->Read())
	{
		v1.push_back(Converts(rdr["prerequisite"]->ToString()));
		v2.push_back(Converts(rdr["course_name"]->ToString()));
	}
	rdr->Close();
	connect->Close();
	string s = Converts(pre);
	for (i = v1.begin(), i2 = v2.begin(); i != v1.end(); i++, i2++)
	{
		if (*i == s)
		{
			String^ S1 = gcnew String((*i2).c_str());
			listb->Items->Add(S1);
		}
	}
}

bool old_user::checkValid(String^ name, String^ c_n) {
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select course_name from first where user_name = '" + name + "'", connect);
	SqlDataReader^ rdr = cmd->ExecuteReader();
	while (rdr->Read())
	{
		current_courses.push_back(Converts(rdr["course_name"]->ToString()));
	}
	rdr->Close();
	SqlCommand^ cmd2 = gcnew SqlCommand("Select prerequisite from prerequisite where course_name = '" + c_n + "'", connect);
	SqlDataReader^ rdr2 = cmd2->ExecuteReader();
	while (rdr2->Read())
	{
		prerequisites.push_back(Converts(rdr2["prerequisite"]->ToString()));
	}
	rdr2->Close();
	connect->Close();
	int v = 0;
	vector<string>::iterator i, i2;
	for (i = current_courses.begin(); i != current_courses.end(); ++i)
	{
		for (i2 = prerequisites.begin(); i2 != prerequisites.end(); ++i2)
		{
			if (*i == *i2)
			{
				v++;
			}
		}
	}
	if (v == prerequisites.size())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void old_user::select(String ^ name, ListBox^ pre, ListBox^ all) {
	current_courses.clear();
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	SqlCommand^ cmd = gcnew SqlCommand("Select course_name from first where user_name = '" + name + "'", connect);
	SqlDataReader^ rdr = cmd->ExecuteReader();
	while (rdr->Read())
	{
		current_courses.push_back(Converts(rdr["course_name"]->ToString()));
	}
	rdr->Close();
	connect->Close();
	vector<string>::iterator i;
	for (i = current_courses.begin(); i != current_courses.end(); ++i)
	{
		String^ S1 = gcnew String((*i).c_str());
		pre->Items->Add(S1);
		all->Items->Remove(S1);
	}
}


//////////////////////////////////////////////////////////

new_user::new_user() {
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

void new_user::fill(ListBox^ all) {
	unordered_map<string, string>::iterator i;
	for (i = courses.begin(); i != courses.end(); ++i)
	{
		String^ s = gcnew String(i->first.c_str());
		all->Items->Add(s);
	}
}

void new_user::get_pre(ListBox^ prerequisite) {
	for (int i = 0; i < prerequisite->Items->Count; i++) {
		{
			current_courses.push_back(Converts(prerequisite->Items[i]->ToString()));
		}
	}
}

void new_user::save(String^ n) {
	vector<string>::iterator i;
	SqlConnection^ connect = gcnew SqlConnection("Data Source=ASUS\\ABDULLAH;Initial Catalog=SPS;Integrated Security=True");
	connect->Open();
	for (i = current_courses.begin(); i != current_courses.end(); ++i)
	{
		String^ s = gcnew String((*i).c_str());
		String^ insertString2 = "INSERT INTO first (user_name , course_name) VALUES ('" + n + "', '" + s + "')";
		SqlCommand^ cmd2 = gcnew SqlCommand(insertString2, connect);
		cmd2->ExecuteNonQuery();
	}
	SqlCommand^ cmd = gcnew SqlCommand("UPDATE info SET stat='old' WHERE user_name='" + n + "'", connect);
	cmd->ExecuteNonQuery();
	connect->Close();
}
