#include "Employee.h"

#ifndef OWNER
#define OWNER

class Owner : public Employee
{
    public:
        Owner(long id = 0, string last = "", string first = "", string Class = "", double profit = 0);
        // Calculate_salary for owner takes the month's profit as an argument
        // and returns 15000 + 60% of the profit
        virtual double Calculate_salary(double profit);
        //Owner doesn't need its own display function, because it doesn't have any additional member variables
};

//--- Definition of Owner's Constructor
inline Owner::Owner(long id, string last, string first, string Class, double profit)
    : Employee(id, last, first, Class, this->Calculate_salary(profit))
    {}

//--- Definition of Owner's Calculate_salary()
double Owner::Calculate_salary(double profit)
{
    return 15000+profit*(60/100.0);
};

#endif
