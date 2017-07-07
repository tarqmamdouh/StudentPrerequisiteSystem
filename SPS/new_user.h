#include<unordered_map>
#include<algorithm>
#include <msclr\marshal_cppstd.h>
#include<string>
#include <vector>
using namespace System;
using namespace msclr::interop;
using namespace System::Windows::Forms;
using namespace System::Data;

class new_user {
	std::unordered_map<std::string, std::string>courses;
	std::unordered_map<std::string, std::string>pre_courses;
	std::vector<std::string>current_courses;
public:
	new_user();
	void fill(ListBox^ all);
	void get_pre(ListBox^ prerequisite);
	void save(String^ n);
};
class old_user {
	std::unordered_map<std::string, std::string>courses;
	std::unordered_map<std::string, std::string>pre_courses;
	std::vector<std::string>current_courses;
	std::vector<std::string>prerequisites;
public:
	old_user();
	void fill(ListBox^ all);
	void get_pre(ListBox^ prerequisite);
	void show(DataGridView^ course);
	void save(String^ name, String^ c_name);
	void search(ListBox^ list, String ^ pre);
	void remove(String^ name, String^ c_n);
	bool checkValid(String^ name, String^ c_n);
	void select(String^ name, ListBox^ pre, ListBox^ all);
};