#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
public:
	Student();
	~Student();
	void set_age(int _age);
	void set_standard(int _standard);
	void set_first_name(string _first_name);
	void set_last_name(string _last_name);
	int get_age() { return age; }
	int get_standard() { return standard; }
	string get_first_name() { return first_name; }
	string get_last_name() { return last_name; }
	string to_string();
private:
	int age;
	int standard;
	string first_name;
	string last_name;
};
void Student::set_age(int _age)
{
	age = _age;
}
void Student::set_standard(int _standard)
{
	standard = _standard;
}
void Student::set_first_name(string _first_name)
{
	first_name = _first_name;
}
void Student::set_last_name(string _last_name)
{
	last_name = _last_name;
}
string Student::to_string()
{
	string str;
	str = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
	return str;
}
Student::Student()
{
}

Student::~Student()
{
}

int main() {
	int age, standard;
	string first_name = new char[51];
	string last_name = new char[51];

	cin >> age >> first_name >> last_name >> standard;

	Student st;
	st.set_age(age);
	st.set_standard(standard);
	st.set_first_name(first_name);
	st.set_last_name(last_name);

	cout << st.get_age() << "\n";
	cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
	cout << st.get_standard() << "\n";
	cout << "\n";
	cout << st.to_string();

	return 0;
}