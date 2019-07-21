#include "Employee.h"

#ifndef WAITER
#define WAITER

class Waiter : public Employee
{
    public:
        Waiter(long id = 0, string last = "", string first = "", string Class = "", int YearsServed = 0, double tips=0);
        virtual void display(ostream & out) const;
        // Calculate_salary for waiter takes the tips they received as an argument
        // and returns 3000 + tips
        virtual double Calculate_salary(double tips);

    private:
        int myYearsServed;
};

//--- Definition of Waiter's Constructor
inline Waiter::Waiter(long id, string last, string first, string Class, int YearsServed, double tips)
    : Employee(id, last, first, Class, this->Calculate_salary(tips)), myYearsServed(YearsServed)
    {}

//--- Definition of Waiter's display()
inline void Waiter::display(ostream & out) const
{
    Employee::display(out);
    out << "\t Years served: " << myYearsServed;
}

//--- Definition of Waiter's Calculate_salary()
double Waiter::Calculate_salary(double tips)
{
    return 3000+tips;
};

#endif
