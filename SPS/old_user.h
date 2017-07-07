#include<unordered_map>
#include<algorithm>
#include <msclr\marshal_cppstd.h>
#include<string>
#include <vector>
using namespace System;
using namespace msclr::interop;
using namespace System::Windows::Forms;
using namespace System::Data;

#ifndef OLD_USER
#define OLD_USER
class old_users {
	std::unordered_map<std::string, std::string>courses;
	std::unordered_map<std::string, std::string>pre_courses;
	std::vector<std::string>current_courses;
public:
	old_users();
	void fill(ListBox^ all);
	void get_pre(ListBox^ prerequisite);
	void show(DataGridView^ course);
	void save();
	void search(String ^ pre);
	void remove(String^ name, String^ c_n);

};
#endif


