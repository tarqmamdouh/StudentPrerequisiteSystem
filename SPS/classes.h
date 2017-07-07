#include<unordered_map>
#include<algorithm>
#include <msclr\marshal_cppstd.h>
#include<string>
#include <vector>
using namespace System;
using namespace msclr::interop;
using namespace System::Windows::Forms;
using namespace System::Data;

class signin
{
	std::unordered_map<std::string, std::string> info;
public:
	signin();
	bool check(String^ u, String^ p);
	std::string checktype(String^ u);
	bool NEW(String^ n);
};

class reg
{
	std::vector<std::string> users;
public:
	reg();
	bool check_user(String^ u);
	void save_to_DB(String^ n, String^ u, String^ p, String^ e, String^ pos);
};

class admin {
	std::unordered_map<std::string, std::string> courses;
	std::unordered_map<std::string, std::string> courses_pre;
	std::vector <std::string> students;
public:
	std::vector <std::string> course_pre;
	admin();
	bool check(String^ name);
	void refresh(DataGridView^ courses, ListBox^ prerequisite);
	void fill(ListBox^ all);
	void get_pre(ListBox^ prerequisite);
	void show(DataGridView^ courses);
	void save(String^ name, String^ period);
	void search(String^ name);
	void remove(String^ name);
	void select_course(String^ name, ListBox^ pre, ListBox^ all);
};



