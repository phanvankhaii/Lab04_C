#include <iostream>
#include <string>
using namespace std;

class  Employee{
	private:
		string name;
		int idNumber;
		string department;
		string position;
	public:
		Employee(string, int , string, string);
		Employee(string, int);
		Employee();
		
		void setName(string n)
		{name = n;}
		
		void setIdNumber(int i)
		{idNumber = i;}
		
		void setDepartment(string d)
		{department = d;}
		
		void setPosition(string p)
		{position = p;}
		
		string getName() 
		{ return name; }
		
		int getIdNumber() 
		{ return idNumber; }
		
		string getDepartment() 
		{ return department; }
		
		string getPosition() 
		{ return position; }
};
	Employee::Employee(string n, int i, string d, string p)
{
		name = n;
		idNumber = i;
		department = d;
		position = p;
}
// Constructor #2
	Employee:: Employee(string n, int i){
		name = n;
		idNumber = i;
		department = "";
		position = "";
}
	Employee::Employee(){
		name = "";
		idNumber = 0;
		department = "";
		position = "";
}
void displayEmployee(Employee);
int main()
{

	Employee khai("Phan Van Khai", 12653, "IT", "Company President");

	Employee long("Nguyen Ngoc Phi Long", 56239); 
	vu.setDepartment("IT"); 
	vu.setPosition("Programmer");

	Employee hung;
	huynh.setName("Phan Xuan Hung");
	huynh.setIdNumber (52224);
	huynh.setDepartment ("Manufacturing");
	huynh.setPosition("Engineer")
	;
	displayEmployee(khai); 
	displayEmployee(long); 
	displayEmployee(hung);
	
	return 0;
}

void displayEmployee(Employee e)
{
	cout << "Name: " << e.getName() << endl;
	cout << "ID Number: " << e.getIdNumber() << endl;
	cout << "Department: " << e.getDepartment() << endl;
	cout << "Position: " << e.getPosition() << endl << endl;
}

