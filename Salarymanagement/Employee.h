#include <iostream>

#ifndef EMPLOYEE
#define EMPLOYEE

class Employee
{
    public:
        Employee(long id = 0, string last = "", string first = "", string Class = "", double salary = 0);
        virtual void display(ostream & out) const;

    private:
        long myIdNum;
        string myLastName, myFirstName;
        string myClass;
        double mySalary;
};

//--- Definition of Employee's Constructor
inline Employee::Employee(long id, string last, string first, string Class, double salary)
    : myIdNum(id), myLastName(last), myFirstName(first), myClass(Class), mySalary(salary)
    {}

//--- Definition of Employee's display()
inline void Employee::display(ostream & out) const
{
    out << " Employee ID: " << myIdNum << "\t Name: " << myLastName << " "
        << myFirstName << "\t Employee class: "<< myClass << "\t Salary: $" << mySalary << " ";
}

//--- Definition of cout << operator overload
inline ostream & operator<<(ostream & out, const Employee & emp)
{
    emp.display(out);
    return out;
};

#endif
