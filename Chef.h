#include "Employee.h"

#ifndef CHEF
#define CHEF

class Chef : public Employee
{
    public:
        Chef(long id = 0, string last = "", string first = "", string Class = "", string cuisine = "", double profit = 0);
        virtual void display(ostream & out) const;
        // Calculate_salary for chef takes the month's profit as an argument
        // and returns 10000 + 20% of the profit
        virtual double Calculate_salary(double profit);

    private:
        string myCuisine;
};

//--- Definition of Chef's Constructor
inline Chef::Chef(long id, string last, string first, string Class, string cuisine, double profit)
    : Employee(id, last, first, Class, this->Calculate_salary(profit)), myCuisine(cuisine)
    {}

//--- Definition of Chef's display()
inline void Chef::display(ostream & out) const
{
    Employee::display(out);
    out << "\t Cuisine: " << myCuisine;
}

//--- Definition of Chef's Calculate_salary()
double Chef::Calculate_salary(double profit)
{
    return 10000+profit*(20/100.0);
};

#endif
