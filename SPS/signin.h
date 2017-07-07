#include<unordered_map>
#include<map>
#include<algorithm>
#include <msclr\marshal_cppstd.h>
#include<string>
using namespace System;
using namespace msclr::interop;
using namespace std;
string Converts(String ^ s)
{
	string x;
	x = marshal_as<std::string>(s);
	return x;
}
class signin
{
	unordered_map<string,string> info;
public:
	signin();
	bool check(String^ u , String^ p );
	string checktype(String^ u);

};

class reg
{
	vector<string> users;
	string name;
	string email;
	string user_name;
	long long phone;
public:
	reg();
private:

};