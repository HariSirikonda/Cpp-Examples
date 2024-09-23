#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
    private :
        int employee_id;
        string name;
    public :
        Employee(int id , string n)
        {
            name = n;
            employee_id = id;
        }
        int getId(){return employee_id;}
        string getName(){return name;}
};

class fullTime : public Employee
{
    private:
        int salary;
    public:
        fullTime(int id, string n,int s):Employee(id,n)
        {
            salary = s;
        }
        int getSalary(){return salary;}
};

int main()
{
    cout << "Main Function Begins...\n\n" << endl;
    fullTime e1(002, "Hari kiran", 100000);
    cout << "ID : " << e1.getId() << endl;
    cout << "Nme : " << e1.getName() << endl;
    cout << "Salary : " << e1.getSalary() << endl;

    return 0;
}